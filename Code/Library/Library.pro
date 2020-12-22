QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminmainwindow.cpp \
    main.cpp \
    loginwindow.cpp \
    registrationwindow.cpp \
    users.cpp

HEADERS += \
    adminmainwindow.h \
    loginwindow.h \
    registrationwindow.h \
    users.h

FORMS += \
    adminmainwindow.ui \
<<<<<<< HEAD
    loginwindow.ui \
    registrationwindow.ui
=======
    loginwindow.ui
>>>>>>> c62fc4758a14061fdb2d7629bce25f44137617bd

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
