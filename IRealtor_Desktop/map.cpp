#include "map.h"

#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QWebFrame>
#include <QWebPage>
#include <QResizeEvent>
#include <math.h>

Map::Map(QWidget *parent) : QWebView(parent), pendingRequests(0)
{
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));
    connect(this,SIGNAL(reloadMap()),
            this,SLOT(loadCoordinates()));
}

/*
 * Запрашивает координаты в формате CSV по указанному адресу, мспользуя
 * Google Maps API
 */
void Map::geoCode(const QString& address)
{
    clearCoordinates();
    QString requestStr( tr("http://maps.google.com/maps/geo?q=%1&output=%2&key=%3")
            .arg(address)
            .arg("csv")
            .arg("ABQIAAAAO49nNEVnwxGsuIBDsUs1sBRMlhDm1om-sbK3hx0z3hRQyGwd6hSC3qtdFB_5tj9DICmkSlnZqX5hrw") );

    manager->get( QNetworkRequest(requestStr) );
    ++pendingRequests;
}

void Map::replyFinished(QNetworkReply *reply)
{
    QString replyStr( reply->readAll() );
    QStringList coordinateStrList = replyStr.split(",");

    if( coordinateStrList.size() == 4) {
        QPointF coordinate( coordinateStrList[2].toFloat(),coordinateStrList[3].toFloat() );
        coordinates << coordinate;
    }

    --pendingRequests;
    if( pendingRequests<1 )
        emit( reloadMap() );
}

void Map::loadCoordinates()
{
    QStringList scriptStr;
    scriptStr << QString("map.panTo(new GLatLng(%1, %2));")
                         .arg(coordinates.last().x())
                         .arg(coordinates.last().y());
    page()->mainFrame()->evaluateJavaScript( scriptStr.join("\n") );
}

void Map::clearCoordinates()
{
    coordinates.clear();
}

void Map::resizeEvent(QResizeEvent *event)
{
    if(page())
        page()->setViewportSize(event->size());
    
    int x = event->size().width();
    int y = event->size().height();

    QStringList scriptStr;
    scriptStr
        << "elem = document.getElementById(\"map\");"
        << QString("elem.style.width = '%1px';").arg(x-6)
        << QString("elem.style.height = '%2px';").arg(y-6);

    page()->mainFrame()->evaluateJavaScript( scriptStr.join("\n") );
}


