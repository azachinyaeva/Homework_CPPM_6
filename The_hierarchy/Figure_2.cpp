#include <iostream>
#include <locale.h>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

using namespace std;

void print_object(Figure* figure) {
    figure->get_info();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle("Треугольник", 10, 10, 10, 60, 70, 50);
    RightTriangle triangle_r("Прямоугольный треугольник", 10, 10, 10, 60, 50);
    IsoscelesTriangle triangle_i("Равнобедренный треугольник", 10, 20, 60, 50);
    EquilateralTriangle triangle_e("Равносторонний треугольник", 10, 60);
    Quadrangle quad("Четырехугольник", 20, 30, 20, 30, 60, 50, 60, 50);
    Rectangle rect("Прямоугольник", 20, 30);
    Square square("Квадрат", 15);
    Parallelogram par("Параллелограмм", 20, 30, 100, 80);
    Rhombus rhombus("Ромб", 16, 100, 80);

    Figure* ptr_figure =  &triangle;
    print_object(ptr_figure);
    ptr_figure = &triangle_r;
    print_object(ptr_figure);
    ptr_figure = &triangle_i;
    print_object(ptr_figure);
    ptr_figure = &triangle_e;
    print_object(ptr_figure);
    ptr_figure = &quad;
    print_object(ptr_figure);
    ptr_figure = &rect;
    print_object(ptr_figure);
    ptr_figure = &square;
    print_object(ptr_figure);
    ptr_figure = &par;
    print_object(ptr_figure);
    ptr_figure = &rhombus;
    print_object(ptr_figure);

}


