#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

//равносторонний треугольник (все стороны равны, все углы равны 60);

    EquilateralTriangle::EquilateralTriangle(string name_, int side_a_, int angle_A)
        : IsoscelesTriangle(name_, side_a_, side_a_, 60, 60) {

    }


