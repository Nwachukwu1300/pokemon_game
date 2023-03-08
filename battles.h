#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>

int attack(int pokemon_Hp, int damage_Done)
{
    //set the new_hp to be 0
    int new_Hp = 0;

    //set newHP to be the differnece  between the original hp an the damage done
    new_Hp = pokemon_Hp - damage_Done;

    //if the hp is below 0 then set it to be 0 as a pokemon cannot have less than 0 hp
    if(new_Hp < 0)
    {
        new_Hp = 0;
    }

    //return the new hp after the attack has been done
    return new_Hp;
}


/* A FUNCTION THAT GETS HOW EFFECTIVE A MOVE TYPE IS AGAINST ANOTHER POKEMON TYPE. 
double calculate_effectiveness(string move_type, string defender_type) {
    double effectiveness = 1.0;
    if(move_type == "water") {
        if(defender_type == "grass" {
            effectiveness = 2.0;
        } else if(defender_type == "water") || defender_type == "normal"|| defender_type == "fighting"{
            effectiveness = 0.5;
        } else if(defender_type == "dragon")|| defender_type == "electric" {
            effectiveness = 0.25;
        }
    } else if(move_type == "grass") {
        // similar logic as for water type
    } else if(move_type == "normal") {
        // logic for normal type
    } else if(move_type == "fighting") {
        // logic for fighting type
    } else if(move_type == "electric") {
        // logic for electric type
    } else if(move_type == "dragon") {
        // logic for dragon type
    } else {
        // handle invalid move type
    }
    return effectiveness;
}
*/
