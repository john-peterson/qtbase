/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Copyright (C) 2012 Rick Stockton <rickstockton@reno-computerhelp.com>
** Contact: http://www.qt-project.org/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Nokia Corporation and its Subsidiary(-ies) nor
**     the names of its contributors may be used to endorse or promote
**     products derived from this software without specific prior written
**     permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "buttontester.h"

void ButtonTester::mousePressEvent(QMouseEvent *e)
{
    int j = ButtonTester::buttonByNumber (e->button());
    QString result = "Mouse Press: raw button=" + QString::number(j) + "  Qt=" + enumNameFromValue(e->button());
    qDebug() << result;
    this->setText(result);
    if (j == 2) {
        this->repaint();
    }
}

void ButtonTester::mouseReleaseEvent(QMouseEvent *e)
{
    int j = ButtonTester::buttonByNumber (e->button());
    QString result = "Mouse Release: raw button=" + QString::number(j) + "  Qt=" + enumNameFromValue(e->button());
    qDebug() << result;
    this->setText(result);
}

void ButtonTester::mouseDoubleClickEvent(QMouseEvent *e)
{
    int j = ButtonTester::buttonByNumber (e->button());
    QString result = "Mouse DoubleClick: raw button=" + QString::number(j) + "  Qt=" + enumNameFromValue(e->button());
    qDebug() << result;
    this->setText(result);
}

void ButtonTester::wheelEvent (QWheelEvent *e)
{
    QString result;
    if (e->delta() > 0) {

        if (e->orientation() == Qt::Vertical) {
            result = "Mouse Wheel Event: UP";
        } else {
            result = "Mouse Wheel Event: LEFT";
        }
    } else if (e->delta() < 0) {
        if (e->orientation() == Qt::Vertical) {
            result = "Mouse Wheel Event: DOWN";
        } else {
            result = "Mouse Wheel Event: RIGHT";
        }
    }
    qDebug() << result;
    this->setText(result);
}

int ButtonTester::buttonByNumber(const Qt::MouseButton button)
{
    if (button == Qt::NoButton)      return 0;
    if (button == Qt::LeftButton)    return 1;
    if (button == Qt::RightButton)   return 2;
    if (button == Qt::MiddleButton)  return 3;

/* Please note that Qt Button #4 corresponds to button #8 on all
 * platforms which EMULATE wheel events by creating button events
 * (Button #4 = Scroll Up; Button #5 = Scroll Down; Button #6 = Scroll
 * Left; and Button #7 = Scroll Right.) This includes X11, with both
 * Xlib and XCB.  So, the "raw button" for "Qt::BackButton" is
 * usually described as "Button #8".

 * If your platform supports "smooth scrolling", then, for the cases of
 * Qt::BackButton and higher, this program will show "raw button" with a
 * value which is too large. Subtract 4 to get the correct button ID for
 * your platform.
 */

    if (button == Qt::BackButton)    return 8;
    if (button == Qt::ForwardButton) return 9;
    if (button == Qt::TaskButton)    return 10;
    if (button == Qt::ExtraButton4)  return 11;
    if (button == Qt::ExtraButton5)  return 12;
    if (button == Qt::ExtraButton6)  return 13;
    if (button == Qt::ExtraButton7)  return 14;
    if (button == Qt::ExtraButton8)  return 15;
    if (button == Qt::ExtraButton9)  return 16;
    if (button == Qt::ExtraButton10) return 17;
    if (button == Qt::ExtraButton11) return 18;
    if (button == Qt::ExtraButton12) return 19;
    if (button == Qt::ExtraButton13) return 20;
    if (button == Qt::ExtraButton14) return 21;
    if (button == Qt::ExtraButton15) return 22;
    if (button == Qt::ExtraButton16) return 23;
    if (button == Qt::ExtraButton17) return 24;
    if (button == Qt::ExtraButton18) return 25;
    if (button == Qt::ExtraButton19) return 26;
    if (button == Qt::ExtraButton20) return 27;
    if (button == Qt::ExtraButton21) return 28;
    if (button == Qt::ExtraButton22) return 29;
    if (button == Qt::ExtraButton23) return 30;
    if (button == Qt::ExtraButton24) return 31;
    qDebug("QMouseShortcutEntry::addShortcut contained Invalid Qt::MouseButton value");
    return 0;
}

QString ButtonTester::enumNameFromValue(const Qt::MouseButton button)
{
    if (button == Qt::NoButton)      return "NoButton";
    if (button == Qt::LeftButton)    return "LeftButton";
    if (button == Qt::RightButton)   return "RightButton";
    if (button == Qt::MiddleButton)  return "MiddleButton";
    if (button == Qt::BackButton)    return "BackButton";
    if (button == Qt::ForwardButton) return "ForwardButton";
    if (button == Qt::TaskButton)    return "TaskButton";
    if (button == Qt::ExtraButton4)  return "ExtraButton4";
    if (button == Qt::ExtraButton5)  return "ExtraButton5";
    if (button == Qt::ExtraButton6)  return "ExtraButton6";
    if (button == Qt::ExtraButton7)  return "ExtraButton7";
    if (button == Qt::ExtraButton8)  return "ExtraButton8";
    if (button == Qt::ExtraButton9)  return "ExtraButton9";
    if (button == Qt::ExtraButton10) return "ExtraButton10";
    if (button == Qt::ExtraButton11) return "ExtraButton11";
    if (button == Qt::ExtraButton12) return "ExtraButton12";
    if (button == Qt::ExtraButton13) return "ExtraButton13";
    if (button == Qt::ExtraButton14) return "ExtraButton14";
    if (button == Qt::ExtraButton15) return "ExtraButton15";
    if (button == Qt::ExtraButton16) return "ExtraButton16";
    if (button == Qt::ExtraButton17) return "ExtraButton17";
    if (button == Qt::ExtraButton18) return "ExtraButton18";
    if (button == Qt::ExtraButton19) return "ExtraButton19";
    if (button == Qt::ExtraButton20) return "ExtraButton20";
    if (button == Qt::ExtraButton21) return "ExtraButton21";
    if (button == Qt::ExtraButton22) return "ExtraButton22";
    if (button == Qt::ExtraButton23) return "ExtraButton23";
    if (button == Qt::ExtraButton24) return "ExtraButton24";
    qDebug("QMouseShortcutEntry::addShortcut contained Invalid Qt::MouseButton value");
    return "NoButton";
}