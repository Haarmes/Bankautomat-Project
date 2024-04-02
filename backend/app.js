var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var usersRouter = require('./routes/users');
var accountRouter = require('./routes/account');
var userRouter = require('./routes/user');
var cardRouter = require('./routes/card');
var accCardRouter = require('./routes/accountcard');
var userAccRouter = require('./routes/useraccount');
var loginRouter = require('./routes/login');
var transactionRouter = require('./routes/transaction');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/login', loginRouter); //login pitää olla enne authentikaatio vaatimista

//app.use(authenticateToken);     //tämän jälkeiset reitit vaativat authentikaation

app.use('/users', usersRouter);
app.use('/account', accountRouter);
app.use('/user', userRouter);
app.use('/card', cardRouter);
app.use('/accountcard', accCardRouter);
app.use('/useraccount', userAccRouter);
app.use('/transaction', transactionRouter);



function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]

    console.log("token = " + token);
    if (token == null) return res.sendStatus(401)

    jwt.verify(token, process.env.MY_TOKEN, function (err, user) {

        if (err) return res.sendStatus(403)

        req.user = user

        next()
    })
}


module.exports = app;
