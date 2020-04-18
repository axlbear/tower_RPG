void setEnemy_Goblin (int *atk, int *hp, int *t_l)
{
    struct 
    {
        int Attack;
        int Health;

    } Goblin;

    Goblin.Attack = 5 + *t_l;
    Goblin.Health = 5 + *t_l;

    *atk = Goblin.Attack;
    *hp = Goblin.Health;
}

void setEnemy_Skeleton (int *atk, int *hp, int *t_l)
{
    struct 
    {
        int Attack;
        int Health;

    } Skeleton;

    Skeleton.Attack = 7 + *t_l;
    Skeleton.Health = 7 + *t_l;

    *atk = Skeleton.Attack;
    *hp = Skeleton.Health;
}

void setEnemy_Slime (int *atk, int *hp, int *t_l)
{
    struct 
    {
        int Attack;
        int Health;

    } Slime;

    Slime.Attack = 5 + *t_l;
    Slime.Health = 10 + *t_l;

    *atk = Slime.Attack;
    *hp = Slime.Health;
}