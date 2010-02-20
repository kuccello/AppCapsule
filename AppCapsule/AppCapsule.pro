QT      +=  webkit network
HEADERS =   mainwindow.h
SOURCES =   main.cpp \
            mainwindow.cpp
#RESOURCES = jquery.qrc

# install
target.path = ~/Development/SoldierOfCode/Projects/AppCapsule/build
sources.files = $$SOURCES $$HEADERS $$RESOURCES *.pro
sources.path = ~/Development/SoldierOfCode/Projects/AppCapsule/AppCapsule
INSTALLS += target sources

#symbian {
#    TARGET.UID3 = 0xA000CF6C
#    include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
#}
