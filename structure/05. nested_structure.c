#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        char name[30];
        int attack;
        int defense;
        int health;
    } pokemon;

    typedef struct legendarypokemon
    {
        pokemon normal;
        int legendarypower;
        char legendaryability[30];
    } legendarypokemon;

    typedef struct godpokemon
    {
        legendarypokemon legend;
        int godpower;
        char godability[30];
    } godpokemon;

    godpokemon arceus;

    arceus.godpower=500;
    strcpy(arceus.godability, "Stops Time");
    arceus.legend.legendarypower=400;
    strcpy(arceus.legend.legendaryability, "Turns into Rock");
    arceus.legend.normal.attack=250;
    arceus.legend.normal.defense=300;
    arceus.legend.normal.health=500;
    strcpy(arceus.legend.normal.name, "ARCEUS");

    printf("Name of the pokemon : %s\n",arceus.legend.normal.name);
    printf("Attack : %d\n",arceus.legend.normal.attack);
    printf("Defense : %d\n",arceus.legend.normal.defense);
    printf("Health : %d\n",arceus.legend.normal.health);
    printf("Legendary Power : %d\n",arceus.legend.legendarypower);
    printf("Legendary Ability : %s\n",arceus.legend.legendaryability);
    printf("God Power : %d\n",arceus.godpower);
    printf("God Ability : %s\n",arceus.godability);

    return 0;
}
