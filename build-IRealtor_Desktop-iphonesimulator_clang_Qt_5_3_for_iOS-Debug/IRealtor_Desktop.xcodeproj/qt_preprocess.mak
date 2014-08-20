#############################################################################
# Makefile for building: IRealtor_Desktop.app/Contents/MacOS/IRealtor_Desktop
# Generated by qmake (3.0) (Qt 5.3.1)
# Project:  IRealtor_Desktop.pro
# Template: app
# Command: /Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/qmake -spec macx-ios-clang CONFIG+=x86 CONFIG+=iphonesimulator -spec macx-xcode -o IRealtor_Desktop.xcodeproj/project.pbxproj IRealtor_Desktop.pro
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/moc
UIC       = /Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DDARWIN_NO_CARBON -DQT_NO_PRINTER -DQT_NO_PRINTDIALOG -DQT_WIDGETS_LIB -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB
INCPATH       = -I../../../../DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang -I. -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang/ios -I../../../../DevTools/Qt5.3.1/5.3/ios/include -I../../../../DevTools/Qt5.3.1/5.3/ios/include/QtWidgets -I../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql -I../../../../DevTools/Qt5.3.1/5.3/ios/include/QtGui -I../../../../DevTools/Qt5.3.1/5.3/ios/include/QtCore -I. -I. -I.
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compilers: qrc_res.cpp moc_mainwindow.cpp moc_realtyobject.cpp ui_mainwindow.h ui_realtyobject.h
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_rcc_make_all: qrc_res.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_res.cpp
qrc_res.cpp: ../IRealtor_Desktop/res.qrc \
		../IRealtor_Desktop/img/Haus.png \
		../IRealtor_Desktop/img/journal.png \
		../IRealtor_Desktop/img/trade.png
	/Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/rcc -name res ../IRealtor_Desktop/res.qrc -o qrc_res.cpp

compiler_moc_header_make_all: moc_mainwindow.cpp moc_realtyobject.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_realtyobject.cpp
moc_mainwindow.cpp: ../../../../DevTools/Qt5.3.1/5.3/ios/include/QtWidgets/QMainWindow \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtCore/QDebug \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSql \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlDatabase \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlDriver \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlQuery \
		../IRealtor_Desktop/realtyobject.h \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtWidgets/QWidget \
		../IRealtor_Desktop/mainwindow.h
	/Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang -I/Users/diesel/Projects/Qt/IRealtor_Desktop/IRealtor_Desktop -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang/ios -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtWidgets -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtSql -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtGui -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtCore -I. ../IRealtor_Desktop/mainwindow.h -o moc_mainwindow.cpp

moc_realtyobject.cpp: ../../../../DevTools/Qt5.3.1/5.3/ios/include/QtWidgets/QWidget \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSql \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlDatabase \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlDriver \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtSql/QSqlQuery \
		../../../../DevTools/Qt5.3.1/5.3/ios/include/QtCore/QDebug \
		../IRealtor_Desktop/realtyobject.h
	/Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang -I/Users/diesel/Projects/Qt/IRealtor_Desktop/IRealtor_Desktop -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/mkspecs/macx-ios-clang/ios -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtWidgets -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtSql -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtGui -I/Users/diesel/DevTools/Qt5.3.1/5.3/ios/include/QtCore -I. ../IRealtor_Desktop/realtyobject.h -o moc_realtyobject.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_realtyobject.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_realtyobject.h
ui_mainwindow.h: ../IRealtor_Desktop/mainwindow.ui
	/Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/uic ../IRealtor_Desktop/mainwindow.ui -o ui_mainwindow.h

ui_realtyobject.h: ../IRealtor_Desktop/realtyobject.ui
	/Users/diesel/DevTools/Qt5.3.1/5.3/ios/bin/uic ../IRealtor_Desktop/realtyobject.ui -o ui_realtyobject.h

compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_rcc_clean compiler_moc_header_clean compiler_uic_clean 
