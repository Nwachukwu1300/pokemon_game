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


//procedure to simulate the battle happening. (The variables we have not used yet look like errors but theyre not. Code still runs)
void pokemonBattle(string name,int hp, string name2,int hp2, string name3, int hp3, string ai_Name, int ai_Hp, string player_Name, int poke_Balls)
{
    //declare local variables
    int answer;
    int pokemon_choice;

    //declare moves from Pokemon_moves.h
    Electric electric_Move1;
    Electric electric_Move2;
    Electric electric_Move3;
    Fire fire_Move1;
    Fire fire_Move2;
    Fire fire_Move3;
    
    //call the moves (from Pokemon_moves) so that the individual variables are assigned
    electric_Move1.electric_Move1();
    electric_Move2.electric_Move2();
    electric_Move3.electric_Move3();
    fire_Move1.fire_Move1();
    fire_Move2.fire_Move2();
    fire_Move3.fire_Move3();

    cout << player_Name << " is battling Trainer Lucy!" << endl; 

    cout << player_Name << ": " << name << " I choose you!"<< endl;
    cout << name << " has been summoned..." << endl << endl;
    
    //While loop used to make sure the player chooses in between 1 and 3
    while (true)
    {
    cout << "Would you like to "<< endl << "1. ATTACK "<< endl << "2. SWITCH POKEMON" << endl << "3. Catch Pokemon" << endl;
    cout << "Choice: ";
    cin >>  answer;
    
        if (answer != 1 || answer != 2 || answer != 3)
        {
            cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
            
        }
        if (answer == 1 || answer == 2 || answer == 3)
        {
            break;
        }
    }

    //if statement for option 1
    if (answer == 1)
    {
        cout<<"attacking"<< endl;
    }

   //if statement for option 2 (swap pokemon) 
    else if (answer == 2)
    {
        while (true)
        {
            cout << "These are the pokemons you have:" << endl;
            cout << "1. " << name << endl;
            cout << "2. " << name2 << endl;
            cout << "3. " << name3 << endl;
            cout << "Which one would you like to use?" << endl;
            cin >>  pokemon_choice;
            //While loop to make sure player chooses in between 1 and 3
            
                if (pokemon_choice != 1 || pokemon_choice != 2 || pokemon_choice != 3)
                {
                    cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
                }
                
                if (pokemon_choice == 1 || pokemon_choice == 2 || pokemon_choice == 3)
                {
                    break;
                }
        }
    //If statements for pokemon choice
        if (pokemon_choice == 1)
        {
            cout<<"This pokemon is already being used"<<endl;
        }

        else if (pokemon_choice == 2)
        {
        cout << player_Name << ": " << name2 << " I choose you!"<< endl;
        cout << name2 << " has been summoned..." << endl << endl;
        }

        else if (pokemon_choice == 3)
        {
        cout << player_Name << ": " << name3 << " I choose you!"<< endl;
        cout << name3 << " has been summoned..." << endl << endl;
        
        }
    }

    //if statement for option 3
    else if (answer == 3)
    {
        cout<<"Catch pokemon"<<endl;
    }
};

void catchPokemon(bool is_wild_pokemon, int poke_Balls, string enemyType) {//It has all the conditions needed to catch a pokemon it just doesn't add one to the players set yet. I'm working on it though.  
    if (is_wild_pokemon) {
        if (poke_Balls <= 0) {
            cout << "Error: There are no Pokeballs left" << endl;
            return;
        }
        // To reduce the number of Pokeballs
        poke_Balls--;
        // Catch the Pokemon
        cout << "You caught a wild Pokemon!" << endl;
    } else {
        // Pokemon being fought is a trainer's Pokemon
        if (enemyType == "trainer") {
            cout << "Error: Cannot catch a trainer's Pokemon" << endl;
        } else if (enemyType == "pokemon") {
            cout << "Error: Cannot catch another Pokemon, that's not wild" << endl;
        } else {
            cout << "Error: Invalid enemy type" << endl;
        }
    }
}


/*

A WAY WE CAN GET HOW EFFECTIVE A MOVE IS

// https://www.youtube.com/watch?v=GSja2w-HN20 used this to learn about ENUMS//
namespace Move {
    enum Type {water, grass, normal, fighting, electric, dragon, fire, flying};
}
namespace Defender {
    enum Type {water, grass, normal, fighting, electric, dragon, fire, flying};
}
double calculate_effectiveness(Move::Type move_type, Defender::Type defender_type) {
    double effectiveness = 1.0;
    switch(move_type) {
        case Move::water:
            if(defender_type == Defender::grass || Defender::fire) {
                effectiveness = 2.0;
            } else if(defender_type == Defender::normal || defender_type == Defender::water || defender_type == Defender::fighting || defender_type ==Defender::flying) {
                effectiveness = 0.5;
            } else if(defender_type == Defender::dragon || defender_type == Defender::electric) {
                effectiveness = 0.25;
            }
            break;
        case Move::grass:
            if(defender_type == Defender::electric || defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: water|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: fire|| defender_type == Defender::dragon) {
                effectiveness = 0.25;
            }
            break;
        case Move::normal:
            if(defender_type == Defender::fire || defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: dragon|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: electric|| defender_type == Defender::water) {
                effectiveness = 0.25;
            }
            break;
        case Move::fighting:
            if(defender_type == Defender::electric || defender_type == Defender:: grass ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: water|| defender_type == Defender::fighting|| defender_type == Defender::fire){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: flying|| defender_type == Defender::dragon) {
                effectiveness = 0.25;
            }
            break;
        case Move::electric:
        if(defender_type == Defender:: normal|| defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: electric|| defender_type == Defender:: water|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: fire|| defender_type == Defender::dragon) {
                effectiveness = 0.25;
            }
            break;
        case Move::dragon:
            if(defender_type == Defender::electric || defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: electric|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: fire|| defender_type == Defender::water) {
                effectiveness = 0.25;
            }
            break;
        case Move::fire:
            if(defender_type == Defender::water || defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: electric|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: fire|| defender_type == Defender::dragon) {
                effectiveness = 0.25;
            }
            break;
        case Move::flying:
            if(defender_type == Defender::electric || defender_type == Defender::flying ) {
                effectiveness = 2.0;
            } else if(defender_type == Defender:: normal|| defender_type == Defender:: fire|| defender_type == Defender::fighting|| defender_type == Defender::grass){
                effectiveness = 0.5;
            } else if(defender_type == Defender:: dragon|| defender_type == Defender::water) {
                effectiveness = 0.25;
            }
            break;
        default:
            effectiveness = 0.0;
            break;
    }
    return effectiveness;
}

*/
