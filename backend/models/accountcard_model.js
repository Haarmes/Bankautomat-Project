const db = require('../database');

const accountcard = {
    getAllAccCards(callback) {
        return db.query("SELECT *  FROM accountcard", callback)
    },
    getOneAccCard(id, callback) {
        return db.query("SELECT * FROM accountcard where idaccountcard=?", [id], callback)
    },
    addAccCard(newAccCard, callback) {
        return db.query("INSERT INTO accountcard(idcard, idaccount) VALUES(?,?)", [newAccCard.idcard, newAccCard.idaccount], callback)
    },
    updateAccCard(id, accCard, callback) {
        return db.query("UPDATE accountcard SET idcard=?, idaccount=? WHERE idaccountcard=?", [accCard.idcard, accCard.idaccount, id], callback)
    },
    deleteAccCard(id, callback) {
        return db.query("DELETE FROM accountcard WHERE idaccountcard=?", [id], callback)
    }
}

module.exports = accountcard;