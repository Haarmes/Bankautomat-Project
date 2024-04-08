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


    //Tuplakortti hakuja
    getOneDebit(cardnumber, callback) {
        console.log("debit get");
        return db.query("SELECT * FROM account INNER JOIN accountcard ON account.idaccount = accountcard.idaccount INNER JOIN card on accountcard.idcard= card.idcard WHERE cardlimit = 0 AND cardnumber=?", [cardnumber], callback)
    },

    getOneCredit(cardnumber, callback) {
        console.log("credit get");
        return db.query("SELECT * FROM account INNER JOIN accountcard ON account.idaccount = accountcard.idaccount INNER JOIN card on accountcard.idcard= card.idcard WHERE NOT cardlimit = 0 AND cardnumber=?", [cardnumber], callback)
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