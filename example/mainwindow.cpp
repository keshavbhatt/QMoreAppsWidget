#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

  ui->setupUi(this);

  MoreApps *moreApps =
      new MoreApps(this, nullptr, "keshavnrj",
                   QUrl("https://raw.githubusercontent.com/keshavbhatt/appdata/"
                        "main/moreapps.txt"),
                   false);
  moreApps->setFixedHeight(120);

  QVBoxLayout *vl = new QVBoxLayout();
  vl->addWidget(moreApps);

  this->centralWidget()->setLayout(vl);
}

MainWindow::~MainWindow() { delete ui; }
