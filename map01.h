void printMap (int a[20][41])
{
    clear();

    for (int y=0; y<20; y++)
    {
        for (int x=0; x<41; x++)
        {
            printf("%c", a[y][x]);
        }
        printf("\n");
    }
}

void mapCreate01(void)
{
    int vertical, horizontal; // Start Position of the Player
    int *vert = &vertical;
    int *horz = &horizontal;

    int enemy_vertical_01, enemy_horizontal_01; // Enemy Position 01
    int *e_vert_01 = &enemy_vertical_01;
    int *e_horz_01 = &enemy_horizontal_01;

    int enemy_vertical_02, enemy_horizontal_02; // Enemy Position 02
    int *e_vert_02 = &enemy_vertical_02;
    int *e_horz_02 = &enemy_horizontal_02;

    int enemy_vertical_03, enemy_horizontal_03; // Enemy Position 03
    int *e_vert_03 = &enemy_vertical_03;
    int *e_horz_03 = &enemy_horizontal_03;

    int enemy_vertical_04, enemy_horizontal_04; // Enemy Position 04
    int *e_vert_04 = &enemy_vertical_04;
    int *e_horz_04 = &enemy_horizontal_04;

    int enemy_vertical_05, enemy_horizontal_05; // Enemy Position 05
    int *e_vert_05 = &enemy_vertical_05;
    int *e_horz_05 = &enemy_horizontal_05;

    int enemy_vertical_06, enemy_horizontal_06; // Enemy Position 06
    int *e_vert_06 = &enemy_vertical_06;
    int *e_horz_06 = &enemy_horizontal_06;

    int enemy_vertical_07, enemy_horizontal_07; // Enemy Position 07
    int *e_vert_07 = &enemy_vertical_07;
    int *e_horz_07 = &enemy_horizontal_07;

    int enemy_vertical_08, enemy_horizontal_08; // Enemy Position 08
    int *e_vert_08 = &enemy_vertical_08;
    int *e_horz_08 = &enemy_horizontal_08;

    int enemy_vertical_09, enemy_horizontal_09; // Enemy Position 09
    int *e_vert_09 = &enemy_vertical_09;
    int *e_horz_09 = &enemy_horizontal_09;

    int enemy_vertical_10, enemy_horizontal_10; // Enemy Position 10
    int *e_vert_10 = &enemy_vertical_10;
    int *e_horz_10 = &enemy_horizontal_10;

    *vert = 17;
    *horz = 2;

    *e_vert_01 = 8;
    *e_horz_01 = 8;

    *e_vert_02 = 2;
    *e_horz_02 = 11;

    *e_vert_03 = 3;
    *e_horz_03 = 21;

    *e_vert_04 = 16;
    *e_horz_04 = 12;

    *e_vert_05 = 10;
    *e_horz_05 = 33;

    *e_vert_06 = '\0';
    *e_horz_06 = '\0';

    *e_vert_07 = '\0';
    *e_horz_07 = '\0';

    *e_vert_08 = '\0';
    *e_horz_08 = '\0';

    *e_vert_09 = '\0';
    *e_horz_09 = '\0';

    *e_vert_10 = '\0';
    *e_horz_10 = '\0';

    // MAP
    int map01[20][41] = {{201,205,205,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,205,205,203,205,205,205,203,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,187,},
                        {186,178,178,178,178,178,202,178,178,178,202,178,178,178,186,178,178,178,178,178,202,178,178,178,186,178,178,178,178,178,178,178,186,178,178,178,178,178,178,178,186,},
                        {186,176,176,159,176,176,219,176,176,176,176,176,176,176,186,176,176,176,176,176,219,176,176,176,186,176,176,176,176,176,176,176,186,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,203,176,176,176,203,176,176,176,186,176,176,176,176,176,203,176,176,176,186,176,176,176,176,176,176,176,186,176,176,176,176,176,176,176,186,},
                        {204,205,205,205,205,205,185,176,176,176,186,176,176,176,204,205,205,205,205,205,185,176,176,176,186,176,176,176,176,176,176,176,186,176,176,176,176,176,176,176,186,},
                        {186,178,178,178,178,178,202,176,176,176,186,176,176,176,186,178,178,178,178,178,186,176,176,176,186,176,176,176,176,176,176,176,186,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,176,176,176,176,186,176,176,176,186,176,176,176,176,176,202,176,176,176,204,205,205,185,176,204,205,205,202,205,205,185,176,204,205,205,185,},
                        {186,176,176,176,176,176,203,176,176,176,186,176,176,176,186,176,176,176,176,176,219,176,176,176,186,178,178,178,176,178,178,178,178,178,178,178,176,178,178,178,186,},
                        {204,205,205,205,205,205,185,176,176,176,186,176,176,176,186,176,176,176,176,176,203,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,178,178,178,178,178,202,176,176,176,186,176,176,176,186,176,176,176,176,176,186,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,176,176,176,176,186,176,176,176,204,205,205,205,205,205,185,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,207,176,176,176,176,203,176,176,176,186,176,176,176,186,178,178,178,178,178,186,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,186,176,176,176,186,176,176,176,186,170,176,176,176,176,186,176,176,176,204,205,205,205,187,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {204,205,205,205,205,205,185,176,176,176,186,176,176,176,186,176,176,176,176,176,186,176,176,176,186,178,178,178,202,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,178,178,178,178,178,186,176,176,176,186,176,176,176,200,205,185,176,204,205,188,176,176,176,186,177,176,176,219,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,202,176,176,176,186,176,176,176,178,178,178,176,178,178,178,176,176,176,186,177,176,176,203,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {186,176,176,176,176,176,176,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,200,205,205,205,202,205,205,205,205,205,205,205,205,185,176,204,185,},
                        {186,176,176,176,176,176,203,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,178,178,178,178,178,178,178,178,178,178,178,178,178,178,176,178,186,},
                        {186,176,176,176,176,176,186,176,176,176,186,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,186,},
                        {200,205,205,205,205,205,202,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188,}};
    
    // MOVIMENT - COLISION

    do
    {
        map01[*e_vert_01][*e_horz_01] = ENEMY_1;
        map01[*e_vert_02][*e_horz_02] = ENEMY_2;
        map01[*e_vert_03][*e_horz_03] = ENEMY_3;
        map01[*e_vert_04][*e_horz_04] = ENEMY_4;
        map01[*e_vert_05][*e_horz_05] = ENEMY_5;
        map01[*e_vert_06][*e_horz_06] = ENEMY_6;
        map01[*e_vert_07][*e_horz_07] = ENEMY_7;
        map01[*e_vert_08][*e_horz_08] = ENEMY_8;
        map01[*e_vert_09][*e_horz_09] = ENEMY_9;
        map01[*e_vert_10][*e_horz_10] = ENEMY_10;

        map01[*vert][*horz] = PLAYER;
        
        printMap(map01);

        printf("| Use the W, A, S, D to move\n");
        printf("| Press TAB to check the Inventory\n");
        printf("| Use SPACE BAR to interact\n");
        printf("| ESC to Exit\n");

        int KB_INPUT = _getch();
        int ENEMY_INPUT_01 = rand() % 4;
        int ENEMY_INPUT_02 = rand() % 4;
        int ENEMY_INPUT_03 = rand() % 4;
        int ENEMY_INPUT_04 = rand() % 4;
        int ENEMY_INPUT_05 = rand() % 4;
        int ENEMY_INPUT_06 = '\0';//rand() % 4;
        int ENEMY_INPUT_07 = '\0';//rand() % 4;
        int ENEMY_INPUT_08 = '\0';//rand() % 4;
        int ENEMY_INPUT_09 = '\0';//rand() % 4;
        int ENEMY_INPUT_10 = '\0';//rand() % 4;

        //ENEMY

        switch (ENEMY_INPUT_01) // ENEMY 01
        {
            case 0 : 
            {
               if (map01[*e_vert_01 - 1][*e_horz_01] == FLOOR)
               {
                   map01[*e_vert_01][*e_horz_01] = FLOOR;
                   *e_vert_01 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_01 + 1][*e_horz_01] == FLOOR)
               {
                   map01[*e_vert_01][*e_horz_01] = FLOOR;
                   *e_vert_01 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_01][*e_horz_01 - 1] == FLOOR)
               {
                   map01[*e_vert_01][*e_horz_01] = FLOOR;
                   *e_horz_01 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_01][*e_horz_01 + 1] == FLOOR)
               {
                   map01[*e_vert_01][*e_horz_01] = FLOOR;
                   *e_horz_01 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_02) // ENEMY 02
        {
            case 0 : 
            {
               if (map01[*e_vert_02 - 1][*e_horz_02] == FLOOR)
               {
                   map01[*e_vert_02][*e_horz_02] = FLOOR;
                   *e_vert_02 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_02 + 1][*e_horz_02] == FLOOR)
               {
                   map01[*e_vert_02][*e_horz_02] = FLOOR;
                   *e_vert_02 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_02][*e_horz_02 - 1] == FLOOR)
               {
                   map01[*e_vert_02][*e_horz_02] = FLOOR;
                   *e_horz_02 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_02][*e_horz_02 + 1] == FLOOR)
               {
                   map01[*e_vert_02][*e_horz_02] = FLOOR;
                   *e_horz_02 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_03) // ENEMY 03
        {
            case 0 : 
            {
               if (map01[*e_vert_03 - 1][*e_horz_03] == FLOOR)
               {
                   map01[*e_vert_03][*e_horz_03] = FLOOR;
                   *e_vert_03 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_03 + 1][*e_horz_03] == FLOOR)
               {
                   map01[*e_vert_03][*e_horz_03] = FLOOR;
                   *e_vert_03 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_03][*e_horz_03 - 1] == FLOOR)
               {
                   map01[*e_vert_03][*e_horz_03] = FLOOR;
                   *e_horz_03 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_03][*e_horz_03 + 1] == FLOOR)
               {
                   map01[*e_vert_03][*e_horz_03] = FLOOR;
                   *e_horz_03 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_04) // ENEMY 04
        {
            case 0 : 
            {
               if (map01[*e_vert_04 - 1][*e_horz_04] == FLOOR)
               {
                   map01[*e_vert_04][*e_horz_04] = FLOOR;
                   *e_vert_04 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_04 + 1][*e_horz_04] == FLOOR)
               {
                   map01[*e_vert_04][*e_horz_04] = FLOOR;
                   *e_vert_04 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_04][*e_horz_04 - 1] == FLOOR)
               {
                   map01[*e_vert_04][*e_horz_04] = FLOOR;
                   *e_horz_04 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_04][*e_horz_04 + 1] == FLOOR)
               {
                   map01[*e_vert_04][*e_horz_04] = FLOOR;
                   *e_horz_04 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_05) // ENEMY 05
        {
            case 0 : 
            {
               if (map01[*e_vert_05 - 1][*e_horz_05] == FLOOR)
               {
                   map01[*e_vert_05][*e_horz_05] = FLOOR;
                   *e_vert_05 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_05 + 1][*e_horz_05] == FLOOR)
               {
                   map01[*e_vert_05][*e_horz_05] = FLOOR;
                   *e_vert_05 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_05][*e_horz_05 - 1] == FLOOR)
               {
                   map01[*e_vert_05][*e_horz_05] = FLOOR;
                   *e_horz_05 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_05][*e_horz_05 + 1] == FLOOR)
               {
                   map01[*e_vert_05][*e_horz_05] = FLOOR;
                   *e_horz_05 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_06) // ENEMY 06
        {
            case 0 : 
            {
               if (map01[*e_vert_06 - 1][*e_horz_06] == FLOOR)
               {
                   map01[*e_vert_06][*e_horz_06] = FLOOR;
                   *e_vert_06 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_06 + 1][*e_horz_06] == FLOOR)
               {
                   map01[*e_vert_06][*e_horz_06] = FLOOR;
                   *e_vert_06 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_06][*e_horz_06 - 1] == FLOOR)
               {
                   map01[*e_vert_06][*e_horz_06] = FLOOR;
                   *e_horz_06 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_06][*e_horz_06 + 1] == FLOOR)
               {
                   map01[*e_vert_06][*e_horz_06] = FLOOR;
                   *e_horz_06 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_07) // ENEMY 07
        {
            case 0 : 
            {
               if (map01[*e_vert_07 - 1][*e_horz_07] == FLOOR)
               {
                   map01[*e_vert_07][*e_horz_07] = FLOOR;
                   *e_vert_07 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_07 + 1][*e_horz_07] == FLOOR)
               {
                   map01[*e_vert_07][*e_horz_07] = FLOOR;
                   *e_vert_07 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_07][*e_horz_07 - 1] == FLOOR)
               {
                   map01[*e_vert_07][*e_horz_07] = FLOOR;
                   *e_horz_07 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_07][*e_horz_07 + 1] == FLOOR)
               {
                   map01[*e_vert_07][*e_horz_07] = FLOOR;
                   *e_horz_07 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_08) // ENEMY 08
        {
            case 0 : 
            {
               if (map01[*e_vert_08 - 1][*e_horz_08] == FLOOR)
               {
                   map01[*e_vert_08][*e_horz_08] = FLOOR;
                   *e_vert_08 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_08 + 1][*e_horz_08] == FLOOR)
               {
                   map01[*e_vert_08][*e_horz_08] = FLOOR;
                   *e_vert_08 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_08][*e_horz_08 - 1] == FLOOR)
               {
                   map01[*e_vert_08][*e_horz_08] = FLOOR;
                   *e_horz_08 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_08][*e_horz_08 + 1] == FLOOR)
               {
                   map01[*e_vert_08][*e_horz_08] = FLOOR;
                   *e_horz_08 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_09) // ENEMY 09
        {
            case 0 : 
            {
               if (map01[*e_vert_09 - 1][*e_horz_09] == FLOOR)
               {
                   map01[*e_vert_09][*e_horz_09] = FLOOR;
                   *e_vert_09 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_09 + 1][*e_horz_09] == FLOOR)
               {
                   map01[*e_vert_09][*e_horz_09] = FLOOR;
                   *e_vert_09 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_09][*e_horz_09 - 1] == FLOOR)
               {
                   map01[*e_vert_09][*e_horz_09] = FLOOR;
                   *e_horz_09 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_09][*e_horz_09 + 1] == FLOOR)
               {
                   map01[*e_vert_09][*e_horz_09] = FLOOR;
                   *e_horz_09 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        switch (ENEMY_INPUT_10) // ENEMY 10
        {
            case 0 : 
            {
               if (map01[*e_vert_10 - 1][*e_horz_10] == FLOOR)
               {
                   map01[*e_vert_10][*e_horz_10] = FLOOR;
                   *e_vert_10 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 1 : 
            {                
               if (map01[*e_vert_10 + 1][*e_horz_10] == FLOOR)
               {
                   map01[*e_vert_10][*e_horz_10] = FLOOR;
                   *e_vert_10 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 2 : 
            {                
               if (map01[*e_vert_10][*e_horz_10 - 1] == FLOOR)
               {
                   map01[*e_vert_10][*e_horz_10] = FLOOR;
                   *e_horz_10 -= 1;
                   break;
               }

               else
               {
                   break;
               }
            }

            case 3 : 
            {                
               if (map01[*e_vert_10][*e_horz_10 + 1] == FLOOR)
               {
                   map01[*e_vert_10][*e_horz_10] = FLOOR;
                   *e_horz_10 += 1;
                   break;
               }

               else
               {
                   break;
               }
            }      
        }

        // PLAYER

        switch(KB_INPUT)
        {
            case KB_UP : 
            {
               if (map01[*vert - 1][*horz] == FLOOR)
               {
                   map01[*vert][*horz] = FLOOR;
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
               if (map01[*vert + 1][*horz] == FLOOR)
               {
                   map01[*vert][*horz] = FLOOR;
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
               if (map01[*vert][*horz - 1] == FLOOR)
               {
                   map01[*vert][*horz] = FLOOR;
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
               if (map01[*vert][*horz + 1] == FLOOR)
               {
                   map01[*vert][*horz] = FLOOR;
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
                if (map01[*vert - 1][*horz] == MEEPS || map01[*vert + 1][*horz] == MEEPS || map01[*vert][*horz - 1] == MEEPS || map01[*vert][*horz + 1] == MEEPS)
                {
                    meeps_01();
                    map01[16][5] = FLOOR;
                    break;
                }
            }

            default : break;
        }
    } while (1);

    Sleep(250);
}