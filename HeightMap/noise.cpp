#include <QList>
#include <QVector2D>
#include <QDebug>

#include "noise.h"
#include "perlinnoise.h"


QList<QList<double>> Noise::generateNoiseMap(int mapWidth, int mapHeight, double scale, int octaves, double persistance, double lacunarity, int seed){

    QList<QList<double>> noiseMap;

    if (scale <= 0) {
        scale = 0.001;
    }

    PerlinNoise pn(seed);

    for (int y = 0; y < mapHeight; y++) {
        QList<double> listX;

        for (int x = 0; x < mapWidth; x++) {

            double amplitude = 1;
            double frequency = 1;
            double noiseHeight = 0;

            for (int i = 0; i < octaves; i++) {
                double sampleX = x / scale * frequency;
                double sampleY = y / scale * frequency;

                double perlinValue = pn.noise(sampleX, sampleY, 0.8) * 2 - 1;

                noiseHeight = perlinValue * amplitude;
                amplitude = amplitude * persistance;
                frequency = frequency * lacunarity;


            }

            listX.push_back(noiseHeight);
        }
        noiseMap.push_back(listX);
    }

    return noiseMap;
}