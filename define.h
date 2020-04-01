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
#define TRAP 177
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
#define GOBLIN 190
#define PLAYER 64
#define MEEPS 216
#define QUEST_ITEM 207

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

