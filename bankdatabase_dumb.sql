-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bankdatabase
-- ------------------------------------------------------
-- Server version	8.2.0

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
-- Table structure for table `account`
--

DROP TABLE IF EXISTS `account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `account` (
  `idaccount` int NOT NULL AUTO_INCREMENT,
  `accountnumber` varchar(20) DEFAULT NULL,
  `saldo` decimal(10,2) DEFAULT NULL,
  `cardlimit` int DEFAULT NULL,
  PRIMARY KEY (`idaccount`),
  UNIQUE KEY `idaccount_UNIQUE` (`idaccount`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `account`
--

LOCK TABLES `account` WRITE;
/*!40000 ALTER TABLE `account` DISABLE KEYS */;
INSERT INTO `account` VALUES (1,'12345',0.00,NULL),(2,'11111',48400.00,NULL),(3,'141414141',600.00,1000);
/*!40000 ALTER TABLE `account` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `accountcard`
--

DROP TABLE IF EXISTS `accountcard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `accountcard` (
  `idaccountcard` int NOT NULL AUTO_INCREMENT,
  `idcard` int NOT NULL,
  `idaccount` int NOT NULL,
  PRIMARY KEY (`idaccountcard`),
  UNIQUE KEY `idaccount_UNIQUE` (`idaccount`),
  KEY `accountcard-card_idx` (`idcard`),
  CONSTRAINT `accountcard-card` FOREIGN KEY (`idcard`) REFERENCES `card` (`idcard`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `accoutcard-account` FOREIGN KEY (`idaccount`) REFERENCES `account` (`idaccount`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `accountcard`
--

LOCK TABLES `accountcard` WRITE;
/*!40000 ALTER TABLE `accountcard` DISABLE KEYS */;
INSERT INTO `accountcard` VALUES (4,1,1),(8,2,2);
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
  PRIMARY KEY (`idcard`),
  UNIQUE KEY `idcard_UNIQUE` (`idcard`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `card`
--

LOCK TABLES `card` WRITE;
/*!40000 ALTER TABLE `card` DISABLE KEYS */;
INSERT INTO `card` VALUES (1,'123445678',0,'$2a$10$eq9KSgeB7dgF0XZsaKpMd.iQq/ecsEQhUMD7mpoSe18yrh/UESAI6',NULL),(2,'11111111',1,'$2a$10$/zUmVh7Nc7IfpPZV6ts3E.u1OkyTfEupYm3ydFIV9mVDax0pHh2P.',NULL);
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
  `idaccount` int DEFAULT NULL,
  `amount` decimal(10,2) DEFAULT NULL,
  `date` datetime DEFAULT NULL,
  `transaction_type` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`transactionid`),
  KEY `fk-transaction-account_idx` (`idaccount`),
  CONSTRAINT `fk-transaction-account` FOREIGN KEY (`idaccount`) REFERENCES `account` (`idaccount`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=61 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `transaction`
--

LOCK TABLES `transaction` WRITE;
/*!40000 ALTER TABLE `transaction` DISABLE KEYS */;
INSERT INTO `transaction` VALUES (1,1,100.00,'2024-05-19 10:00:00',NULL),(2,2,200.00,'2024-02-10 00:00:00',NULL),(3,3,300.00,'2024-03-10 00:00:00',NULL),(4,1,50.00,'2024-01-11 00:00:00',NULL),(5,1,20.00,'2023-02-03 00:00:00',NULL),(6,1,10.00,'2022-01-02 00:00:00',NULL),(7,1,5.00,'2021-02-02 00:00:00',NULL),(8,1,15.00,'2020-01-01 00:00:00',NULL),(9,1,200.00,'2024-04-05 17:34:36','nosto'),(10,1,200.00,'2024-04-05 17:35:34','nosto'),(11,2,200.00,'2024-04-05 17:35:56','nosto'),(12,2,200.00,'2024-04-05 17:38:37','nosto'),(13,2,200.00,'2024-04-05 17:38:38','nosto'),(14,1,200.00,'2024-04-05 17:38:58','nosto'),(15,1,200.00,'2024-04-05 17:38:59','nosto'),(16,3,200.00,'2024-04-05 17:44:44','nosto'),(17,3,801.00,'2024-04-05 17:48:39','nostoCredit'),(18,3,200.00,'2024-04-08 11:07:31','nostoDebit'),(19,3,801.00,'2024-04-08 11:07:49','nostoCredit'),(20,1,1.00,'2024-04-08 11:51:31','nostoDebit'),(21,1,1.00,'2024-04-08 12:12:33','nostoDebit'),(22,1,10.00,'2024-04-08 12:32:33','nostoDebit'),(23,1,9.00,'2024-04-08 12:34:03','nostoDebit'),(24,2,400.00,'2024-04-08 12:34:47','nostoDebit'),(25,1,5.00,'2024-04-08 12:35:49','nostoCredit'),(26,1,5.00,'2024-04-08 12:39:24','nostoDebit'),(27,1,5.00,'2024-04-08 12:41:23','nostoDebit'),(28,1,5.00,'2024-04-08 12:45:37','nostoCredit'),(29,1,5.00,'2024-04-08 15:15:48','nostoDebit'),(30,3,5.00,'2024-04-08 15:20:56','nostoCredit'),(31,3,5.00,'2024-04-08 15:21:06','nostoCredit'),(32,3,5.00,'2024-04-08 15:26:47','nostoCredit'),(33,1,100.00,'2024-04-08 15:38:41','Rahan talletus'),(34,1,100.00,'2024-04-08 15:39:11','Rahan talletus'),(35,3,5.00,'2024-04-08 15:42:21','Rahan talletus'),(36,3,5.00,'2024-04-08 15:43:27','Rahan talletus'),(37,3,5.00,'2024-04-08 15:43:35','Rahan talletus'),(38,1,5.00,'2024-04-11 14:54:53','nostoDebit'),(39,1,20.00,'2024-04-11 15:08:28','nostoDebit'),(40,1,20.00,'2024-04-11 15:09:05','nostoDebit'),(41,2,200.00,'2024-04-15 10:33:54','nostoDebit'),(42,2,20.00,'2024-04-15 10:56:28','nostoDebit'),(43,2,20.00,'2024-04-15 10:57:54','nostoDebit'),(44,2,40.00,'2024-04-15 10:58:02','nostoDebit'),(45,2,20.00,'2024-04-15 11:00:05','nostoDebit'),(46,2,20.00,'2024-04-15 11:03:47','nostoDebit'),(47,2,20.00,'2024-04-15 11:09:36','nostoDebit'),(48,2,20.00,'2024-04-15 11:37:07','nostoDebit'),(49,2,20.00,'2024-04-15 11:38:23','nostoDebit'),(50,2,40.00,'2024-04-15 11:38:24','nostoDebit'),(51,2,20.00,'2024-04-15 11:42:50','nostoDebit'),(52,2,40.00,'2024-04-15 11:42:55','nostoDebit'),(53,2,20.00,'2024-04-15 11:46:17','nostoDebit'),(54,1,800.00,'2024-04-15 11:47:25','nostoDebit'),(55,2,20.00,'2024-04-15 11:47:38','nostoDebit'),(56,2,20.00,'2024-04-15 11:49:06','nostoDebit'),(57,2,20.00,'2024-04-15 11:49:46','nostoDebit'),(58,1,10.00,'2024-04-15 11:51:33','nostoDebit'),(59,2,20.00,'2024-04-15 11:51:50','nostoDebit'),(60,2,20.00,'2024-04-15 11:51:58','nostoDebit');
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
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'Markus','Matinpoika'),(2,'Martti','Joensuu');
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `useraccount`
--

DROP TABLE IF EXISTS `useraccount`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `useraccount` (
  `iduseraccount` int NOT NULL AUTO_INCREMENT,
  `iduser` int NOT NULL,
  `idaccount` int NOT NULL,
  PRIMARY KEY (`iduseraccount`),
  UNIQUE KEY `idaccount_UNIQUE` (`idaccount`),
  KEY `useraccount-user_idx` (`iduser`),
  CONSTRAINT `useraccount-account` FOREIGN KEY (`idaccount`) REFERENCES `account` (`idaccount`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `useraccount-user` FOREIGN KEY (`iduser`) REFERENCES `user` (`iduser`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `useraccount`
--

LOCK TABLES `useraccount` WRITE;
/*!40000 ALTER TABLE `useraccount` DISABLE KEYS */;
INSERT INTO `useraccount` VALUES (1,1,1),(5,2,2);
/*!40000 ALTER TABLE `useraccount` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'bankdatabase'
--
/*!50003 DROP PROCEDURE IF EXISTS `nostoCredit` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `nostoCredit`(IN first_id INT, IN nosto decimal(10,2))
BEGIN 
	DECLARE test1 INT DEFAULT 0;
    DECLARE card_limit INT;
	SELECT cardlimit INTO card_limit FROM account WHERE idaccount = first_id;
	IF card_limit <> 0 THEN
	START TRANSACTION;
	UPDATE account SET saldo=saldo-nosto WHERE idaccount=first_id AND saldo + cardlimit >= nosto;
    SET test1=ROW_COUNT();
    IF (test1 > 0) THEN
			COMMIT;
			INSERT INTO transaction (idaccount, amount, date, transaction_type) VALUES (first_id, nosto, NOW(), 'nostoCredit'); 
		ELSE
			ROLLBACK;
		END IF;
    ELSE
		ROLLBACK;
	END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `nostoDebit` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `nostoDebit`(IN first_id INT, IN nosto DECIMAL(10,2))
BEGIN 
    DECLARE test1 INT DEFAULT 0;
    DECLARE saldo DECIMAL(10,2);
    
    -- Haetaan tilin saldo
    SELECT saldo INTO saldo FROM account WHERE idaccount = first_id;
    
    -- Tarkistetaan, onko nosto mahdollinen
    IF saldo >= nosto THEN
        START TRANSACTION;
        UPDATE account SET saldo = saldo - nosto WHERE idaccount = first_id;
        SET test1 = ROW_COUNT();
        
        IF (test1 > 0) THEN
            -- Nosto onnistui, tehdään tarvittavat toimenpiteet ja tehdään COMMIT
            COMMIT;
            INSERT INTO transaction (idaccount, amount, date, transaction_type) VALUES (first_id, nosto, NOW(), 'nostoDebit');
        ELSE
            -- Nostoa ei voitu suorittaa, tehdään ROLLBACK
            ROLLBACK;
        END IF;
    ELSE
        -- Nosto on suurempi kuin saldo, palautetaan virheviesti
        SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Liian vähän rahaa';
    END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `saldoProcedure` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `saldoProcedure`(IN saldo_id INT)
BEGIN 
    SELECT user.fname AS 'Etunimi', user.lname AS 'Sukunimi', account.saldo, transaction.date AS 'Tapahtuma aika', 
	transaction.amount AS 'Summa'
    FROM bankdatabase.user
	LEFT JOIN useraccount ON user.iduser = useraccount.iduser
	LEFT JOIN account ON useraccount.idaccount = account.idaccount
	LEFT JOIN 
		(SELECT date, amount, idaccount FROM bankdatabase.transaction) AS transaction ON account.idaccount = transaction.idaccount
    WHERE user.iduser = saldo_id 
    ORDER BY transaction.date DESC LIMIT 10;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `talletus` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `talletus`(IN first_id INT, IN talletus decimal(10,2))
BEGIN 
	DECLARE test1 INT DEFAULT 0;
	START TRANSACTION;
	UPDATE account SET saldo=saldo+talletus WHERE idaccount=first_id;
    SET test1=ROW_COUNT();
    IF (test1 > 0) THEN
		COMMIT;
		INSERT INTO transaction (idaccount, amount, date, transaction_type) VALUES (first_id, talletus, NOW(), 'Rahan talletus'); 
    ELSE
		ROLLBACK;
	END IF;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `transactionHistory` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `transactionHistory`(IN account_id INT)
BEGIN 
SELECT date AS 'Tapahtuma aika', amount AS 'Summa' FROM bankdatabase.transaction WHERE idaccount = account_id ORDER BY date DESC
LIMIT 10;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-04-15 12:22:33
