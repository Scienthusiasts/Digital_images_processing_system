QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    childwindow.cpp \
    contrastwin.cpp \
    gauwindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    childwindow.h \
    contrastwin.h \
    gauwindow.h \
    mainwindow.h

FORMS += \
    contrastwin.ui \
    gauwindow.ui \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



# opencv ralated
INCLUDEPATH += D:\opencv\build\install\include
LIBS += D:\opencv\build\lib\libopencv_*.a


DESTDIR =./cv_share
INCLUDEPATH +=../cv_dll
LIBS += -L$$DESTDIR -lcv_dll

#RC_FILE=titleico.rc

RESOURCES += \
    img.qrc

