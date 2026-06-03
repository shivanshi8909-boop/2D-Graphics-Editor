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