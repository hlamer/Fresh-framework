/****************************************************************************
	Copyright (C) 2005 - 2008  Filipe AZEVEDO & The Monkey Studio Team

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
****************************************************************************/
/*!
	\file pTabbedWorkspaceCorner.h
	\date 2008-01-14T00:27:53
	\author Filipe AZEVEDO aka Nox P\@sNox <pasnox@gmail.com>
	\brief A corner widget used by the pTabbedWorkspace class
*/
#ifndef PTABBEDWORKSPACECORNER_H
#define PTABBEDWORKSPACECORNER_H

#include "objects/MonkeyExport.h"

#include <QWidget>
#include <QBoxLayout>

class QPaintEvent;
class pTabbedWorkspace;
class QAction;

/*!
	\brief A corner widget used by the pTabbedWorkspace class
	\details 
*/
class Q_MONKEY_EXPORT pTabbedWorkspaceCorner : public QWidget
{
	Q_OBJECT

public:
	pTabbedWorkspaceCorner( pTabbedWorkspace* );
	~pTabbedWorkspaceCorner();

	QBoxLayout::Direction direction() const;

public slots:
	void clearActions();
	void setDirection( QBoxLayout::Direction );
	void addAction( QAction* );
	void setActions( QList<QAction*> );

protected:
	pTabbedWorkspace* mWorkspace;
	QBoxLayout* mLayout;
	QList<QAction*> mActions;
};

#endif // PTABBEDWORKSPACECORNER_H
