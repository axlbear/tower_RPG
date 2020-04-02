#define KB_UP 119   //w
#define KB_DW 115   //s
#define KB_LF 97    //a
#define KB_RG 100   //d
#define KB_SPC 32   //Space Bar
#define KB_ENTER 13 //Enter
#define KB_ESC 27   //Esc
#define KB_TAB 9    //TAB
#define KB_1 49     //1
#define KB_2 50     //2
#define KB_3 51     //3
#define KB_4 52     //4
#define KB_5 53     //5
#define FLOOR 176
#define EXIT 177
#define SHADOW 178
#define DOOR 219
#define V_WALL 186
#define H_WALL 205
#define U_L_CORNER 201
#define U_R_CORNER 187
#define L_L_CORNER 200
#define L_R_CORNER 188
#define L_DOOR_TRAK 185
#define R_DOOR_TRAK 204
#define U_DOOR_TRAK 202
#define D_DOOR_TRAK 203
#define CROSS 206
#define WEAPON 159
#define ENEMY_1 132  // GOBLIN
#define ENEMY_2 133  // GOBLIN
#define ENEMY_3 134  // GOBLIN
#define ENEMY_4 142  // GOBLIN
#define ENEMY_5 143  // GOBLIN
#define ENEMY_6 145  // GOBLIN
#define ENEMY_7 146  // GOBLIN
#define ENEMY_8 160  // GOBLIN
#define ENEMY_9 65   // GOBLIN
#define ENEMY_10 131 // GOBLIN
#define ENEMY_11 210 // GHOST
#define ENEMY_12 211 // GHOST
#define ENEMY_13 212 // GHOST
#define ENEMY_14 214 // SKELETON
#define ENEMY_15 215 // SKELETON
#define ENEMY_16 216 // SKELETON
#define ENEMY_17 147 //SLIME 
#define ENEMY_18 148 //SLIME
#define ENEMY_19 149 //SLIME
#define ENEMY_20 190 //FERAL NPC
#define BOSS_1 165
#define BOSS_2 199
#define BOSS_3 209
#define LICH 244
#define PLAYER 64
#define MEEPS 216
#define QUEST_ITEM 207
#define KEY 170
#define RING 208
#define LEVER_OFF 92
#define LEVER_ON 47

void clear (void)
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void clear_s (void)
{
    system("@cls || clear");
}