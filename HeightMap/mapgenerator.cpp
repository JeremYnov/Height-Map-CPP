#include <QList>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QBrush>

#include "mapgenerator.h"
#include "noise.h"

void MapGenerator::generateMap(QList<QList<QGraphicsRectItem*>> points){

    QList<QList<double>> noiseMap = noise.generateNoiseMap(mapWidth, mapHeight, noiseScale);

    for (int y = 0; y < mapHeight; y++) {

        for (int x = 0; x < mapWidth; x++) {
            if (noiseMap[y][x] > 0.5) {
                points[y][x]->setBrush(Qt::black);
            } else {
                points[y][x]->setBrush(Qt::white);
            }
        }

    }

}
