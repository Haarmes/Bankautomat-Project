var express = require('express');
var router = express.Router();
const useracc = require('../models/useraccount_model');

// GET all useraccounts
router.get('/', function (req, res) {
    useracc.getAllUserAccs(function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// GET one useraccount
router.get('/:id', function (req, res) {
    useracc.getOneUserAcc(req.params.id, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// POST useraccount (new)
router.post('/', function (req, res) {
    useracc.addUserAcc(req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// PUT useraccount (update)
router.put('/:id', function (req, res) {
    useracc.updateUserAcc(req.params.id, req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// DELETE useraccount
router.delete('/:id', function (req, res) {
    useracc.deleteUserAcc(req.params.id, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

module.exports = router;