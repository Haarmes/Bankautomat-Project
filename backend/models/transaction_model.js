const db=require('../database');

const transaction={
    // Function to retrieve all transactions from the database
    getAllTransaction(callback){
        return db.query("SELECT * FROM transaction ORDER BY date DESC", callback);
    },

    // Function to add a new transaction to the database
    addTransaction(newTransaction, callback){
        return db.query("INSERT INTO transaction VALUES(?,?,?,NOW(),?)", [newTransaction.transactionid, newTransaction.idaccount, 
            newTransaction.amount, newTransaction.transaction_type], callback);
    },

    // Function to update an existing transaction in the database
    updateTransaction(id, updateTransaction, callback){
        return db.query ("UPDATE transaction SET idaccount=?, amount=?, date=NOW(), transaction_type=? WHERE transactionid=?", 
        [updateTransaction.idaccount, updateTransaction.amount, updateTransaction.transaction_type, id], callback);
    },

    // Function to retrieve a transaction by its ID from the database
    getTransactionById(id,callback){
        return db.query("SELECT * FROM transaction WHERE idaccount=? ORDER BY date DESC",[id], callback)
    },

    // Function to delete a transaction by its ID from the database
    deleteTransaction(id, callback){
        return db.query("DELETE FROM transaction WHERE transactionid=?", [id], callback);
    },

    // Procedure
    getTransactionHistoryById(id, offset, callback) {
        return db.query("CALL transactionHistory(?, ?)", [id, offset], callback);
    },
}

module.exports=transaction;
