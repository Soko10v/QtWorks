#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     selection_model_.setModel(&model_);

     ui->listView->setModel(&model_);

     ui->listView->setModel(&model_);
     ui->listView->setSelectionModel(&selection_model_);
     ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);
     model_.appendRow(new QStandardItem(QIcon{":/rrr.jpg"},"C++"));
     model_.appendRow(new QStandardItem(QIcon{":/rrr.jpg"},"JS"));
     model_.appendRow(new QStandardItem(QIcon{":/rrr.jpg"},"Python"));

     connect (ui->upButton, &QPushButton::clicked, this, &Ui_MainWindow::upButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}

