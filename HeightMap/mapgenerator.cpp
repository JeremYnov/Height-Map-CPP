#include <QList>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QBrush>

#include "mapgenerator.h"
#include "noise.h"

void MapGenerator::generateMap(QList<QList<QGraphicsRectItem*>> points, bool isChecked){

    QList<QList<double>> noiseMap = noise.generateNoiseMap(mapWidth, mapHeight, noiseScale, octaves, persistance, lacunarity, seed, offsetX, offsetY);

    for (int y = 0; y < mapHeight; y++) {

        for (int x = 0; x < mapWidth; x++) {


            if (isChecked) {
                quint32 r = 255 * noiseMap[y][x];
                quint32 g = 255 * noiseMap[y][x];
                quint32 b = 255 * noiseMap[y][x];

                points[y][x]->setBrush(QColor(r,g,b));
            } else {
                if (noiseMap[y][x] < 0.2) {
                    points[y][x]->setBrush(Qt::blue);
                } else if (noiseMap[y][x] < 0.35) {
                    points[y][x]->setBrush(QColor(0,191,255));
                } else if (noiseMap[y][x] < 0.45) {
                    points[y][x]->setBrush(Qt::yellow);
                } else if (noiseMap[y][x] < 0.55) {
                    points[y][x]->setBrush(Qt::green);
                } else if (noiseMap[y][x] < 0.6) {
                    points[y][x]->setBrush(QColor(50,205,50));
                } else if (noiseMap[y][x] < 0.7) {
                    points[y][x]->setBrush(QColor(110,51,0));
                } else if (noiseMap[y][x] < 0.9) {
                    points[y][x]->setBrush(QColor(70, 33, 0));
                } else {
                    points[y][x]->setBrush(Qt::white);
                }
            }
        }

    }

}
