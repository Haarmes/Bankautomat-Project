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
    account.getOneAccount(request.params.id, function (err, result) {
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
module.exports = router;
