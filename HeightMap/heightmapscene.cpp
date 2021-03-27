#include <QDebug>

#include "heightmapscene.h"
#include <cmath>

HeightMapScene::HeightMapScene(int width, int height)
{

    mapGenerator.mapHeight = height - 2;
    mapGenerator.mapWidth = width - 2;
    mapGenerator.noiseScale = 100;


    for (int y = 0 ; y < mapGenerator.mapHeight ; y++) {
        points.append(QList<QGraphicsRectItem*>());

        for (int x = 0 ; x < mapGenerator.mapWidth ; x++) {

            QGraphicsRectItem* point = new QGraphicsRectItem();

            point->setRect(x, y, 1, 1);
            point->setBrush(Qt::white);
            point->setPen(Qt::NoPen);
            points.last().append(point);

            this->addItem(point);
        }
    }
}

void HeightMapScene::generateHeightMap()
{
    mapGenerator.generateMap(points);
}
