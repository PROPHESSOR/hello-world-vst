#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    // TODO: Send test MIDI event
    // sendMidiEvent(type=NOTE_ON, channel=0, note=60, velocity=127);
    ui->label->setText("It hasn't been implemented yet :(");
}

void MainWindow::on_pushButton_2_clicked() {
    ui->label->setText("This also hasn't been implemented yet :(");
}
