#include "point2d.h"
#include <stdlib.h>

struct _p {
    double x, y;
};

typedef struct _p Point2D;

Point2D *point2D_new(double x, double y) {
    Point2D *point = malloc(sizeof(Point2D));
    point -> x = x;
    point -> y = y;
    return point;
}

void point2D_destroy(Point2D *p) {
    free(p);
}

double point2D_get_x(Point2D *p) {
    return p -> x;
}

double point2D_get_y(Point2D *p) {
    return p -> y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2) {
    Point2D *p3 = point2D_new(p1 -> x + p2 -> x, p1 -> y + p2 -> y);
    return p3;
}

double point2D_theta(Point2D *p1, Point2D *p2) {
    return (p2 -> y - p1 -> y)/(p2 -> x - p1 -> x);
}

Point2D *point2D_scale(Point2D *p, double s) {
    Point2D *p_new = point2D_new(p -> x *= s, p -> y *= s);
    return p_new;
}