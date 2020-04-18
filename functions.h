#define KB_UP 119
#define KB_DW 115
#define KB_LF 97
#define KB_RG 100
#define KB_ENTER 13
#define KB_SPC 32
#define KB_ESC 27
#define KB_TAB 9
#define KB_1 49
#define KB_2 50
#define KB_3 51
#define KB_4 52
#define KB_5 53

#define DOTS 46
#define PLAYER 64
#define GOBLIN 71
#define SKELETON 75
#define SLIME 83
#define WEAPON 159
#define ARMOUR 203
#define POTION 155
#define KEY 191
#define LORE 220
#define BARRIER 35
#define LEVER_ON 92
#define LEVER_OFF 47
#define WALL 219
#define INNER_WALL 178
#define FLOOR 176
#define V_DOOR 186
#define H_DOOR 205
#define EXIT 177

/*
Y = LINES
X = COLUMNS

[Y - 1] [X]     = UP
[Y - 1] [X + 1] = UPPER RIGHT DIAGONAL
[Y]     [X + 1] = RIGHT
[Y + 1] [X + 1] = LOWER RIGHT DIAGONAL
[Y + 1] [X]     = DOWN
[Y + 1] [X - 1] = LOWER LEFT DIAGONAL
[Y]     [X - 1] = LEFT
[Y - 1] [X - 1] = UPPER LEFT DIAGONAL
*/

void refresh (void) // DONE
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;

    Position.X = 0;
    Position.Y = 0;

    SetConsoleCursorPosition(hOut, Position);
}

void printLogo (int a[14][61]) // DONE
{
    for (int lin = 0; lin < 14; lin++)
    {
        for (int col = 0; col < 61; col++)
        {
            printf("%c", a[lin][col]);
        }
        printf("\n");
    }
}

void credits (void) // NEEDS MORE INFORMATION
{
    refresh();
    printf("| Use W, A, S, D to move.\n");
    printf("| Use the Space Bar to interact with NPCs, Objects, Doors and Levers.\n");
    printf("| Use TAB to see your Inventory.\n");
    _getch();
}

void printMap (int a[20][61]) // DONE
{
    for (int lin = 0; lin < 20; lin++)
    {
        for (int col = 0; col < 61; col++)
        {
            printf("%c", a[lin][col]);
        }
        printf("\n");
    }
}

void collectKey (int a[20][61], int *y, int *x, int *k) // DONE
{
    if (a[*y - 1][*x] == KEY)
    {
        refresh();
        printf("You have found a Key!");
        *k += 1;
        a[*y - 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x + 1] == KEY)
    {
        refresh();
        printf("You have found a Key!");
        *k += 1;
        a[*y][*x + 1] = FLOOR;
        _getch();
    }

    else if (a[*y + 1][*x] == KEY)
    {
        refresh();
        printf("You have found a Key!");
        *k += 1;
        a[*y + 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x - 1] == KEY)
    {
        refresh();
        printf("You have found a Key!");
        *k += 1;
        a[*y][*x - 1] = FLOOR;
        _getch();
    }
}

void openDoor (int a[20][61], int *y, int *x, int *k) // DONE
{
    if (a[*y - 1][*x] == V_DOOR || a[*y - 1][*x] == H_DOOR) // UP
    {
        if (*k > 0)
        {
            refresh();
            printf("This Door is now Open!");
            a[*y - 1][*x] = FLOOR;
            *k -= 1;
            _getch();
        }

        else
        {
            refresh();
            printf("You need a key.");
            _getch();
        }
    }

    else if (a[*y][*x + 1] == V_DOOR || a[*y][*x + 1] == H_DOOR) // RIGHT
    {
        if (*k > 0)
        {
            refresh();
            printf("This Door is now Open!");
            a[*y][*x + 1] = FLOOR;
            *k -= 1;
            _getch();
        }

        else
        {
            refresh();
            printf("You need a key.");
            _getch();
        }
    }

    else if (a[*y + 1][*x] == V_DOOR || a[*y + 1][*x] == H_DOOR) // DOWN
    {
        if (*k > 0)
        {
            refresh();
            printf("This Door is now Open!");
            a[*y + 1][*x] = FLOOR;
            *k -= 1;
            _getch();
        }

        else
        {
            refresh();
            printf("You need a key.");
            _getch();
        }        
    }

    else if (a[*y][*x - 1] == V_DOOR || a[*y][*x - 1] == H_DOOR) // LEFT
    {
        if (*k > 0)
        {
            refresh();
            printf("This Door is now Open!");
            a[*y][*x - 1] = FLOOR;
            *k -= 1;
            _getch();
        }

        else
        {
            refresh();
            printf("You need a key.");
            _getch();
        }       
    }
}

