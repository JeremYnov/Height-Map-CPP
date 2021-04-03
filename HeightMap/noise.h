#ifndef NOISE_H
#define NOISE_H

#include <QList>
#include <QVector2D>

#include "perlinnoise.h"


class Noise
{
public:
    static QList<QList<double>> generateNoiseMap(int mapWidth, int mapHeight, double scale, int octaves, double persistance, double lacunarity, int seed);
};

#endif // NOISE_H