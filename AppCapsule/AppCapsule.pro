QT += webkit \
    network
HEADERS = mainwindow.h \
    acwebview.h
SOURCES = main.cpp \
    mainwindow.cpp \
    acwebview.cpp

# RESOURCES = jquery.qrc
# install
target.path = ~/Development/SoldierOfCode/Projects/AppCapsule/build
sources.files = $$SOURCES \
    $$HEADERS \
    $$RESOURCES \
    *.pro
sources.path = ~/Development/SoldierOfCode/Projects/AppCapsule/AppCapsule
INSTALLS += target \
    sources
