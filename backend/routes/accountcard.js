var express = require('express');
var router = express.Router();
const accountcard = require('../models/accountcard_model');

// GET all accountcards
router.get('/', function (req, res) {
    accountcard.getAllAccCards(function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// GET one accountcard
router.get('/:id', function (req, res) {
    accountcard.getOneAccCard(req.params.id, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// POST accountcard (new)
router.post('/', function (req, res) {
    accountcard.addAccCard(req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// PUT accountcard (update)
router.put('/:id', function (req, res) {
    accountcard.updateAccCard(req.params.id, req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// DELETE accountcard
router.delete('/:id', function (req, res) {
    accountcard.deleteAccCard(req.params.id, function (err, result) {
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