    const db=require('../database');

    const transaction={
        getAllTransaction(callback){
            return db.query("SELECT * FROM transaction", callback);
        },
        addTransaction(newTransaction, callback){
            return db.query("INSERT INTO transaction VALUES(?,?,?,?,?)", [newTransaction.transactionid, newTransaction.idaccount, 
                newTransaction.amount, newTransaction.date, newTransaction.transaction_type], callback);
        },
        updateTransaction(id, updateTransaction, callback){
            return db.query ("UPDATE transaction SET idaccount=?, amount=?, date=?, transaction_type=? WHERE transactionid=?", 
            [updateTransaction.idaccount, updateTransaction.amount, updateTransaction.date, updateTransaction.transaction_type, id], callback);
        },
        getOneTransaction(id, callback){
            return db.query("SELECT * FROM transaction WHERE transactionid=?", [id], callback);
        },
        deleteTransaction(id, callback){
            return db.query("DELETE FROM transaction WHERE transactionid=?", [id], callback);
        }
        


        
    }

    module.exports=transaction;