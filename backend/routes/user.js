var express = require('express');
var router = express.Router();
const user = require('../models/user_model');

// GET all users
router.get('/', function (req, res) {
    user.getAllUsers(function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// GET one user
router.get('/:id', function (req, res) {
    user.getOneUser(req.params.id, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// POST user (new)
router.post('/', function (req, res) {
    user.addUser(req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// PUT user (update)
router.put('/:id', function (req, res) {
    user.updateUser(req.params.id, req.body, function (err, result) {
        if(err) {
            console.log(err);
            res.send(err);
        }
        else {
            res.json(result);
        }
    });
});

// DELETE user
router.delete('/:id', function (req, res) {
    user.deleteUser(req.params.id, function (err, result) {
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