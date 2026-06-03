#include "shapes.h"

void drawRectangle(char canvas[ROWS][COLS],
                   int x,
                   int y,
                   int width,
                   int height)
{
    int i, j;

    for(i = y; i < y + height; i++)
    {
        for(j = x; j < x + width; j++)
        {
            if(i == y ||
               i == y + height - 1 ||
               j == x ||
               j == x + width - 1)
            {
                canvas[i][j] = '*';
            }
        }
    }
}

void drawLine(char canvas[ROWS][COLS],
              int x1,
              int y1,
              int x2,
              int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = (dx > dy ? dx : dy);

    if(dx < 0)
        dx = -dx;

    if(dy < 0)
        dy = -dy;

    steps = (dx > dy) ? dx : dy;

    float xIncrement = (float)(x2 - x1) / steps;
    float yIncrement = (float)(y2 - y1) / steps;

    float x = x1;
    float y = y1;

    int i;

    for(i = 0; i <= steps; i++)
    {
        if((int)y >= 0 && (int)y < ROWS &&
           (int)x >= 0 && (int)x < COLS)
        {
            canvas[(int)y][(int)x] = '*';
        }

        x += xIncrement;
        y += yIncrement;
    }
}