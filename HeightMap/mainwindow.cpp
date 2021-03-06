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
    ui->noiseScaleInput->setValue(100.0);

    // Set octaves value
    ui->octavesInput->setValue(5);

    // Set persistance value
    ui->persistanceInput->setValue(0.5);

    // Set lacunarity value
    ui->lacunarityInput->setValue(2.0);

    // Set map in shade of gray
    ui->shadeOfGrayInput->setChecked(true);
    //qDebug()<<ui->shadeOfGrayInput->isChecked();

    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generateMap_clicked()
{
    int height = ui->heightInput->value() - 2;
    int width = ui->widthInput->value() - 2;
    double scale = ui->noiseScaleInput->value();
    int octaves = ui->octavesInput->value();
    double lacunarity = ui->lacunarityInput->value();
    double persistance = ui->persistanceInput->value();
    int seed = ui->seedInput->value();
    int offsetX = ui->offsetXInput->value();
    int offsetY = ui->offsetYInput->value();

    bool isChecked = ui->shadeOfGrayInput->isChecked();

    ui->graphicsView->setGeometry(ui->graphicsView->x(), ui->graphicsView->y(), ui->widthInput->value(), ui->heightInput->value());

    scene = new HeightMapScene(width, height);
    ui->graphicsView->setScene(scene);

    scene->generateHeightMap(width, height, scale, octaves, persistance, lacunarity, seed, offsetX, offsetY, isChecked);
}
