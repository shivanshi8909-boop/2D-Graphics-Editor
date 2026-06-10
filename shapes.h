#ifndef SHAPES_H
#define SHAPES_H

#define ROWS 40
#define COLS 90
#define MAX_SHAPES 100

#define RECTANGLE 1
#define LINE 2
#define TRIANGLE 3
#define CIRCLE 4

typedef struct {
  int id;
  int type;

  int x1, y1;
  int x2, y2;
  int x3, y3;

  int width;
  int height;
  int radius;

} Shape;

void drawRectangle(char canvas[ROWS][COLS], int x, int y, int width,
                   int height);

void drawLine(char canvas[ROWS][COLS], int x1, int y1, int x2, int y2);

void drawTriangle(char canvas[ROWS][COLS], int x1, int y1, int x2, int y2,
                  int x3, int y3);

void drawCircle(char canvas[ROWS][COLS], int centerX, int centerY, int radius);

#endif