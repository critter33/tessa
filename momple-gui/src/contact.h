/*
 * contact.h is a part of the Momple frontend to Tessa.
 * Copyright (C) 2007  Sander Dijkhuis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QString>

class Contact : public QObject {
  Q_OBJECT

  public:
    Contact(QObject *parent, QString identifier, QString name);
    QString identifier() { return _identifier; };
    QString name() { return _name; };

  private:
    QString _identifier;
    QString _name;
};

#endif
