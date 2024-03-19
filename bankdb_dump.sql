CREATE DATABASE  IF NOT EXISTS `bankdb` /*!40100 DEFAULT CHARACTER SET utf8mb3 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `bankdb`;
-- MySQL dump 10.13  Distrib 8.0.30, for Win64 (x86_64)
--
-- Host: localhost    Database: bankdb
-- ------------------------------------------------------
-- Server version	8.0.30

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `accountcard`
--

DROP TABLE IF EXISTS `accountcard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `accountcard` (
  `idaccountcard` int NOT NULL,
  `idcard` int NOT NULL,
  `idaccount` int NOT NULL,
  PRIMARY KEY (`idaccountcard`),
  UNIQUE KEY `idaccount_UNIQUE` (`idaccount`),
  UNIQUE KEY `idcard_UNIQUE` (`idcard`),
  KEY `accoutcard-account_idx` (`idaccount`),
  KEY `accountcard-card_idx` (`idcard`),
  CONSTRAINT `accountcard-card` FOREIGN KEY (`idcard`) REFERENCES `card` (`idcard`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `accoutcard-account` FOREIGN KEY (`idaccount`) REFERENCES `account` (`idaccount`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `accountcard`
--

LOCK TABLES `accountcard` WRITE;
/*!40000 ALTER TABLE `accountcard` DISABLE KEYS */;
/*!40000 ALTER TABLE `accountcard` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `card`
--

DROP TABLE IF EXISTS `card`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `card` (
  `idcard` int NOT NULL AUTO_INCREMENT,
  `cardnumber` varchar(20) DEFAULT NULL,
  `doublecard` tinyint(1) DEFAULT NULL,
  `pin` varchar(255) DEFAULT NULL,
  `idaccount` int DEFAULT NULL,
  `cardcol` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idcard`),
  UNIQUE KEY `idcard_UNIQUE` (`idcard`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `card`
--

LOCK TABLES `card` WRITE;
/*!40000 ALTER TABLE `card` DISABLE KEYS */;
/*!40000 ALTER TABLE `card` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `transaction`
--

DROP TABLE IF EXISTS `transaction`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `transaction` (
  `transactionid` int NOT NULL AUTO_INCREMENT,
  `accountid` int DEFAULT NULL,
  `amount` decimal(10,2) DEFAULT NULL,
  `date` datetime DEFAULT NULL,
  `transaction_type` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`transactionid`),
  KEY `fk-transaction-account1_idx` (`accountid`),
  CONSTRAINT `fk-transaction-account1` FOREIGN KEY (`accountid`) REFERENCES `account` (`accountnumber`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `transaction`
--

LOCK TABLES `transaction` WRITE;
/*!40000 ALTER TABLE `transaction` DISABLE KEYS */;
/*!40000 ALTER TABLE `transaction` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user` (
  `iduser` int NOT NULL AUTO_INCREMENT,
  `fname` varchar(45) DEFAULT NULL,
  `lname` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`iduser`),
  UNIQUE KEY `iduser_UNIQUE` (`iduser`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `useraccount`
--

DROP TABLE IF EXISTS `useraccount`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `useraccount` (
  `iduseraccount` int NOT NULL,
  `iduser` int NOT NULL,
  `idaccount` int NOT NULL,
  PRIMARY KEY (`iduseraccount`),
  UNIQUE KEY `idaccount_UNIQUE` (`idaccount`),
  UNIQUE KEY `iduser_UNIQUE` (`iduser`),
  KEY `useraccount-user_idx` (`iduser`),
  KEY `useraccount-account_idx` (`idaccount`),
  CONSTRAINT `useraccount-account` FOREIGN KEY (`idaccount`) REFERENCES `account` (`idaccount`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `useraccount-user` FOREIGN KEY (`iduser`) REFERENCES `user` (`iduser`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `useraccount`
--

LOCK TABLES `useraccount` WRITE;
/*!40000 ALTER TABLE `useraccount` DISABLE KEYS */;
/*!40000 ALTER TABLE `useraccount` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-03-19 13:31:03
