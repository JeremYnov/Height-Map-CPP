#ifndef HEIGHTMAPSCENE_H
#define HEIGHTMAPSCENE_H

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QList>

#include "mapgenerator.h"

class HeightMapScene : public QGraphicsScene
{
    Q_OBJECT
public:
    HeightMapScene(int width, int height);

    void generateHeightMap();

private:
    MapGenerator mapGenerator;

    // définition de l'ensemble des éléments de la scène
    QList<QList<QGraphicsRectItem*>> points;
};

#endif // HEIGHTMAPSCENE_H