var express = require('express');
var router = express.Router();
const debit = require('../models/account_model');



//Get One debit account
router.get('/:id', function (request, response) {
    debit.getOneDebit(request.params.id, function (err, result) {
        if (err) {
            response.send(err);
        }
        else {
            console.log(result);
            response.json(result);
        }
    });
});


module.exports = router;