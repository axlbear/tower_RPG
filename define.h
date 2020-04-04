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
#define INNER_WALL 178
#define WALL 219
#define V_DOOR 186
#define H_DOOR 205
#define BARRIER 35
#define WEAPON 159
#define GOBLIN 71
#define SKELETON 75
#define SLIME 83
#define CHEST 220
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