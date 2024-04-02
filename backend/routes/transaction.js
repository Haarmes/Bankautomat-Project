const express=require('express');
const router=express.Router();
const transaction=require('../models/transaction_model');

// Handling GET requests to retrieve all transactions
router.get('/', function(request,response){
    transaction.getAllTransaction(function(err,result){
        if(err){
            response.send(err);
        }
        else{
            console.log(result);
            response.json(result);
        }
    });
});

// Handling GET requests to retrieve a specific transaction by its ID
router.get('/:id', function(request,response){
    transaction.getTransactionById(request.params.id, function(err,result){
        if(err){
            response.send(err);
        }
        else{
            console.log(result);
            response.json(result);
        }
    });
});

// Handling POST requests to add a new transaction
router.post('/', function(request,response){
    transaction.addTransaction(request.body, function(err, result){
        if(err){
            response.send(err);
        }
        else{
            response.json(result);
        }
    });
});

// Handling PUT requests to update an existing transaction by its ID
router.put('/:id', function(request, response){
    transaction.updateTransaction(request.params.id, request.body, function(err,result){
        if(err){
            response.send(err);
        }
        else{
            response.json(result);
        }
    });
});

// Handling DELETE requests to delete a transaction by its ID
router.delete('/:id', function(request, response){
    transaction.deleteTransaction(request.params.id, function(err,result){
        if(err){
            response.send(err);
        }
        else{
            response.json(result);
        }
    });
});





module.exports=router;