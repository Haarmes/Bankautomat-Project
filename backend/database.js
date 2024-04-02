const mysql = require('mysql2');
const dotenv = require('dotenv');   // Käytetään dotenv että voidaan lukea ".env" tiedosto ja hakea sieltä enviromental muuttujat jotka ei mene githubiin
// const { dot } = require('node:test/reporters');
dotenv.config();    // Luetaan .env tiedosto


// Tehdään mysql yhteys
const connection = mysql.createPool(process.env.MySQL_DB);

module.exports = connection;