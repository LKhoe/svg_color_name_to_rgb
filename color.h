#ifndef COLOR_H
#define COLOR_H

#include <string>
#include <map>

typedef struct color{
    int r;
    int g;
    int b;
} Color;

Color getColor(const char* s);

#endif // COLOR_H