void pull_Lever (int a[20][61], int *y, int *x, int *t_l) // DONE - UPDATE IT WHEN NECESSARY
{
    if (a[*y - 1][*x] == LEVER_ON)
    {
        if (*t_l == 1)
        {
            if (*y - 1 == 16 && *x == 11)
            {
                refresh();
                printf("You pulled a lever. A barrier has been lifted.");
                a[*y - 1][*x] = LEVER_OFF;
                a[3][16] = FLOOR;
                _getch();
            }

            else if (*y - 1 == 14 && *x == 32)
            {
                refresh();
                printf("You pulled a lever. A barrier has been lifted.");
                a[*y - 1][*x] = LEVER_OFF;
                a[13][42] = FLOOR;
                _getch();
            }

            else if (*y - 1 == 17 && *x == 59)
            {
                refresh();
                printf("You pulled a lever. A barrier has been lifted.");
                a[*y - 1][*x] = LEVER_OFF;
                a[5][59] = FLOOR;
                _getch();
            }
        }
    }            
}

void grabPotion (int a[20][61], int *y, int *x, int *p) // DONE
{
    if (a[*y - 1][*x] == POTION) // UP
    {
        refresh();
        printf("You have found a potion.");
        *p += 1;
        a[*y - 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x + 1] == POTION) // RIGHT
    {
        refresh();
        printf("You have found a potion.");
        *p += 1;
        a[*y][*x + 1] = FLOOR;
        _getch();
    }
    else if (a[*y + 1][*x] == POTION) // DOWN
    {
        refresh();
        printf("You have found a potion.");
        *p += 1;
        a[*y + 1][*x] = FLOOR;
        _getch();
    }
    else if (a[*y][*x - 1] == POTION) // LEFT
    {
        refresh();
        printf("You have found a potion.");
        *p += 1;
        a[*y][*x - 1] = FLOOR;
        _getch();
    }    
}

void drinkPotion(int a[20][61], int *y, int *x, int *p, int *hp)
{
    if (*p > 0)
    {
        refresh();
        printf("You have drank a potion. +5 Health");
        *hp += 5;
        *p -= 1;
        _getch();
    }

    else
    {
        refresh();
        printf("You don't have potions to drink.");
        _getch();
    }    
}

void readLore (int a[20][61], int *y, int *x, int *t_l)
{
    if (a[*y - 1][*x] == LORE || a[*y][*x + 1] == LORE || a[*y + 1][*x] == LORE || a[*y][*x - 1] == LORE)
    {
        if (*t_l == 1)
        {
            refresh();
            printf("You have found a page from the Lich's Diary.");
            _getch();
        }
    }
}

void pickWeapon (int a[20][61], int *y, int *x, int *atk)
{
    if (a[*y - 1][*x] == WEAPON)
    {
        refresh();
        printf("You have found a better sword. +2 Attack");
        *atk += 2;
        a[*y - 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x + 1] == WEAPON)
    {        
        refresh();
        printf("You have found a better sword. +2 Attack");
        *atk += 2;
        a[*y][*x + 1] = FLOOR;
        _getch();
    }

    else if (a[*y + 1][*x] == WEAPON)
    {
        refresh();
        printf("You have found a better sword. +2 Attack");
        *atk += 2;
        a[*y + 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x - 1] == WEAPON)
    {
        refresh();
        printf("You have found a better sword. +2 Attack");
        *atk += 2;
        a[*y][*x - 1] = FLOOR;
        _getch();
    }
}

