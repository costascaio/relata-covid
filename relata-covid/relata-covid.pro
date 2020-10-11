QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/entity/personImpl.cpp \
    src/entity/reportImpl.cpp \
    src/services/export_duplicity_report.cpp \
    src/services/generate_duplicity_report.cpp \
    src/services/readerCSV.cpp \
    src/services/remove_report.cpp \
    views/reportmenu.cpp


HEADERS += \
    src/entity/person.h \
    src/entity/personImpl.h \
    src/entity/report.h \
    src/entity/reportImpl.h \
    src/services/export_duplicity_report.h \
    src/services/generate_duplicity_report.h \
    src/services/readerCSV.h \
<<<<<<< HEAD
    src/services/remove_report.h \
=======
    src/services/readerCSV.hpp \
>>>>>>> 6d8e5a9... feat(Export the duplicity report) create export duplicity report
    views/reportmenu.h

FORMS += \
    views/reportmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
