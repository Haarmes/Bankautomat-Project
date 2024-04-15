const db = require('../database');
const bcrypt = require('bcryptjs');

const card = {
    getAllCards(callback) {
        return db.query("SELECT * from card", callback)
    },
    getOneCard(id, callback) {
        return db.query("SELECT * from card WHERE cardnumber=?", [id], callback);
    },
    addCard(newCard, callback) {
        bcrypt.hash(newCard.pin, 10, function (err, hashedPin) {
            return db.query("INSERT INTO card (idcard, cardnumber, doublecard, pin) VALUES(?,?,?,?)", [newCard.idcard, newCard.cardnumber, newCard.doublecard, hashedPin], callback);
        });
    },
    updateCard(id, updateData, callback) {
        bcrypt.hash(updateData.pin, 10, function (err, hashedPin) {
            return db.query("UPDATE card SET cardnumber=?, doublecard=?, pin=? WHERE idcard=?", [updateData.cardnumber, updateData.doublecard, hashedPin, id], callback);
        });
    },
    deleteCard(id, callback) {
        return db.query("DELETE FROM card WHERE idcard=?", [id], callback);
    },
    login(id, callback) {
        return db.query("SELECT pin FROM card WHERE cardnumber=?", [id], callback);
    },
    // TÄNNE VIELÄ HOKS HOKS
}


module.exports = card;