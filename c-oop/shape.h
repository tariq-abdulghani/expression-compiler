#include<stdio.h>

typedef struct shape
{
    __int16_t x;
    __int16_t y;

}Shape;

void Shape_ctor(Shape* const self, __int16_t x, __int16_t y);
void Shape_moveBy(Shape* const self, __int16_t dx, __int16_t dy);
__uint16_t Shape_distanceFrom(Shape const * const self, Shape* const other);

