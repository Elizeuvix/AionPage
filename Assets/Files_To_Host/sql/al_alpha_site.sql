/*
Navicat MySQL Data Transfer

Source Server         : server_aion
Source Server Version : 50505
Source Host           : localhost:3306
Source Database       : al_alpha_site

Target Server Type    : MYSQL
Target Server Version : 50505
File Encoding         : 65001

Date: 2023-04-22 10:46:41
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `bulletin`
-- ----------------------------
DROP TABLE IF EXISTS `bulletin`;
CREATE TABLE `bulletin` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `bulletin` varchar(255) NOT NULL,
  `date` datetime NOT NULL,
  `active` tinyint(1) NOT NULL DEFAULT 1 COMMENT '1 or 0',
  `fixed` tinyint(1) NOT NULL DEFAULT 0,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of bulletin
-- ----------------------------
INSERT INTO `bulletin` VALUES ('1', 'Download the Aion 7.7 client and have fun with us in this new world! <color=red>Register!</color>', '2023-04-20 22:57:44', '1', '1');

-- ----------------------------
-- Table structure for `siteusers`
-- ----------------------------
DROP TABLE IF EXISTS `siteusers`;
CREATE TABLE `siteusers` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(45) NOT NULL,
  `password` varchar(65) NOT NULL,
  `email` varchar(45) DEFAULT '',
  `active` tinyint(4) DEFAULT 1,
  `lastlogin` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- ----------------------------
-- Records of siteusers
-- ----------------------------
INSERT INTO `siteusers` VALUES ('1', 'angelina', 'vvoaQoLm0PYtBXfoXqdcAMSWMZY=', 'angelina@gmail.com', '1', null);
