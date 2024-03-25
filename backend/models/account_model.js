const db = require('../database');

const account = {
    getAllAccounts(callback) {
        return db.query("SELECT * FROM account", callback)
    },
    getOneAccount(id, callback) {
        return db.query("SELECT * FROM account where idaccount=?", [id], callback)
    },
    addAccount(newAccount, callback) {
        return db.query("INSERT INTO account(accountnumber, saldo, cardlimit) VALUES(?,?,?)", [newAccount.accountnumber, newAccount.saldo, newAccount.cardlimit], callback)
    },
    updateAccount(id, account, callback) {
        return db.query("UPDATE account SET accountnumber=?, saldo=?, cardlimit=? WHERE idaccount=?", [account.accountnumber, account.saldo, account.cardlimit, id], callback)
    },
    deleteAccount(id, callback) {
        return db.query("DELETE FROM account where idaccount=?", [id], callback)
    }
}

module.exports = account;