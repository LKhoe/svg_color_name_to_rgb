#ifndef COLOR_H
#define COLOR_H

#include <string>
#include <map>

typedef struct color{
    float r;
    float g;
    float b;
} Color;

Color getColor(const char* s);

#endif // COLOR_H