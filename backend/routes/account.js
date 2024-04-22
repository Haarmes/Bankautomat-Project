var express = require('express');
var router = express.Router();
const account = require('../models/account_model')

/* GET all accounts. */
router.get('/', function (req, res) {
    account.getAllAccounts(function (err, result) {
        if (err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

/* GET one account. */
router.get("/:id", function (req, res) {
    account.getOneAccount(req.params.id, function (err, result) {
        if (err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result)
        }
    });

});

router.post("/", function (req, res) {
    account.addAccount(req.body, function (err, result) {
        if (err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result)
        }
    });

});

router.put("/:id", function (req, res) {
    account.updateAccount(req.params.id, req.body, function (err, result) {
        if (err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result)
        }
    });
});

router.delete('/:id', function (req, res) {
    account.deleteAccount(req.params.id, function (err, result) {
        if (err) {
            res.send(err);
        }
        else {
            res.json(result.affectedRows);
        }
    });
});



// procedure saldo
router.get('/saldo/:id', function(request, response) {
    account.getSaldoProcedureById(request.params.id, function(err, result){
        if(err){
            response.send(err);
        }
        else{
            const firstResult = Array.isArray(result) ? result[0] : result;
            response.json(firstResult);
        }
    });
});

//procedure for saldo window
router.get('/saldo/:userId/transactions', function(request, response) {
    account.getSaldoProcedureById(request.params.id, function(err, result){
        if(err){
            response.send(err);
        }
        else{
            const firstResult = Array.isArray(result) ? result[0] : result;
            response.json(firstResult);
        }
    });
});

// procedure Nosto
router.put('/Nosto/:id/:amount', function(request, response) {
    account.updateNostoProcedureById(request.params.id, request.params.amount, function(err, result){
        if(err){
            console.log(err);
            response.json(err.errno);
        }
        else{
            response.json(result);
        }
    });
});

// procedure Talletus
router.put('/Talletus/:id/:amount', function(request, response) {
    account.updateTalletusProcedureById(request.params.id, request.params.amount, function(err, result){
        if(err){
            response.json(err.errno);
        }
        else{
            response.json(result);
        }
    });
});



module.exports = router;
