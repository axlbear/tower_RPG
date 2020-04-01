void meeps_01 (void)
{
    do
    {
    clear_s();
    
    printf("| Hello, Human. My name is Meeps, I'm a gnome.\n");
    printf("| Like yourself, I too have been captured by the Lich's minions, but unlike you, I had it planned.\n");
    printf("| You see, this Tower is full of traps and dangers, and the jail is a way to skip most of it.\n");
    printf("| But anyway, here's a sword. Use it to defend yourself.\n");
    printf("| We don't have much time to talk until the goblins come back, so if you have questions, be quick about it.\n");
    printf("| \n");
    printf("| 1 - \"Thank you, but why are you helping me?\"\n");
    printf("| 2 - \"How did you knew about the jail?\"\n");
    printf("| 3 - \"This sword looks a bit dull. Do you have something better?\"\n");
    printf("| 4 - \"Could you come along with me?\"\n");
    printf("| 5 - (End Conversation)\n");

    char OPTION = _getch();

    switch (OPTION)
        {
            case KB_1 :
            {
                clear_s();

                printf("| We are the only things alive, besides goblins, inside this cursed tower.\n");
                printf("| That would be cruel to leave you to be killed by goblins...\n");
                printf("| or be eaten by goblins...\n");
                printf("| or be raped by goblins...\n");
                printf("| or all options above....by goblins....\n");
                printf("| I hate goblins. SO. MUCH.\n");
                printf("| \n");
                printf("| Press ANY key to continue.\n");
                
                _getch();
                break;
            }

            case KB_2 :
            {
                clear_s();

                printf("| This is not my first time being arrested here.\n");
                printf("| Also is not my first time being arrested.\n");
                printf("| So, I do know how to handle this old locks, and the some places around this Tower.\n");
                printf("| I've been doing this for years...\n");
                printf("| And despite all that, the Tower provides food, water, some treasure...\n");
                printf("| But, no exit.\n");
                printf("| I came for loot, now I just want to get out of here.\n");
                printf("| \n");
                printf("| Press ANY key to continue.\n");

                _getch();
                break;
            }

            case KB_3 :
            {
                clear_s();

                printf("| OH, I'm sorry milord.\n");
                printf("| Let me gather all my finest wares for you.\n");
                printf("| While you wait, would you like a mug of wine, some garlic bread or even a piece of meat?\n");
                printf("| ...\n");
                printf("| Leave your stupidity to the goblins.\n");
                printf("| \n");
                printf("| Press ANY key to continue.\n");

                _getch();
                break;            
            }

            case KB_4 :
            {
                clear_s();

                printf("| Heavens no. You are not the first person I met around this place.\n");
                printf("| And, I'm the only one alive.\n");
                printf("| This means two things:\n");
                printf("| One, I've killed the stupid ones who tried to backstab me.\n");               
                printf("| or Two, most of them were stupid enough and died for traps, or got raped by goblins.\n");
                printf("| I'm not saying you are stupid, but I work better alone. I'm not taking chances.\n");
                printf("| ...no offense.\n");
                printf("| But I don't want to be impaled by spikes or goblins.\n");
                printf("| Anyway, it's better we part ways, I already did a good deed now, by setting you free.\n");
                printf("| \n");
                printf("| Press ANY key to continue.\n");

                _getch();
                break;          
            }

            case KB_5 :
            {
                clear_s();

                printf("| We may stumble upon each other in the future, I guess, so good luck.\n");      
                printf("| \n");
                printf("| Press ANY key to continue.\n");         

                _getch();

                return 0;
                break;
            }
        }
    } while (1);
}