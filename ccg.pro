TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    src/main.cpp

DISTFILES += \
    README.md

HEADERS += \
    headers/CModule.h \
    headers/CParser.h \
    headers/CMetaInfo.h
