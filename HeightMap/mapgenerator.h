#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include <QList>
#include <QGraphicsRectItem>

#include "noise.h"

class MapGenerator
{
public:
    void generateMap(QList<QList<QGraphicsRectItem*>> points, bool isChecked);

    int mapWidth;
    int mapHeight;
    double noiseScale;
    int octaves;
    double persistance;
    double lacunarity;
    int seed;
    int offsetX;
    int offsetY;

private:
    Noise noise;
};

#endif // MAPGENERATOR_H