void pickArmour (int a[20][61], int *y, int *x, int *def)
{
    if (a[*y - 1][*x] == ARMOUR)
    {
        refresh();
        printf("You have repaired your armour. +2 Defense");
        *def += 2;
        a[*y - 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x + 1] == ARMOUR)
    {
        refresh();
        printf("You have repaired your armour. +2 Defense");
        *def += 2;
        a[*y][*x + 1] = FLOOR;
        _getch();
    }

    else if (a[*y + 1][*x] == ARMOUR)
    {
        refresh();
        printf("You have repaired your armour. +2 Defense");
        *def += 2;
        a[*y + 1][*x] = FLOOR;
        _getch();
    }

    else if (a[*y][*x - 1] == ARMOUR)
    {
        refresh();
        printf("You have repaired your armour. +2 Defense");
        *def += 2;
        a[*y][*x - 1] = FLOOR;
        _getch();
    }
}

void playerMovement (int a[20][61], int *y, int *x, int *kb) // DONE
{
    switch(*kb)
    {
        case KB_UP :
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

        case KB_RG :
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
        
        case KB_DW :
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
        
        case KB_LF :
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

        case KB_ESC :
        {
            refresh();
            printf("| QUIT? ENTER - YES / ESC - NO");
            int OPTION = _getch();

            switch(OPTION)
            {
                case KB_ENTER : exit(1);
                case KB_ESC : break;
                default : break;
            }
        }

        default : break;
    }
}

void enemyMovement (int a[20][61], int *e_y, int * e_x, int *hp) // DONE
{
    if (*hp > 0)
    {
        switch(rand() % 4)
        {
            case 0 :
            {
                if (a[*e_y - 1][*e_x] == FLOOR)
                {
                    a[*e_y][*e_x] = FLOOR;
                    *e_y -= 1;
                    break;
                }

                else
                {
                    break;
                }            
            }

            case 1 :
            {
                if (a[*e_y][*e_x + 1] == FLOOR)
                {
                    a[*e_y][*e_x] = FLOOR;
                    *e_x += 1;
                    break;
                }

                else
                {
                    break;
                }            
            }

            case 2 :
            {
                if (a[*e_y + 1][*e_x] == FLOOR)
                {
                    a[*e_y][*e_x] = FLOOR;
                    *e_y += 1;
                    break;
                }

                else
                {
                    break;
                }            
            }

            case 3 :
            {
                if (a[*e_y][*e_x - 1] == FLOOR)
                {
                    a[*e_y][*e_x] = FLOOR;
                    *e_x -= 1;
                    break;
                }

                else
                {
                    break;
                }            
            }
        }
    }

    else
    {
        *e_y = 0;
        *e_x = 0;
    }
}

void checkColisionCombat (int a[20][61], int *e_y, int *e_x, int *p_atk, int *p_def, int *e_atk, int *hp, int *e_hp) // DONE
{
    if (a[*e_y - 1][*e_x] == PLAYER ||
        a[*e_y - 1][*e_x + 1] == PLAYER ||
        a[*e_y][*e_x + 1] == PLAYER ||
        a[*e_y + 1][*e_x + 1] == PLAYER ||
        a[*e_y + 1][*e_x] == PLAYER ||
        a[*e_y + 1][*e_x - 1] == PLAYER ||
        a[*e_y][*e_x - 1] == PLAYER ||
        a[*e_y - 1][*e_x - 1] == PLAYER ||
        a[*e_y][*e_x] == PLAYER)
    {
        *e_hp -= *p_atk;

        if (*e_hp > 0)
        {
            *hp -= (*e_atk - *p_def);

            if (*hp < 0)
            {
                refresh();
                printf("You have died.\n");
                _getch();
            }

            else 
            {
                ;
            }
        }

        else
        {            
            refresh();
            printf("You have killed the enemy!\n");
            a[*e_y][*e_x] = FLOOR;
            *e_y = 0;
            *e_x = 0;
            _getch();
        }
    }
}