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
#define TABLE 177
#define DOOR 178
#define V_WALL 186
#define H_WALL 205
#define U_L_CORNER 201
#define U_R_CORNER 187
#define L_L_CORNER 200
#define L_R_CORNER 188
#define V_WALL_2 196
#define H_WALL_2 179
#define U_L_CORNER_2 218
#define U_R_CORNER_2 191
#define L_L_CORNER_2 192
#define L_R_CORNER_2 217
#define L_DOOR_TRAK 180
#define R_DOOR_TRAK 195
#define U_DOOR_TRAK 193
#define D_DOOR_TRAK 194
#define WEAPON 159
#define GOBLIN 190
#define PLAYER 64
#define MEEPS 216

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

