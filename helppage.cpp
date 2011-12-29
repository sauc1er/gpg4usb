/*
 *      helppage.cpp
 *
 *      Copyright 2008 gpg4usb-team <gpg4usb@cpunk.de>
 *
 *      This file is part of gpg4usb.
 *
 *      Gpg4usb is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      Gpg4usb is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with gpg4usb.  If not, see <http://www.gnu.org/licenses/>
 */

#include "helppage.h"

HelpPage::HelpPage(const QString path, QWidget *parent) :
    QWidget(parent)
{

    browser = new QTextBrowser();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    mainLayout->setSpacing(0);
    mainLayout->addWidget(browser);
    mainLayout->setContentsMargins(0,0,0,0);
    setLayout(mainLayout);
    //setAttribute(Qt::WA_DeleteOnClose);
    browser->setSource(QUrl::fromLocalFile(path));
    browser->setFocus();

}

QTextBrowser* HelpPage::getBrowser() {
    return browser;
}
