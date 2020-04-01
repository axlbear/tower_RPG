void printMap (int a[20][61])
{
    clear();

    for (int y=0; y<20; y++)
    {
        for (int x=0; x<61; x++)
        {
            printf("%c", a[y][x]);
        }
        printf("\n");
    }
}

void mapCreate01(int a[20][61])
{
    int vertical, horizontal; // Start Position of the Player
    int *vert = &vertical;
    int *horz = &horizontal;

    int enemy_vertical, enemy_horizontal;
    int *e_vert = &enemy_vertical;
    int *e_horz = &enemy_horizontal;

    *vert = 17;
    *horz = 2;

    *e_vert = 8;
    *e_horz = 8;

    int meeps_event_01;

    // MAP

    for (int y=0; y<20; y++) //preenche com 176 todas as posições
    {
        for (int x=0; x<60; x++)
        {
            a[y][x] = FLOOR;
        }
    }

    a[0][0] = U_L_CORNER;   
    a[0][60] = U_R_CORNER; 
    a[19][0] = L_L_CORNER;  
    a[19][60] = L_R_CORNER; 

    for (int y=1; y<19; y++)
    {
        a[y][0] = V_WALL;
        a[y][60] = V_WALL;
    }

    for (int x=1; x<60; x++)
    {
        a[0][x] = H_WALL;
        a[19][x] = H_WALL;
    }

    a[0][6] = D_DOOR_TRAK;
    a[0][10] = D_DOOR_TRAK;
    a[0][14] = D_DOOR_TRAK;
    a[0][20] = D_DOOR_TRAK;
    
    a[1][1] = SHADOW;
    a[1][2] = SHADOW;
    a[1][3] = SHADOW;
    a[1][4] = SHADOW;
    a[1][5] = SHADOW;
    a[1][6] = U_DOOR_TRAK;
    a[1][7] = SHADOW;
    a[1][8] = SHADOW;
    a[1][9] = SHADOW;
    a[1][10] = U_DOOR_TRAK;
    a[1][11] = SHADOW;
    a[1][12] = SHADOW;
    a[1][13] = SHADOW;
    a[1][14] = V_WALL;
    a[1][15] = SHADOW;
    a[1][16] = SHADOW;
    a[1][17] = SHADOW;
    a[1][18] = SHADOW;
    a[1][19] = SHADOW;
    a[1][20] = U_DOOR_TRAK;
    a[1][21] = SHADOW;
    a[1][22] = SHADOW;
    a[1][23] = SHADOW;
    
    a[2][14] = V_WALL;
    a[2][20] = DOOR;

    a[3][6] = D_DOOR_TRAK;
    a[3][10] = D_DOOR_TRAK;
    a[3][14] = V_WALL;
    a[3][20] = D_DOOR_TRAK;

    a[4][0] = R_DOOR_TRAK;
    a[4][1] = H_WALL;
    a[4][2] = H_WALL;
    a[4][3] = H_WALL;
    a[4][4] = H_WALL;
    a[4][5] = H_WALL;
    a[4][6] = L_DOOR_TRAK;
    a[4][10] = V_WALL;
    a[4][14] = R_DOOR_TRAK;
    a[4][15] = H_WALL;
    a[4][16] = H_WALL;
    a[4][17] = H_WALL;
    a[4][18] = H_WALL;
    a[4][19] = H_WALL;
    a[4][20] = L_DOOR_TRAK;

    a[5][1] = SHADOW;
    a[5][2] = SHADOW;
    a[5][3] = SHADOW;
    a[5][4] = SHADOW;
    a[5][5] = SHADOW;
    a[5][6] = U_DOOR_TRAK;
    a[5][10] = V_WALL;
    a[5][14] = V_WALL;
    a[5][15] = SHADOW;
    a[5][16] = SHADOW;
    a[5][17] = SHADOW;
    a[5][18] = SHADOW;
    a[5][19] = SHADOW;
    a[5][20] = V_WALL;

    a[6][10] = V_WALL;
    a[6][14] = V_WALL;
    a[6][20] = U_DOOR_TRAK;
    
    a[7][6] = D_DOOR_TRAK;
    a[7][10] = V_WALL;
    a[7][14] = V_WALL;
    a[7][20] = DOOR;

    a[8][0] = R_DOOR_TRAK;
    a[8][1] = H_WALL;
    a[8][2] = H_WALL;
    a[8][3] = H_WALL;
    a[8][4] = H_WALL;
    a[8][5] = H_WALL;
    a[8][6] = L_DOOR_TRAK;
    a[8][10] = V_WALL;
    a[8][14] = V_WALL;
    a[8][20] = D_DOOR_TRAK;

    a[9][1] = SHADOW;
    a[9][2] = SHADOW;
    a[9][3] = SHADOW;
    a[9][4] = SHADOW;
    a[9][5] = SHADOW;
    a[9][6] = U_DOOR_TRAK;
    a[9][10] = V_WALL;
    a[9][14] = V_WALL;
    a[9][20] = V_WALL;

    a[10][10] = V_WALL;
    a[10][14] = L_DOOR_TRAK;
    a[10][15] = H_WALL;
    a[10][16] = H_WALL;
    a[10][17] = H_WALL;
    a[10][18] = H_WALL;
    a[10][19] = H_WALL;
    a[10][20] = L_DOOR_TRAK;

    a[11][6] = D_DOOR_TRAK;
    a[11][10] = V_WALL;
    a[11][14] = V_WALL;
    a[11][15] = SHADOW;
    a[11][16] = SHADOW;
    a[11][17] = SHADOW;
    a[11][18] = SHADOW;
    a[11][19] = SHADOW;
    a[11][20] = V_WALL;

    a[12][6] = V_WALL;
    a[12][10] = V_WALL;
    a[12][14] = V_WALL;
    a[12][20] = V_WALL;

    a[13][0] = R_DOOR_TRAK;
    a[13][1] = H_WALL;
    a[13][2] = H_WALL;
    a[13][3] = H_WALL;
    a[13][4] = H_WALL;
    a[13][5] = H_WALL;
    a[13][6] = L_DOOR_TRAK;
    a[13][10] = V_WALL;
    a[13][14] = V_WALL;
    a[13][20] = V_WALL;

    a[14][1] = SHADOW;
    a[14][2] = SHADOW;
    a[14][3] = SHADOW;
    a[14][4] = SHADOW;
    a[14][5] = SHADOW;
    a[14][6] = V_WALL;
    a[14][10] = V_WALL;
    a[14][14] = L_L_CORNER;
    a[14][15] = H_WALL;
    a[14][16] = L_DOOR_TRAK;
    a[14][18] = R_DOOR_TRAK;
    a[14][19] = H_WALL;
    a[14][20] = L_R_CORNER;

    a[15][6] = U_DOOR_TRAK;
    a[15][10] = V_WALL;
    a[15][14] = SHADOW;
    a[15][15] = SHADOW;
    a[15][16] = SHADOW;
    a[15][18] = SHADOW;
    a[15][19] = SHADOW;
    a[15][20] = SHADOW;

    a[16][10] = V_WALL;

    a[17][6] = D_DOOR_TRAK;
    a[17][10] = V_WALL;

    a[18][6] = V_WALL;
    a[18][10] = V_WALL;

    a[19][6] = U_DOOR_TRAK;
    a[19][10] = U_DOOR_TRAK;

    a[16][5] = MEEPS;
    a[2][3] = WEAPON;
    a[11][1] = QUEST_ITEM;

    a[*e_vert][*e_horz] = GOBLIN;
    a[*vert][*horz] = PLAYER;


    // MOVIMENT - COLISION

    do
    {
        a[*e_vert][*e_horz] = GOBLIN;
        a[*vert][*horz] = PLAYER;
        
        printMap(a);

        printf("| Use the W, A, S, D to move\n");
        printf("| Use SPACE BAR to interact\n");
        printf("| ESC to Exit\n");

        int KB_INPUT = _getch();
        int ENEMY_INPUT = rand() % 4;

        switch (ENEMY_INPUT)
        {
            case 0 : 
            {
               if (a[*e_vert - 1][*e_horz] == FLOOR)
               {
                   a[*e_vert][*e_horz] = FLOOR;
                   *e_vert -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (a[*e_vert + 1][*e_horz] == FLOOR)
               {
                   a[*e_vert][*e_horz] = FLOOR;
                   *e_vert += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (a[*e_vert][*e_horz - 1] == FLOOR)
               {
                   a[*e_vert][*e_horz] = FLOOR;
                   *e_horz -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (a[*e_vert][*e_horz + 1] == FLOOR)
               {
                   a[*e_vert][*e_horz] = FLOOR;
                   *e_horz += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

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
                    a[16][5] = FLOOR;
                    break;
                }
            }

            default : break;
        }
    } while (1);
}