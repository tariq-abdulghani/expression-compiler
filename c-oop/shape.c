#include "shape.h"
#include <math.h>

void Shape_ctor(Shape *const self, __int16_t x, __int16_t y)
{
    self->x = x;
    self->y = y;
}

void Shape_moveBy(Shape *const self, __int16_t dx, __int16_t dy)
{
    self->x += dx;
    self->y += dy;
}

__uint16_t Shape_distanceFrom(Shape const *const self, Shape *const other)
{
    __uint16_t dx = fabs(self->x - other->x);
    __uint16_t dy = fabs(self->y - other->y);
    return dx + dy;
}