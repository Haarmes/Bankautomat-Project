const db = require('../database');

const useracc = {
    getAllUserAccs(callback) {
        return db.query("SELECT *  FROM useraccount", callback)
    },
    getOneUserAcc(id, callback) {
        return db.query("SELECT * FROM useraccount where iduseraccount=?", [id], callback)
    },
    addUserAcc(newUserAcc, callback) {
        return db.query("INSERT INTO useraccount(iduser, idaccount) VALUES(?,?)", [newUserAcc.iduser, newUserAcc.idaccount], callback)
    },
    updateUserAcc(id, userAcc, callback) {
        return db.query("UPDATE useraccount SET iduser=?, idaccount=? WHERE iduseraccount=?", [userAcc.iduser, userAcc.idaccount , id], callback)
    },
    deleteUserAcc(id, callback) {
        return db.query("DELETE FROM useraccount WHERE iduseraccount=?", [id], callback)
    }
}

module.exports = useracc;