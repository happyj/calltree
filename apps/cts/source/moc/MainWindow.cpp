#include "MainWindow.h"

#include <QtGui/QtGui>


MainWindow::MainWindow()
	: m_BTreeWidget( 0x0 )
{
	setupUi( this );
	connect( action_Open, SIGNAL(triggered()), this, SLOT(loadFile()) );
	readSettings();
}

void MainWindow::closeEvent(QCloseEvent* event)
{
	writeSettings();
	event->accept();
}

void MainWindow::readSettings()
{
	QSettings settings("calltree", "Call Tree Studio");
	QRect rect = settings.value(
			"geometry",
			QRect(0,0,800, 600)).toRect();
	move(rect.topLeft());
	resize(rect.size());
}

void MainWindow::writeSettings()
{
	QSettings settings("calltree", "Call Tree Studio");
	settings.setValue("geometry", geometry());
}

void MainWindow::loadFile()
{
	QString fileName = QFileDialog::getOpenFileName(this,
			tr("Open Behavior Tree"), ".",
			tr("Behavior Tree files (*.bts)"));
/*
	if( !fileName.empty() )
	{
		delete m_Bt;
		m_Bt = new
	}
	*/
}
