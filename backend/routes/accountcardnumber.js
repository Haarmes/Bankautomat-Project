var express = require('express');
var router = express.Router();
const accountcard = require('../models/account_model');



//Get One debit account
router.get('/:id', function (request, response) {
    console.log("kaatuu?")
    accountcard.getOneAccountWithCardNumber(request.params.id, function (err, result) {
        if (err) {
            response.send(err);
        }
        else {
            console.log(result);
            response.json(result[0]);
        }
    });
});


module.exports = router;