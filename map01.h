/*
* Y     | X          = MIDDLE
* Y - 1 | X      = UP
* Y - 1 | X + 1  = UPPER RIGHT DIAGONAL
* Y     | X + 1      = RIGHT
* Y + 1 | X + 1  = LOWER RIGHT DIAGONAL
* Y + 1 | X      = DOWN
* Y + 1 | X - 1  = LOWER LEFT DIAGONAL 
* Y     | X - 1      = LEFT
* Y - 1 | X - 1  = UPPER LEFT DIAGONAL
*/

void checkEnemy_Goblin (int a[20][61], int *e_health, int *e_y, int *e_x) // DONE
{
    if (*e_health >= 0)
    {
        a[*e_y][*e_x] = GOBLIN;
    }

    else
    {
        *e_x = 0;
        *e_y = 0;
        a[*e_y][*e_x] = WALL;
    }
}

void combatColision (int a[20][61], int *y, int *x, int *e_y, int *e_x, int *p_health, int *e_health, int *atk, int *e_atk) // DONE
{
    if (*y == *e_y     && *x == *e_x     || // MIDDLE
        *y - 1 == *e_y && *x == *e_x     || // UP
        *y - 1 == *e_y && *x + 1 == *e_x || // UPPER RIGHT DIAGONAL
        *y == *e_y     && *x + 1 == *e_x || // RIGHT
        *y + 1 == *e_y && *x + 1 == *e_x || // LOWER RIGHT DIAGONAL
        *y + 1 == *e_y && *x == *e_x     || // DOWN
        *y + 1 == *e_y && *x - 1 == *e_x || // LOWER LEFT DIAGONAL
        *y == *e_y     && *x - 1 == *e_x || // LEFT
        *y - 1 == *e_y && *x - 1 == *e_x)   // UPPER LEFT DIAGONAL
    {
        *p_health -= *e_atk;
        *e_health -= *atk;
    }
}

void keyPickup (int a[20][61], int *y, int *x, int *k) // DONE
{
    if (a[*y - 1][*x] == KEY) // UP
    {
        clear();
        printf("You got a key!");
        *k += 1;
        a[*y - 1][*x] = FLOOR;
        _getch();
        clear_s();
    }
        
    else if (a[*y][*x + 1] == KEY) // RIGHT
    {
        clear();
        printf("You got a key!");
        *k += 1;
        a[*y][*x + 1] = FLOOR;
        _getch();
        clear_s();
    }
    
    else if (a[*y + 1][*x] == KEY) // DOWN
    {
        clear();
        printf("You got a key!");
        *k += 1;
        a[*y + 1][*x] = FLOOR;
        _getch();
        clear_s();
    }
    
    else if (a[*y][*x - 1] == KEY) // LEFT
    {
        clear();
        printf("You got a key!");
        *k += 1;
        a[*y][*x - 1] = FLOOR;
        _getch();
        clear_s();
    }
}

void checkDoor (int a[20][61], int *y, int *x, int *k) // DONE
{
    if (a[*y - 1][*x] == V_DOOR || a[*y - 1][*x] == H_DOOR) // UP
    {
        if (*k > 0)
        {
            clear();
            printf("This Door is now open");
            *k -= 1;
            a[*y - 1][*x] = FLOOR;
            _getch();
            clear_s();
        }

        else
        {
            clear();
            printf("You don't have a key.");
            _getch();
            clear_s();
        }
    }

    else if (a[*y][*x + 1] == V_DOOR || a[*y][*x + 1] == H_DOOR)     // RIGHT
    {
        if (*k > 0)
        {
            clear();
            printf("This Door is now open");
            *k -= 1;
            a[*y][*x + 1] = FLOOR;
            _getch();
            clear_s();
        }

        else
        {
            clear();
            printf("You don't have a key.");
            _getch();
            clear_s();
        }
    }

    else if (a[*y + 1][*x] == V_DOOR || a[*y + 1][*x] == H_DOOR)      // DOWN
    {
        if (*k > 0)
        {
            clear();
            printf("This Door is now open");
            *k -= 1;
            a[*y + 1][*x] = FLOOR;
            _getch();
            clear_s();
        }

        else
        {
            clear();
            printf("You don't have a key.");
            _getch();
            clear_s();
        }
    }

    else if (a[*y][*x - 1] == V_DOOR || a[*y][*x - 1] == H_DOOR)     // LEFT
    {
        if (*k > 0)
        {
            clear();
            printf("This Door is now open");
            *k -= 1;
            a[*y][*x - 1] = FLOOR;
            _getch();
            clear_s();
        }

        else
        {
            clear();
            printf("You don't have a key.");
            _getch();
            clear_s();
        }        
    }
}

