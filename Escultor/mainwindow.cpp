#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionabreDialogo, SIGNAL(triggered(bool)), ui->widget, SLOT(abreDialogEscultor()));
    connect(ui->widget,SIGNAL(alteraSlidersX(int,int)),ui->horizontalSliderRx,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersX(int,int)),ui->horizontalSliderDimX,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersY(int,int)),ui->horizontalSliderRy,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersY(int,int)),ui->horizontalSliderDimY,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersZ(int,int)),ui->horizontalSliderZ,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersZ(int,int)),ui->horizontalSliderRz,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSlidersZ(int,int)),ui->horizontalSliderDimZ,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(alteraSliderRaioEsfera(int,int)),ui->horizontalSliderRaio,SLOT(setRange(int,int)));
    connect(ui->horizontalSliderZ,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaPlanoZ(int)));
    connect(this,SIGNAL(nomeAcao(QString)),ui->widget,SLOT(acaoSelecionada(QString)));
    connect(ui->horizontalSliderDimX,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaXCaixa(int)));
    connect(ui->horizontalSliderDimY,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaYCaixa(int)));
    connect(ui->horizontalSliderDimZ,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaZCaixa(int)));
    connect(ui->horizontalSliderRaio,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaRaioEsfera(int)));
    connect(ui->horizontalSliderRx,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaRaioXEllipsoid(int)));
    connect(ui->horizontalSliderRy,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaRaioYEllipsoid(int)));
    connect(ui->horizontalSliderRz,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaRaioZEllipsoid(int)));
    connect(ui->widget,SIGNAL(alteraSliderR(int)),ui->horizontalSliderR,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(alteraSliderG(int)),ui->horizontalSliderG,SLOT(setValue(int)));
    connect(ui->widget,SIGNAL(alteraSliderB(int)),ui->horizontalSliderB,SLOT(setValue(int)));
    connect(ui->horizontalSliderR,SIGNAL(valueChanged(int)),ui->widget,SLOT(mudaR(int)));

    ultimaAcao = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::capturaAcao(bool)
{
    if (ultimaAcao.compare(ui->actionPutVoxel->text()) == 0){
        ui->actionPutVoxel->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionCutVoxel->text()) == 0) {
        ui->actionCutVoxel->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionPutBox->text()) == 0) {
        ui->actionPutBox->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionCutBox->text()) == 0) {
        ui->actionCutBox->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionPutSphere->text()) == 0) {
        ui->actionPutSphere->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionCutSphere->text()) == 0) {
        ui->actionCutSphere->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionPutEllipsoid->text()) == 0) {
        ui->actionPutEllipsoid->setChecked(false);
    }
    else if (ultimaAcao.compare(ui->actionCutEllipsoid->text()) == 0) {
        ui->actionCutEllipsoid->setChecked(false);
    }


    if(ui->actionPutVoxel->isChecked()){
        emit nomeAcao(ui->actionPutVoxel->text());
        ultimaAcao = ui->actionPutVoxel->text();
    }
    else if (ui->actionCutVoxel->isChecked()) {
        emit nomeAcao(ui->actionCutVoxel->text());
        ultimaAcao = ui->actionCutVoxel->text();
    }
    else if (ui->actionPutBox->isChecked()) {
        emit nomeAcao(ui->actionPutBox->text());
        ultimaAcao = ui->actionPutBox->text();
    }
    else if (ui->actionCutBox->isChecked()) {
        emit nomeAcao(ui->actionCutBox->text());
        ultimaAcao = ui->actionCutBox->text();
    }
    else if (ui->actionPutSphere->isChecked()) {
        emit nomeAcao(ui->actionPutSphere->text());
        ultimaAcao = ui->actionPutSphere->text();
    }
    else if (ui->actionCutSphere->isChecked()) {
        emit nomeAcao(ui->actionCutSphere->text());
        ultimaAcao = ui->actionCutSphere->text();
    }
    else if (ui->actionPutEllipsoid->isChecked()) {
        emit nomeAcao(ui->actionPutEllipsoid->text());
        ultimaAcao = ui->actionPutEllipsoid->text();
    }
    else if (ui->actionCutEllipsoid->isChecked()) {
        emit nomeAcao(ui->actionCutEllipsoid->text());
        ultimaAcao = ui->actionCutEllipsoid->text();
    }

}
