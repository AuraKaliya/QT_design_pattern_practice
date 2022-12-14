QT       += core gui
QT +=core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ins_context.cpp \
    ins_factory.cpp \
    ins_order.cpp \
    ins_register.cpp \
    insslot_factory.cpp \
    insslot_register.cpp \
    instruction.cpp \
    instruction_base.cpp \
    instruction_callcard.cpp \
    instruction_match.cpp \
    instruction_mysql.cpp \
    instruction_mysql_insert.cpp \
    instruction_mysql_select.cpp \
    instruction_mysql_update.cpp \
    instructionslot_base.cpp \
    instructionslot_mysql_insert.cpp \
    instructionslot_mysql_select.cpp \
    instructionslot_mysql_update.cpp \
    main.cpp \
    singleton.cpp \
    widget.cpp

HEADERS += \
    ins_context.h \
    ins_factory.h \
    ins_order.h \
    ins_register.h \
    insslot_factory.h \
    insslot_register.h \
    instruction.h \
    instruction_base.h \
    instruction_callcard.h \
    instruction_match.h \
    instruction_mysql.h \
    instruction_mysql_insert.h \
    instruction_mysql_select.h \
    instruction_mysql_update.h \
    instructionslot_base.h \
    instructionslot_mysql_insert.h \
    instructionslot_mysql_select.h \
    instructionslot_mysql_update.h \
    singleton.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
