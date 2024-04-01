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

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/users', usersRouter);
app.use('/account', accountRouter);
app.use('/user', userRouter);
app.use('/card', cardRouter);
app.use('/accountcard', accCardRouter);
app.use('/useraccount', userAccRouter);

module.exports = app;
