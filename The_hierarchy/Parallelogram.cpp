#include "Quadrangle.h"
#include "Parallelogram.h"


//�������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����);

    Parallelogram::Parallelogram(string name_, int side_a_, int side_b_,
        int angle_A_, int angle_B_) : Quadrangle(name_, side_a_, side_b_, side_a_, side_b_,
            angle_A_, angle_B_, angle_A_, angle_B_) {}
