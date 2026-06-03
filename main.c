#include <stdio.h>
#include "shapes.h"

char canvas[ROWS][COLS];

void initializeCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void displayCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c", canvas[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    initializeCanvas();

    drawRectangle(canvas, 10, 5, 20, 8);
    drawLine(canvas, 0, 0, 40, 20);
    drawTriangle(canvas,
             50, 5,
             70, 15,
             40, 15);
    drawCircle(canvas, 60, 18, 5);
    printf("===== 2D GRAPHICS EDITOR =====\n\n");

    displayCanvas();

    return 0;
}