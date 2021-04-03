#include <QList>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QBrush>

#include "mapgenerator.h"
#include "noise.h"

void MapGenerator::generateMap(QList<QList<QGraphicsRectItem*>> points){

    QList<QList<double>> noiseMap = noise.generateNoiseMap(mapWidth, mapHeight, noiseScale, octaves, persistance, lacunarity, seed);

    for (int y = 0; y < mapHeight; y++) {

        for (int x = 0; x < mapWidth; x++) {

            quint32 r = 255 * noiseMap[y][x];
            quint32 g = 255 * noiseMap[y][x];
            quint32 b = 255 * noiseMap[y][x];

            points[y][x]->setBrush(QColor(r,g,b));


//            if (noiseMap[y][x] > 0.5) {
//                points[y][x]->setBrush(Qt::black);
//            } else {
//                points[y][x]->setBrush(Qt::white);
//            }
        }

    }

}