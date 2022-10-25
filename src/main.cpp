#include <iostream>
#include "headers/Point.h"

int main(int argc,char** args){
    std::cout << "c++ is nice";
    Point point(0,0);
    std::cout << "point.x = " << point.coordenates()[0] << std::endl;
    point.moveDown(10);
    std::cout << "point.y = " << point.coordenates()[1] << std::endl;
    std::cin.get();
    return 0;
}