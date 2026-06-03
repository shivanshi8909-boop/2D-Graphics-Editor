#ifndef SHAPES_H
#define SHAPES_H

#define ROWS 25
#define COLS 80

void drawRectangle(char canvas[ROWS][COLS],int x,int y,int width,int height);

void drawLine(char canvas[ROWS][COLS],int x1, int y1, 
                                      int x2,int y2);

void drawTriangle(char canvas[ROWS][COLS],
                  int x1, int y1,
                  int x2, int y2,
                  int x3, int y3);

void drawCircle(char canvas[ROWS][COLS],
                int centerX,
                int centerY,
                int radius);

#endif