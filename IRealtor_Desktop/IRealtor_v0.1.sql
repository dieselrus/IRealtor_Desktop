-- phpMyAdmin SQL Dump
-- version 4.0.10deb1
-- http://www.phpmyadmin.net
--
-- Хост: localhost
-- Время создания: Авг 20 2014 г., 17:58
-- Версия сервера: 5.5.38-0ubuntu0.14.04.1
-- Версия PHP: 5.5.9-1ubuntu4.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- База данных: `IRealtor`
--

-- --------------------------------------------------------

--
-- Структура таблицы `document_property`
--

CREATE TABLE IF NOT EXISTS `document_property` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Структура таблицы `material`
--

CREATE TABLE IF NOT EXISTS `material` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Структура таблицы `realtyobjects`
--

CREATE TABLE IF NOT EXISTS `realtyobjects` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `address` text NOT NULL,
  `region_id` int(11) NOT NULL,
  `type_id` int(11) NOT NULL,
  `status_id` int(11) NOT NULL,
  `trade_id` int(11) NOT NULL,
  `date_create` date NOT NULL,
  `rooms` int(11) NOT NULL,
  `total_area` int(11) NOT NULL,
  `floor_area` int(11) NOT NULL,
  `kitchen_area` int(11) NOT NULL,
  `floors` int(11) NOT NULL,
  `floor` int(11) NOT NULL,
  `material_id` int(11) NOT NULL,
  `balkony` tinyint(1) NOT NULL DEFAULT '0',
  `loggia` tinyint(1) NOT NULL DEFAULT '0',
  `type_apartment_id` int(11) NOT NULL,
  `owner_id` int(11) NOT NULL,
  `document_property_id` int(11) NOT NULL,
  `contact_phone` text NOT NULL,
  `internet` tinyint(1) NOT NULL DEFAULT '0',
  `phone` tinyint(1) NOT NULL DEFAULT '0',
  `cabletv` tinyint(1) NOT NULL DEFAULT '0',
  `central_heating` tinyint(1) NOT NULL DEFAULT '0',
  `central_water` tinyint(1) NOT NULL DEFAULT '0',
  `central_sewage` tinyint(1) NOT NULL DEFAULT '0',
  `price` int(11) NOT NULL DEFAULT '0',
  `percentage_commission` double NOT NULL DEFAULT '0',
  `amount_commission` int(11) NOT NULL DEFAULT '0',
  `coordinates` text,
  `description` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Дамп данных таблицы `realtyobjects`
--

INSERT INTO `realtyobjects` (`id`, `address`, `region_id`, `type_id`, `status_id`, `trade_id`, `date_create`, `rooms`, `total_area`, `floor_area`, `kitchen_area`, `floors`, `floor`, `material_id`, `balkony`, `loggia`, `type_apartment_id`, `owner_id`, `document_property_id`, `contact_phone`, `internet`, `phone`, `cabletv`, `central_heating`, `central_water`, `central_sewage`, `price`, `percentage_commission`, `amount_commission`, `coordinates`, `description`) VALUES
(5, 'Адрес', 0, 0, 0, -1, '2000-01-01', 3, 47, 40, 6, 5, 5, -1, 2, 2, -1, 0, -1, '333', 2, 0, 2, 2, 2, 2, 2800000, 0, 0, 'ui->leCo->text()', '');

-- --------------------------------------------------------

--
-- Структура таблицы `region`
--

CREATE TABLE IF NOT EXISTS `region` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `region`
--

INSERT INTO `region` (`id`, `name`) VALUES
(1, 'Октябрьский'),
(2, 'Свердловский');

-- --------------------------------------------------------

--
-- Структура таблицы `status`
--

CREATE TABLE IF NOT EXISTS `status` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `status`
--

INSERT INTO `status` (`id`, `name`) VALUES
(1, 'Продана'),
(2, 'В продаже');

-- --------------------------------------------------------

--
-- Структура таблицы `trade`
--

CREATE TABLE IF NOT EXISTS `trade` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Структура таблицы `type`
--

CREATE TABLE IF NOT EXISTS `type` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `type`
--

INSERT INTO `type` (`id`, `name`) VALUES
(1, 'Квартира'),
(2, 'Дом');

-- --------------------------------------------------------

--
-- Структура таблицы `type_apartment`
--

CREATE TABLE IF NOT EXISTS `type_apartment` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text CHARACTER SET utf8mb4 NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
