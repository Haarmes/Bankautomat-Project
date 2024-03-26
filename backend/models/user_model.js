const db = require('../database');

const user = {
    getAllUsers(callback) {
        return db.query("SELECT *  FROM user", callback)
    },
    getOneUser(id, callback) {
        return db.query("SELECT * FROM user where iduser=?", [id], callback)
    },
    addUser(newUser, callback) {
        return db.query("INSERT INTO user(fname, lname) VALUES(?,?)", [newUser.fname, newUser.lname], callback)
    },
    updateUser(id, user, callback) {
        return db.query("UPDATE user SET fname=?, lname=? WHERE iduser=?", [user.fname, user.lname , id], callback)
    },
    deleteUser(id, callback) {
        return db.query("DELETE FROM user WHERE iduser=?", [id], callback)
    }
}

module.exports = user;