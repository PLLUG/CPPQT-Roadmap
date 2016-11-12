TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

include(GSL.pri)

SOURCES += main.cpp \
    cookie.cpp \
    cookiefactory.cpp \
    cookiewall.cpp \
    cookiebox.cpp \
    cookiemonster.cpp

HEADERS += \
    cga.h \
    cookie.h \
    cookiefactory.h \
    cookiewall.h \
    cookiebox.h \
    cookiemonster.h

DISTFILES += \
    GSL.pri
