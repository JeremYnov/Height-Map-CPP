#include <QList>
#include <QVector2D>
#include <QDebug>

#include "noise.h"
#include "perlinnoise.h"


QList<QList<double>> Noise::generateNoiseMap(int mapWidth, int mapHeight, double scale){
//    qDebug() << mapHeight;
//    qDebug() << mapWidth;
//    qDebug() << scale;
    QList<QList<double>> noiseMap;

    if (scale <= 0) {
        scale = 0.001;
    }

    unsigned int seed = 237;
    PerlinNoise pn(seed);

    for (int y = 0; y < mapHeight; y++) {
        QList<double> listX;
        for (int x = 0; x < mapWidth; x++) {
            double sampleX = x / scale;
            double sampleY = y / scale;

            double perlinValue = pn.noise(sampleX, sampleY, 0.8);

            listX.push_back(perlinValue);
//            qDebug() << listX;
        }
        noiseMap.push_back(listX);
    }
//    qDebug() << noiseMap;

    return noiseMap;
}
