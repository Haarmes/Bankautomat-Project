var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const jwt = require('jsonwebtoken');

var indexRouter = require('./routes/index');
var accountRouter = require('./routes/account');
var userRouter = require('./routes/user');
var cardRouter = require('./routes/card');
var accCardRouter = require('./routes/accountcard');
var userAccRouter = require('./routes/useraccount');
var loginRouter = require('./routes/login');
var transactionRouter = require('./routes/transaction');
var debitRouter = require('./routes/debit');
var creditRouter = require('./routes/credit');
var accountcardRouter = require('./routes/accountcardnumber');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/login', loginRouter); //login pitää olla enne authentikaatio vaatimista

app.use(authenticateToken);     //tämän jälkeiset reitit vaativat authentikaation

app.use('/useraccount', userAccRouter);
app.use('/account', accountRouter);
app.use('/user', userRouter);
app.use('/card', cardRouter);
app.use('/accountcard', accCardRouter);
app.use('/accountcardnumber', accountcardRouter);
app.use('/useraccount', userAccRouter);
app.use('/transaction', transactionRouter);
app.use('/debit', debitRouter);
app.use('/credit', creditRouter);




function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
    console.log(req.headers)
    console.log(authHeader)
    console.log("token = " + token);
    if (token == null) return res.sendStatus(401)

    jwt.verify(token, process.env.MY_TOKEN, function (err, user) {

        if (err) return res.sendStatus(403)

        req.user = user

        next()
    })
}


module.exports = app;
