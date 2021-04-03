#include <QDebug>

#include "heightmapscene.h"
#include <cmath>

HeightMapScene::HeightMapScene(int width, int height)
{
    for (int y = 0 ; y < height ; y++) {
        points.append(QList<QGraphicsRectItem*>());

        for (int x = 0 ; x < width ; x++) {

            QGraphicsRectItem* point = new QGraphicsRectItem();

            point->setRect(x, y, 1, 1);
            point->setBrush(Qt::white);
            point->setPen(Qt::NoPen);
            points.last().append(point);

            this->addItem(point);
        }
    }
}

void HeightMapScene::generateHeightMap(int width, int height, double scale, int octaves, double persistance, double lacunarity, int seed)
{
    mapGenerator.mapHeight = height;
    mapGenerator.mapWidth = width;
    mapGenerator.noiseScale = scale;
    mapGenerator.octaves = octaves;
    mapGenerator.lacunarity = lacunarity;
    mapGenerator.persistance = persistance;
    mapGenerator.seed = seed;

    mapGenerator.generateMap(points);
}
