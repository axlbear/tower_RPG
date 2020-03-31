int map[20][81]; // The only Multidimensional Array of all game, it will change constantly
int x, y; // Start Position of the Player
int *vert = &y;
int *horz = &x;

int tower_level;
int *tower = &tower_level;

int mapCreate01(int a[20][81])
{
    *vert = 17;
    *horz = 2;
    *tower = 1;

    for (int y=0; y<20; y++) //preenche com 176 todas as posições
    {
        for (int x=0; x<81; x++)
        {
            a[y][x] = FLOOR;
        }
    }

    a[0][0] = U_L_CORNER;   //canto superior esquerdo
    a[0][80] = U_R_CORNER;  //canto superior direito
    a[19][0] = L_L_CORNER;  //canto inferior esquerdo
    a[19][80] = L_R_CORNER; //canto inferior direito

    for (int y=1; y<19; y++)
    {
        a[y][0] = V_WALL;  //parede vertical esquerda
        a[y][80] = V_WALL; //parede vertical direita
    }

    for (int x=1; x<80; x++)
    {
        a[0][x] = H_WALL;  //parede horizontal superior
        a[19][x] = H_WALL; //parede horizontal inferior
    }

    a[7][1] = V_WALL_2 ;
    a[7][2] = V_WALL_2 ;
    a[7][3] = L_DOOR_TRAK ;
    a[7][5] = R_DOOR_TRAK ;
    a[7][6] = V_WALL_2 ;
    a[7][7] = V_WALL_2 ;
    a[7][8] = V_WALL_2 ;
    a[7][9] = L_R_CORNER_2 ;
    a[8][1] = TABLE ;
    a[8][2] = TABLE ;
    a[8][3] = TABLE ;
    a[8][5] = TABLE ;
    a[8][6] = TABLE ;
    a[8][7] = TABLE ;
    a[8][8] = TABLE ;
    a[8][9] = TABLE ;
    a[6][9] = H_WALL_2 ;
    a[5][9] = H_WALL_2 ;
    a[4][9] = H_WALL_2 ;
    a[3][9] = H_WALL_2 ;
    a[2][9] = H_WALL_2 ;    
    a[1][9] = H_WALL_2 ;

    a[2][2] = MEEPS;
}

int printMap (int a[20][81])
{
    clear();

    for (int y=0; y<20; y++)
    {
        for (int x=0; x<81; x++)
        {
            printf("%c", a[y][x]);
        }
        printf("\n");
    }
}

int movement (int a[20][81])
{
    do
    {
        a[*vert][*horz] = PLAYER;

        printMap(a);

        printf("| Use the W, A, S, D to move\n");
        printf("| Use SPACE BAR to interact\n");
        printf("| ESC to Exit\n");

        int KB_INPUT = _getch();

        switch(KB_INPUT)
        {
            case KB_UP : 
            {
               if (a[*vert - 1][*horz] == FLOOR)
               {
                   a[*vert][*horz] = FLOOR;
                   *vert -= 1;
                   break;
               }

               else
               {
                   break;
               }               
            }

            case KB_DW : 
            {
               if (a[*vert + 1][*horz] == FLOOR)
               {
                   a[*vert][*horz] = FLOOR;
                   *vert += 1;
                   break;
               }

               else
               {
                   break;
               }               
            }

            case KB_LF : 
            {
               if (a[*vert][*horz - 1] == FLOOR)
               {
                   a[*vert][*horz] = FLOOR;
                   *horz -= 1;
                   break;
               }

               else
               {
                   break;
               }               
            }

            case KB_RG : 
            {
               if (a[*vert][*horz + 1] == FLOOR)
               {
                   a[*vert][*horz] = FLOOR;
                   *horz += 1;
                   break;
               }

               else
               {
                   break;
               }               
            }

            case KB_ESC :
            {
                clear_s();
                printf("| Do you really wish to quit the game?\n");
                printf("| Press ENTER to confirm\n");
                printf("| Press ESC to continue playing\n");

                int OPTION = _getch();

                switch (OPTION)
                {
                    case KB_ENTER : 
                    {
                        exit(1);
                    }

                    case KB_ESC :
                    {
                        break;
                    }                    
                }            
            }

            case KB_SPC :
            {
                if (a[*vert - 1][*horz] == MEEPS || a[*vert + 1][*horz] == MEEPS || a[*vert][*horz - 1] == MEEPS || a[*vert][*horz + 1] == MEEPS)
                {
                    meeps_01();
                    break;
                }
            }

            default : break;
        }
    } while (1);
}