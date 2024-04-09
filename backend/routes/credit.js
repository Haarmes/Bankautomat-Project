var express = require('express');
var router = express.Router();
const credit = require('../models/account_model');



//Get One credit account
router.get('/:id', function (request, response) {
    credit.getOneCredit(request.params.id, function (err, result) {
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