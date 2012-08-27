/****************************************************************************
**
** Copyright (C) 2012 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com, author Marc Mutz <marc.mutz@kdab.com>
** Contact: http://www.qt-project.org/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef TESTS_AUTO_CORELIB_TOOLS_MOC_CXX11_FINAL_CLASSES_H
#define TESTS_AUTO_CORELIB_TOOLS_MOC_CXX11_FINAL_CLASSES_H

#include <QtCore/QObject>

#ifndef Q_MOC_RUN // hide from moc
# define final
# define sealed
# define EXPORT_MACRO
# define EXPORT_MACRO2(X,Y,Z)
#endif

class FinalTestClassQt Q_DECL_FINAL : public QObject
{
    Q_OBJECT
public:
    explicit FinalTestClassQt(QObject *parent = 0)
        : QObject(parent) {}
};


class EXPORT_MACRO ExportedFinalTestClassQt Q_DECL_FINAL : public QObject
{
    Q_OBJECT
public:
    explicit ExportedFinalTestClassQt(QObject *parent = 0)
        : QObject(parent) {}
};

class EXPORT_MACRO2(X,Y,Z) ExportedFinalTestClassQtX Q_DECL_FINAL : public QObject
{
    Q_OBJECT
public:
    explicit ExportedFinalTestClassQtX(QObject *parent = 0)
        : QObject(parent) {}
};

class FinalTestClassCpp11 final : public QObject
{
    Q_OBJECT
public:
    explicit FinalTestClassCpp11(QObject *parent = 0)
        : QObject(parent) {}
};

class EXPORT_MACRO ExportedFinalTestClassCpp11 final : public QObject
{
    Q_OBJECT
public:
    explicit ExportedFinalTestClassCpp11(QObject *parent = 0)
        : QObject(parent) {}
};

class EXPORT_MACRO2(X,Y,Z) ExportedFinalTestClassCpp11X final : public QObject
{
    Q_OBJECT
public:
    explicit ExportedFinalTestClassCpp11X(QObject *parent = 0)
        : QObject(parent) {}
};

class SealedTestClass sealed : public QObject
{
    Q_OBJECT
public:
    explicit SealedTestClass(QObject *parent = 0)
        : QObject(parent) {}
};

class EXPORT_MACRO ExportedSealedTestClass sealed : public QObject
{
    Q_OBJECT
public:
    explicit ExportedSealedTestClass(QObject *parent = 0)
        : QObject(parent) {}
};

class EXPORT_MACRO2(X,Y,Z) ExportedSealedTestClassX sealed : public QObject
{
    Q_OBJECT
public:
    explicit ExportedSealedTestClassX(QObject *parent = 0)
        : QObject(parent) {}
};

#ifndef Q_MOC_RUN
# undef final
# undef sealed
# undef EXPORT_MACRO
# undef EXPORT_MACRO2
#endif

#endif // TESTS_AUTO_CORELIB_TOOLS_MOC_CXX11_FINAL_CLASSES_H