void leverPull (int a[20][61], int *y, int *x)  // DONE
{
    //map01[16][11] = LEVER_OFF;
    //map01[14][32] = LEVER_OFF;
    //map01[14][45] = LEVER_OFF;
    //map01[3][16] = BARRIER;
    //map01[13][47] = BARRIER;
    //map01[4][52] = BARRIER;

    if (a[*y - 1][*x] == LEVER_OFF) // UP
    {
        if (*y - 1 == 16 && *x == 11)
        {
            a[16][11] = LEVER_ON;
            a[3][16] = FLOOR;

        }
        else if (*y - 1 == 14 && *x == 32)
        {
            a[14][32] = LEVER_ON;
            a[13][47] = FLOOR;
        }
        else if (*y - 1 == 14 && *x == 45)
        {
            a[14][45] = LEVER_ON;
            a[4][52] = FLOOR;
        }

        clear();
        printf("You pulled a lever. A barrier has been lifted.");
        _getch();
        clear_s();
    }
}

void enemyMovement (int a[20][61], int *y, int *x)  // DONE
{
    switch (rand() % 4)
    {
        case 0 :
        {
            if (a[*y - 1][*x] == FLOOR)
            {
                a[*y][*x] = FLOOR;
                *y -= 1;
                break;
            }

            else
            {
                break;
            }
        }

        case 1 :
        {
            if (a[*y + 1][*x] == FLOOR)
            {
                a[*y][*x] = FLOOR;
                *y += 1;
                break;
            }

            else
            {
                break;
            }
        }

        case 2 :
        {
            if (a[*y][*x - 1] == FLOOR)
            {
                a[*y][*x] = FLOOR;
                *x -= 1;
                break;
            }

            else
            {
                break;
            }
        }

        case 3 :
        {
            if (a[*y][*x + 1] == FLOOR)
            {
                a[*y][*x] = FLOOR;
                *x += 1;
                break;
            }

            else
            {
                break;
            }
        }
    }
}

void printMap (int a[20][61])  // DONE
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

