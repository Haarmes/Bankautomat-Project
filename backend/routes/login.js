var express = require('express');
var router = express.Router();
const card = require('../models/card_model');
const bcrypt = require('bcryptjs');
const jwt = require("jsonwebtoken");
const dotenv = require('dotenv');

dotenv.config();

router.post('/', function (request, response) {
    if (request.body.cardnumber && request.body.password) {
        console.log(request.body.cardnumber);
        card.login(request.body.cardnumber, function (err, result) {
            if (err) {
                if (err.errno = -4078) {
                    console.log("tietokanta alhaalla");
                    console.log(err)
                    response.send(false);
                }
                else {
                    console.log("Error checkpasswordissa");
                    console.log(err);
                    response.send(false);
                }
            }
            else {
                if (result.length > 0) {
                    bcrypt.compare(request.body.password, result[0].pin, function (err, compareResult) {
                        if (compareResult) {
                            console.log("kirjautuminen ok");
                            console.log(compareResult);
                            const token = genToken({ cardnumber: request.body.cardnumber });
                            response.send(token);
                        }
                        else {
                            console.log(err);
                            response.send(false);
                        }
                    });

                }
                else {
                    console.log("tunnusta ei ole");
                    response.send(false);
                }
            }
        })
    }
    else {
        console.log("kortinnumero tai salasana puuttuu");
        response.send(false);
    }
});

function genToken(value) {
    return jwt.sign(value, process.env.MY_TOKEN, { expiresIn: '200s' })
}

module.exports = router;