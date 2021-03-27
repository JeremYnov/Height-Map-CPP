#ifndef NOISE_H
#define NOISE_H

#include <QList>
#include <QVector2D>

#include "perlinnoise.h"


class Noise
{
public:
    static QList<QList<double>> generateNoiseMap(int mapWidth, int mapHeight, double scale);
};

#endif // NOISE_H
