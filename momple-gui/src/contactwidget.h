/*
 * contactwidget.h is a part of the Momple frontend to Tessa.
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

#ifndef CONTACTWIDGET_H
#define CONTACTWIDGET_H

#include "contact.h"

#include <QFrame>
#include <QLabel>
#include <QWidget>

class ContactWidget : public QFrame
{
	Q_OBJECT

	public:
		ContactWidget(QWidget *parent, Contact *contact);

	private:
		Contact *_contact;
		QLabel *_nameLabel;
		QLabel *_iconLabel;
		QLabel *_statusLabel;
};

#endif