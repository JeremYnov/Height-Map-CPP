#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new HeightMapScene(ui->graphicsView->width() - 2, ui->graphicsView->height() - 2);

    // Set map height and map width values
    ui->heightInput->setValue(ui->graphicsView->height());
    ui->widthInput->setValue(ui->graphicsView->width());

    // Set noise scale value
    ui->noiseScaleInput->setValue(0.0);

    // Set octaves value
    ui->octavesInput->setValue(5);

    // Set persistance value
    ui->persistanceInput->setValue(0.5);

    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generateMap_clicked()
{
    int height = ui->graphicsView->height() -2;
    int width = ui->graphicsView->width() -2;
    double scale = ui->noiseScaleInput->value();
    int octaves = ui->octavesInput->value();
    double lacunarity = ui->lacunarityInput->value();
    double persistance = ui->persistanceInput->value();
    int seed = ui->seedInput->value();
    scene->generateHeightMap(width, height, scale, octaves, persistance, lacunarity, seed);
}
