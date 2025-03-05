#include <stdio.h>
#include "ft_point.h"

void setpoint(t_point *point)
{
    point->x = 42;
    point->y = 11;
}

int main(void)
{
    t_point point;
    setpoint(&point);
    return (0);
}