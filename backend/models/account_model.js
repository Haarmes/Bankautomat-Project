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
    },


    //saldo procedure
    getSaldoProcedureById(id, callback) {
        return db.query("CALL saldoProcedure(?)", [id], callback);
    },

    // nostoDebit procedure
    updateDebitSaldoProcedureById(id, nosto, callback) {
        return db.query("Call nostoDebit(?,?)", [id, nosto], callback);
    },
    // nostoCredit procedure
    updateCreditSaldoProcedureById(id, nosto, callback) {
        return db.query("Call nostoCredit(?,?)", [id, nosto], callback);
    },
    // Talletus procedure
    updateTalletusProcedureById(id, talletus, callback) {
        return db.query("Call talletus(?,?)", [id, talletus], callback);
    }

}

module.exports = account;