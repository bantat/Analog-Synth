#-------------------------------------------------
#
# Project created by QtCreator 2016-02-24T14:45:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = final
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    RtMidi.cpp \
    midi.cpp \
    audio.cpp \
    RtAudio.cpp

HEADERS  += mainwindow.h \
    RtMidi.h \
    midi.h \
    audio.h \
    RtAudio.h

FORMS    += mainwindow.ui

CONFIG += C++14 \

macx: LIBS += -L$$PWD/ -lrtaudio_static

#INCLUDEPATH += $$PWD/../../rtaudio-4.1.2
#DEPENDPATH += $$PWD/../../rtaudio-4.1.2

macx: PRE_TARGETDEPS += $$PWD/librtaudio_static.a

macx {
    INCLUDEPATH += /Library/Frameworks/
    QMAKE_LFLAGS += -F/Library/Frameworks
    QMAKE_CXXFLAGS += -D__MACOSX_CORE__ \
                        -stdlib=libc++
    LIBS += -framework CoreFoundation \
        -framework CoreMIDI \
        -framework CoreAudio
    QMAKE_CXXFLAGS_WARN_ON += -Wno-unknown-pragmas
    QMAKE_MAC_SDK = macosx10.10
}
