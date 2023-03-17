#include <iostream>
#include <string>
#include <random>
#include "Pokemon.h"
#include "Pokemon_moves.h"
#include "battles.h"
using namespace std;

//class involving the players stats
class Player
{
    public:
    int poke_Balls = 3;
    int pokemon_Count = 0;
    string player_Name = "Ash";
};

int main()
{
    //declare objects in main to be able to use their functions
    Player player;

    //random generator to create a random number
    mt19937 rng(time(0)); // https://stackoverflow.com/questions/57135552/how-can-i-set-range-to-the-random-library
    uniform_int_distribution <int> d(0, 8); // The range of the length of pokemon file (hardcoded must be updated if more pokemon are added)
    

    // the random generator, generating a random number
    int randomInt = d(rng);
    NPC Pokemon1;   //creating the first object
    Pokemon1.pick_Random_Pokemon(randomInt); //calling the method to picka random pokemon to be assigned to the object
    Pokemon1.print_stats(); //just a test to see if works (will delete soon)

    cout << endl;

    //the random generator, generating a random number
    randomInt = d(rng);
    NPC Pokemon2;   //creating the first object
    Pokemon2.pick_Random_Pokemon(randomInt); //calling the method to picka random pokemon to be assigned to the object
    Pokemon2.print_stats(); //just a test to see if works (will delete soon)

    cout << endl;

    // the random generator, generating a random number
    randomInt = d(rng);
    NPC Pokemon3;   //creating the first object
    Pokemon3.pick_Random_Pokemon(randomInt); //calling the method to picka random pokemon to be assigned to the object
    Pokemon3.print_stats(); //just a test to see if works (will delete soon)

    cout << endl;

    
    //pokemon generated for the AI to use 
    randomInt = d(rng);
    NPC Pokemon4;  
    Pokemon4.pick_Random_Pokemon(randomInt); 
    Pokemon4.print_stats();

    cout << endl;

    //pass in all the values needed for the battle to commence (playername and poke_balls are currently local public variables but they wont be local when storylines file is created)
    pokemonBattle(Pokemon1.get_Name(),Pokemon1.get_Hp(),Pokemon2.get_Name(),Pokemon2.get_Hp(), Pokemon3.get_Name(),Pokemon3.get_Hp(),
                  Pokemon4.get_Name(), Pokemon4.get_Hp(),player.player_Name ,player.poke_Balls); 
    
    return 0;
}