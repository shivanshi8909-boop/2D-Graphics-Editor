#include <stdio.h>
#include "shapes.h"

char canvas[ROWS][COLS];
Shape shapes[MAX_SHAPES];

int shapeCount = 0;
int nextId = 1;

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

void redrawCanvas()
{
    int i;

    initializeCanvas();

    for(i = 0; i < shapeCount; i++)
    {
        if(shapes[i].type == RECTANGLE)
        {
            drawRectangle(canvas,
                          shapes[i].x1,
                          shapes[i].y1,
                          shapes[i].width,
                          shapes[i].height);
        }

        if(shapes[i].type == LINE)
        {
            drawLine(canvas,
               shapes[i].x1,
               shapes[i].y1,
               shapes[i].x2,
               shapes[i].y2);
        }
       else if(shapes[i].type == TRIANGLE)
       {
             drawTriangle(canvas,
                 shapes[i].x1, shapes[i].y1,
                 shapes[i].x2, shapes[i].y2,
                 shapes[i].x3, shapes[i].y3);
        }
        else if(shapes[i].type == CIRCLE)
        {
             drawCircle(canvas,
                 shapes[i].x1,
                 shapes[i].y1,
                shapes[i].radius);
        }
    }
}

    int main()
{
    int choice;

    while(1)
    {
        printf("\n===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Add Rectangle\n");
        printf("2. Add Line\n");
        printf("3. Add Triangle\n");
        printf("4. Add Circle\n");
        printf("5. Delete Object\n");
        printf("6. Display Canvas\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                 {
                  Shape rect;

                  rect.id = nextId++;
                  rect.type = RECTANGLE;

                  printf("Enter x: ");
                  scanf("%d", &rect.x1);

                  printf("Enter y: ");
                  scanf("%d", &rect.y1);

                  printf("Enter width: ");
                  scanf("%d", &rect.width);

                  printf("Enter height: ");
                  scanf("%d", &rect.height);

                  shapes[shapeCount++] = rect;

                  printf("Rectangle added. ID = %d\n", rect.id);

                   break;
                }

            case 2:
                   
                  {
                    Shape line;

                       line.id = nextId++;
                        line.type = LINE;

                         printf("Enter x1: ");
                         scanf("%d", &line.x1);

                         printf("Enter y1: ");
                         scanf("%d", &line.y1);

                         printf("Enter x2: ");
                         scanf("%d", &line.x2);

                         printf("Enter y2: ");
                         scanf("%d", &line.y2);

                           shapes[shapeCount++] = line;

                            printf("Line added. ID = %d\n", line.id);

                             break;
                          }
            case 3:
                    {
                        Shape triangle;

                        triangle.id = nextId++;
                         triangle.type = TRIANGLE;

                        printf("Enter x1: ");
                        scanf("%d", &triangle.x1);

                         printf("Enter y1: ");
                         scanf("%d", &triangle.y1);

                         printf("Enter x2: ");
                         scanf("%d", &triangle.x2);

                         printf("Enter y2: ");
                         scanf("%d", &triangle.y2);

                         printf("Enter x3: ");
                         scanf("%d", &triangle.x3);

                         printf("Enter y3: ");
                         scanf("%d", &triangle.y3);

                          shapes[shapeCount++] = triangle;

                          printf("Triangle added. ID = %d\n", triangle.id);

                          break;
                      }
            case 4:
                  {
                    Shape circle;

                     circle.id = nextId++;
                     circle.type = CIRCLE;

                     printf("Enter center x: ");
                     scanf("%d", &circle.x1);

                     printf("Enter center y: ");
                     scanf("%d", &circle.y1);

                     printf("Enter radius: ");
                     scanf("%d", &circle.radius);

                     shapes[shapeCount++] = circle;

                     printf("Circle added. ID = %d\n", circle.id);

                    break;
               }
               
            case 5:
            {
              int deleteId;
              int i, found = 0;

              printf("Enter Object ID to delete: ");
              scanf("%d", &deleteId);

              for(i = 0; i < shapeCount; i++)
             {
              if(shapes[i].id == deleteId)
              {
               int j;

               for(j = i; j < shapeCount - 1; j++)
              {
                shapes[j] = shapes[j + 1];
              }

              shapeCount--;
              found = 1;

               printf("Object deleted successfully.\n");
               break;
            }
         }

         if(!found)
         {
        printf("Object ID not found.\n");
         }

         break;
}

            case 6:
                 redrawCanvas();
                displayCanvas();
                 break;

            case 7:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
