#pragma once

class Point
{
private:
    float x, y;
    float _coordenates[2];

public:
    Point(float _x, float _y);
    void moveLeft(float _x);
    void moveRight(float _x);
    void moveUp(float _y);
    void moveDown(float _y);
    float *coordenates();
    float *getX();
    float *getY();
};
