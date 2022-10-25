#include "headers/Point.h"

Point::Point(float _x, float _y)
{
    x = _x;
    y = _y;
};

void Point::moveDown(float _y)
{
    y -= _y;
}

void Point::moveUp(float _y)
{
    y += _y;
}

void Point::moveLeft(float _x)
{
    x += _x;
}

void Point::moveRight(float _x = 1)
{
    x -= _x;
}

float *Point::getX()
{
    return &x;
}

float *Point::getY()
{
    return &y;
}

float *Point::coordenates()
{
    _coordenates[0] = x;
    _coordenates[1] = y;
    return _coordenates;
}
