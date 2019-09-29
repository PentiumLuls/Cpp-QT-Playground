#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	QObject::connect(ui->actionOpenFile, SIGNAL(triggered()), this, SLOT(onOpenActionTriggered()));
}

void MainWindow::onOpenActionTriggered()
{
	std::cout << "Open action triggered!" << std::endl;
	QString selected_file = QFileDialog::getOpenFileName(this, tr("Select file to open"), QApplication::applicationDirPath());
	std::cout << "Selected file: " << selected_file.toStdString() << std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
