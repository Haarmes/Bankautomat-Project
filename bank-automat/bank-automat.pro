QT       += core gui serialport network
<<<<<<< HEAD
QT += network
=======
QT       += network
>>>>>>> main

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bankmenuwindow.cpp \
    cardselect.cpp \
    debositmoneywindow.cpp \
    main.cpp \
    mainwindow.cpp \
    showbalancewindow.cpp \
    transactionwindow.cpp \
    withdrawmoneywindow.cpp

HEADERS += \
    bankmenuwindow.h \
    cardselect.h \
    debositmoneywindow.h \
    mainwindow.h \
    showbalancewindow.h \
    transactionwindow.h \
    withdrawmoneywindow.h

FORMS += \
    bankmenuwindow.ui \
    cardselect.ui \
    debositmoneywindow.ui \
    mainwindow.ui \
    showbalancewindow.ui \
    transactionwindow.ui \
    withdrawmoneywindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/../dll_folder/rfid_dll/build/debug/ -lrfid_dll

INCLUDEPATH += $$PWD/../dll_folder/rfid_dll
DEPENDPATH += $$PWD/../dll_folder/rfid_dll

<<<<<<< HEAD
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../dll_folder/rfid_dll/build/release/ -lrfid_dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../dll_folder/rfid_dll/build/debug/ -lrfid_dll

INCLUDEPATH += $$PWD/../dll_folder/rfid_dll/build/debug
DEPENDPATH += $$PWD/../dll_folder/rfid_dll/build/debug
=======
win32: LIBS += -L$$PWD/../dll_folder/pinUIDLL/build/debug/ -lpinUIDLL

INCLUDEPATH += $$PWD/../dll_folder/pinUIDLL
DEPENDPATH += $$PWD/../dll_folder/pinUIDLL
>>>>>>> main
