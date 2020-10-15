QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/entity/paperimpl.cpp \
    src/entity/personImpl.cpp \
    src/entity/reportImpl.cpp \
    src/entity/userimpl.cpp \
    src/services/create_paper.cpp \
    src/services/create_user.cpp \
    src/services/define_paper.cpp \
    src/services/edit_paper.cpp \
    src/services/edit_user.cpp \
    src/services/export_duplicity_report.cpp \
    src/services/generate_duplicity_report.cpp \
    src/services/readerCSV.cpp \
    src/services/remove_paper.cpp \
    src/services/remove_report.cpp \
    src/services/remove_user.cpp \
    src/services/search_user.cpp \
    views/admin-view.cpp \
    views/report-menu.cpp \
    views/report-view-table.cpp \
    views/login.cpp \


HEADERS += \
    src/entity/paper.h \
    src/entity/paperimpl.h \
    src/entity/person.h \
    src/entity/personImpl.h \
    src/entity/report.h \
    src/entity/reportImpl.h \
    src/entity/user.h \
    src/entity/userimpl.h \
    src/services/create_paper.h \
    src/services/create_user.h \
    src/services/define_paper.h \
    src/services/edit_paper.h \
    src/services/edit_user.h \
    src/services/export_duplicity_report.h \
    src/services/generate_duplicity_report.h \
    src/services/readerCSV.h \
    src/services/remove_paper.h \
    src/services/remove_report.h \
    src/services/remove_user.h \
    src/services/search_user.h \
    views/admin-view.h \
    views/report-menu.h \
    views/report-view-table.h \
    views/login.h \

FORMS += \
    views/admin-view.ui \
    views/login.ui \
    views/report-menu.ui \
    views/report-view-table.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
