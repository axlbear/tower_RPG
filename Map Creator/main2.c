#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define KB_ENTER 13
#define KB_ESC 27
#define KB_SPC 32
#define KB_TAB 9

void printArray (int a[20][41])
{
    system("@cls || clear");
    for (int y=0; y<20; y++)
    {
        for (int x=0; x<41; x++)
        {
            printf("%d,", a[y][x]);
        }
        printf("\n");
    }
    system("pause");
}

void printMap (int a[20][41])
{
    for (int y=0; y<20; y++)
    {
        for (int x=0; x<41; x++)
        {
            printf("%c", a[y][x]);
        }
        printf("\n");
    }
}

int main (void)
{
    int matrix[20][41];
    int y, x;

    for (y=0; y<20; y++)
    {
        for (x=0; x<41; x++)
        {
            matrix[y][x] = 176; // FLOOR
        }
    }

    matrix[0][0] = 201;  // Upper Left Corner
    matrix[19][0] = 200; // Lower Left Corner
    matrix[0][40] = 187; // Upper Right Corner
    matrix[19][40] = 188;// Lower Right Corner

    for (y=1; y<19; y++)
    {
        for (x=1; x<40; x++)
        {
            matrix[0][x] = 205;  // Upper Horizontal Wall
            matrix[19][x] = 205; // Upper Horizontal Wall
            matrix[y][0] = 186;  // Upper Vertical Wall
            matrix[y][40] = 186; // Upper Vertical Wall
        }
    }

    do
    {
        system("@cls || clear");

        printMap(matrix);

        printf("| %c - %d - UPPER LEFT CORNER\n", 201, 201);
        printf("| %c - %d - LOWER LEFT CORNER\n", 200, 200);
        printf("| %c - %d - UPPER RIGHT CORNER\n", 187, 187);
        printf("| %c - %d - LOWER RIGHT CORNER\n", 188, 188);
        printf("| %c - %d - VERTICAL WALL\n", 186, 186);
        printf("| %c - %d - HORIZONTAL WALL\n", 205, 205);
        printf("| %c - %d - FLOOR\n", 176, 176);
        printf("| %c - %d - INSIDE WALL\n", 178, 178);
        printf("| %c - %d - EXIT\n", 177, 177);
        printf("| %c - %d - UPPER DOOR TRAK\n", 202, 202);
        printf("| %c - %d - LOWER DOOR TRAK\n", 203, 203);
        printf("| %c - %d - LEFT DOOR TRAK\n", 204, 204);
        printf("| %c - %d - RIGHT DOOR TRAK\n", 185, 185);
        printf("| %c - %d - DOOR\n", 219, 219);
        printf("| %c - %d - QUEST ITEM\n", 207, 207);
        printf("| %c - %d - WEAPON\n", 159, 159);
        printf("| %c - %d - RING\n", 208, 208);
        printf("| %c - %d - KEY\n", 170, 170);
        printf("| %c - %d - LEVER OFF\n", 92, 92);

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

                if (x < 0 || x > 41)
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

                if (x1 < 0 || x1 > 41)
                {
                    break;
                }
                
                printf("X2 = ?\n>>> ");
                scanf("%d", &x2);

                if (x2 < 0 || x2 > 41)
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