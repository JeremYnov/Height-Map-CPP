#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include <QList>
#include <QGraphicsRectItem>

#include "noise.h"

class MapGenerator
{
public:
    void generateMap(QList<QList<QGraphicsRectItem*>> points);

    int mapWidth;
    int mapHeight;
    double noiseScale;

private:
    Noise noise;
};

#endif // MAPGENERATOR_H