void mapCreate01(void)
{
    // MAP
    int map01[20][61] = {{219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,},
	                    {219,178,178,178,178,178,219,178,178,178,178,178,178,178,178,178,219,178,178,178,178,178,178,219,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,219,178,178,178,178,178,178,178,178,178,219,178,178,219,178,178,178,178,178,178,178,219,},
        	            {219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,178,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,219,177,177,219,176,176,176,176,176,176,176,219,},
                        {219,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,219,219,219,219,219,219,219,219,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,178,176,176,176,176,176,176,176,219,},
                        {219,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,219,176,176,178,178,178,178,178,178,178,178,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,219,219,219,219,219,219,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,219,219,219,219,219,219,219,219,219,176,219,},
                        {219,178,178,178,178,178,219,176,176,176,219,176,176,176,176,176,219,219,219,176,219,219,219,219,219,219,219,219,219,219,219,219,219,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,178,178,178,178,178,178,178,178,178,176,219,},
                        {219,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,219,178,178,176,178,178,178,178,178,178,178,178,178,178,178,219,178,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,176,176,176,176,176,178,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,219,176,176,176,176,219,176,176,219,},
                        {219,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,219,176,176,176,176,176,176,176,176,219,176,176,219,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,178,176,176,176,176,178,176,176,219,},
                        {219,219,219,219,219,219,219,176,176,176,219,176,176,176,176,176,219,176,176,178,176,176,176,176,176,176,176,176,178,176,176,178,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,178,178,178,178,178,219,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,219,219,219,219,176,219,219,219,219,176,219,219,219,219,219,219,219,176,176,219,176,176,176,176,219,176,176,219,},
                        {219,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,178,178,178,178,178,176,178,178,178,178,176,178,219,178,178,178,178,219,176,176,178,176,176,176,176,178,176,176,219,},
                        {219,219,219,219,219,219,219,176,176,176,219,219,219,219,219,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,178,178,178,178,178,219,176,176,176,219,178,178,178,178,176,219,176,176,219,176,176,176,176,176,176,176,176,219,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,219,219,176,219,219,219,219,219,219,219,219,219,},
                        {219,176,176,176,176,176,178,176,176,176,219,176,176,176,176,176,219,176,176,178,176,176,176,176,176,176,176,176,178,176,176,219,176,176,176,176,176,176,176,219,176,176,176,176,219,176,176,176,176,178,178,176,178,178,178,178,178,178,178,178,219,},
                        {219,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,},
                        {219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,}};

    map01[13][47] = FLOOR;
    map01[14][47] = FLOOR;   
    map01[16][39] = V_DOOR;
    map01[3][6] = V_DOOR;
    map01[13][6] = V_DOOR;
    map01[16][51] = H_DOOR;
    map01[6][19] = H_DOOR;
    map01[3][2] = WEAPON;
    map01[3][16] = BARRIER;
    map01[13][47] = BARRIER;
    map01[4][52] = BARRIER;
    map01[16][11] = LEVER_OFF;
    map01[14][32] = LEVER_OFF;
    map01[14][45] = LEVER_OFF;
    map01[7][1] = KEY;
    map01[18][17] = KEY;
    map01[2][38] = KEY;
    map01[18][59] = KEY;

    // POSITIONS

    int vertical = 17, horizontal = 2; // Start Position of the Player

    int enemy_vertical_01 = 10, enemy_horizontal_01 = 8;  // Enemy Position 01
    int enemy_health_01 = 2;
    int enemy_attack_01 = 1;
    
    int enemy_vertical_02 = 10, enemy_horizontal_02 = 13; // Enemy Position 02
    int enemy_health_02 = 2;
    int enemy_attack_02 = 1;
    
    int enemy_vertical_03 = 13, enemy_horizontal_03 = 23; // Enemy Position 03
    int enemy_health_03 = 2;
    int enemy_attack_03 = 1;
    
    int enemy_vertical_04 = 7, enemy_horizontal_04 = 36;  // Enemy Position 04
    int enemy_health_04 = 2;
    int enemy_attack_04 = 1;
    
    int enemy_vertical_05 = 5, enemy_horizontal_05 = 42;  // Enemy Position 05
    int enemy_health_05 = 2;
    int enemy_attack_05 = 1;
    
    int enemy_vertical_06 = 11, enemy_horizontal_06 = 55; // Enemy Position 06
    int enemy_health_06 = 2;
    int enemy_attack_06 = 1;
    
    // VARIABLES

    int key = 0;
    int health = 100;
    int attack = 1;
    int tower_level = 1;

    do
    {
        if (health <= 0)
        {
            clear_s();
            printf("| GAME OVER");
            _getch();
            exit(1);
        }

        map01[vertical][horizontal] = PLAYER;

        checkEnemy_Goblin(map01, &enemy_health_01, &enemy_vertical_01, &enemy_horizontal_01);
        Sleep(1);
        checkEnemy_Goblin(map01, &enemy_health_02, &enemy_vertical_02, &enemy_horizontal_02);
        Sleep(1);
        checkEnemy_Goblin(map01, &enemy_health_03, &enemy_vertical_03, &enemy_horizontal_03);
        Sleep(1);
        checkEnemy_Goblin(map01, &enemy_health_04, &enemy_vertical_04, &enemy_horizontal_04);
        Sleep(1);
        checkEnemy_Goblin(map01, &enemy_health_05, &enemy_vertical_05, &enemy_horizontal_05);
        Sleep(1);
        checkEnemy_Goblin(map01, &enemy_health_06, &enemy_vertical_06, &enemy_horizontal_06);
        Sleep(1);

        // PRINT MAP

        printMap(map01);

        printf("| HEALTH: %d \n| ATK: %d \n| TOWER LEVEL: %d \n| KEYS: %d \n", health, attack, tower_level, key);
        printf("| Press TAB for the Inventory\n");

        // ENEMY MOVEMENT

        enemyMovement(map01, &enemy_vertical_01, &enemy_horizontal_01);
        Sleep(1);
        enemyMovement(map01, &enemy_vertical_02, &enemy_horizontal_02);
        Sleep(1);
        enemyMovement(map01, &enemy_vertical_03, &enemy_horizontal_03);
        Sleep(1);
        enemyMovement(map01, &enemy_vertical_04, &enemy_horizontal_04);
        Sleep(1);
        enemyMovement(map01, &enemy_vertical_05, &enemy_horizontal_05);
        Sleep(1);
        enemyMovement(map01, &enemy_vertical_06, &enemy_horizontal_06);
        Sleep(1);

        // PLAYER MOVEMENT

        int KB_INPUT = _getch();

        switch(KB_INPUT)
        {
            case KB_UP : 
            {
               if (map01[vertical - 1][horizontal] == FLOOR)
               {
                   map01[vertical][horizontal] = FLOOR;
                   vertical -= 1;
                   break;
               }

               else
               {
                    break;
               }
            }

            case KB_DW : 
            {
               if (map01[vertical + 1][horizontal] == FLOOR)
               {
                   map01[vertical][horizontal] = FLOOR;
                   vertical += 1;
                   break;
               }

               else
               {
                    break;
               }             
            }

            case KB_LF : 
            {
               if (map01[vertical][horizontal - 1] == FLOOR)
               {
                   map01[vertical][horizontal] = FLOOR;
                   horizontal -= 1;
                   break;
               }

               else
               {
                    break;
               }               
            }

            case KB_RG : 
            {
               if (map01[vertical][horizontal + 1] == FLOOR)
               {
                   map01[vertical][horizontal] = FLOOR;
                   horizontal += 1;
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
                keyPickup(map01, &vertical, &horizontal, &key);
                checkDoor(map01, &vertical, &horizontal, &key);
                leverPull(map01, &vertical, &horizontal);
                break;
            }

            case KB_TAB :
            {
                break;
            }

            default : break;
        }

        combatColision(map01, &vertical, &horizontal, &enemy_vertical_01, &enemy_horizontal_01, &health, &enemy_health_01, &attack, &enemy_attack_01);
        Sleep(1);
        combatColision(map01, &vertical, &horizontal, &enemy_vertical_02, &enemy_horizontal_02, &health, &enemy_health_02, &attack, &enemy_attack_02);
        Sleep(1);
        combatColision(map01, &vertical, &horizontal, &enemy_vertical_03, &enemy_horizontal_03, &health, &enemy_health_03, &attack, &enemy_attack_03);
        Sleep(1);
        combatColision(map01, &vertical, &horizontal, &enemy_vertical_04, &enemy_horizontal_04, &health, &enemy_health_04, &attack, &enemy_attack_04);
        Sleep(1);
        combatColision(map01, &vertical, &horizontal, &enemy_vertical_05, &enemy_horizontal_05, &health, &enemy_health_05, &attack, &enemy_attack_05);
        Sleep(1);
        combatColision(map01, &vertical, &horizontal, &enemy_vertical_06, &enemy_horizontal_06, &health, &enemy_health_06, &attack, &enemy_attack_06);
        Sleep(1);

        Sleep(20);

    } while (1);
}