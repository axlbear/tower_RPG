#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define KB_ENTER 13
#define KB_ESC 27
#define KB_SPC 32
#define KB_TAB 9

void printArray (int a[20][61])
{
    system("@cls || clear");
    for (int y=0; y<20; y++)
    {
        for (int x=0; x<61; x++)
        {
            printf("%d,", a[y][x]);
        }
        printf("\n");
    }
    system("pause");
}

void printMap (int a[20][61])
{
    for (int y=0; y<20; y++)
    {
        for (int x=0; x<61; x++)
        {
            printf("%c", a[y][x]);
        }
        printf("\n");
    }
}

int main (void)
{
    int matrix[20][61];
    int y, x;

    for (y=0; y<20; y++)
    {
        for (x=0; x<61; x++)
        {
            matrix[y][x] = 176; // FLOOR
        }
    }

    for (y=0; y<20; y++)
    {
        for (x=0; x<61; x++)
        {
            matrix[0][x] = 219;  // Upper Horizontal Wall
            matrix[19][x] = 219; // Upper Horizontal Wall
            matrix[y][0] = 219;  // Upper Vertical Wall
            matrix[y][60] = 219; // Upper Vertical Wall
        }
    }

    do
    {
        system("@cls || clear");

        printMap(matrix);
        
        printf("| %c - %d - FLOOR\n", 176, 176);
        printf("| %c - %d - INSIDE WALL\n", 178, 178);
        printf("| %c - %d - EXIT\n", 177, 177);
        printf("| %c - %d - WALL\n", 219, 219);

        printf("| SPACE BAR - New Tile\n");
        printf("| TAB - New Tile in sequence\n");
        printf("| ENTER - Print Array\n");
        printf("| ESC - Quit\n");

        int KB_INPUT = _getch();

        switch(KB_INPUT)
        {
            case KB_ENTER :
            {
                printArray(matrix);
                break;
            }

            case KB_ESC : exit(1);

            case KB_SPC : 
            {
                int x, y;

                printf("Y = ?\n>>> ");
                scanf("%d", &y);

                if (y < 0 || y > 20)
                {
                    break;
                }

                printf("X = ?\n>>> ");
                scanf("%d", &x);

                if (x < 0 || x > 61)
                {
                    break;
                }

                printf("Matrix[%d][%d] = ???\n>>> ", y, x);
                scanf("%d", &matrix[y][x]);

                break;
            }

            case KB_TAB : 
            {
                int x1, x2, y1, y2;

                printf("Y1 = ?\n>>> ");
                scanf("%d", &y1);

                if (y1 < 0 || y1 > 20)
                {
                    break;
                }

                printf("Y2 = ?\n>>> ");
                scanf("%d", &y2);

                if (y2 < 0 || y2 > 20)
                {
                    break;
                }

                printf("X1 = ?\n>>> ");
                scanf("%d", &x1);

                if (x1 < 0 || x1 > 61)
                {
                    break;
                }
                
                printf("X2 = ?\n>>> ");
                scanf("%d", &x2);

                if (x2 < 0 || x2 > 61)
                {
                    break;
                }

                int k;

                printf("TILE = ??\n>>> ");
                scanf("%d", &k);

                for (int z = y1; z<=y2; z++)
                {
                    for (int w = x1; w<=x2; w++)
                    {
                        matrix[z][w] = k;
                    }
                }
                break;
            }
            default : break;
        }
    } while (1);

    
    return 0;
}