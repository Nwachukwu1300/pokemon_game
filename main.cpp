#include <iostream>
#include <string>
#include <random>
#include "Pokemon.h"
#include "Pokemon_moves.h"
using namespace std;

//class involving the players stats
class Player
{
    public:
    int poke_Balls = 0;
    int pokemon_Count = 0;
    string player_Name = "";
};

int main()
{

    //random generator to create a random number
    mt19937 rng(time(0)); // https://stackoverflow.com/questions/57135552/how-can-i-set-range-to-the-random-library
    uniform_int_distribution d(0, 6); // The range of the length of pokemon file (hardcoded must be updated if more pokemon are added)
    
    //declare objects in main to be able to use their functions
    Player player;

    // the random generator, generating a random number
    int randomInt = d(rng);
    NPC Pokemon1;   //creating the first object
    Pokemon1.pick_Random_Pokemon(randomInt); //calling the method to picka random pokemon to be assigned to the object
    Pokemon1.print_stats(); //just a test to see if works (will delete soon)

    randomInt = d(rng);
    NPC Pokemon2;
    Pokemon2.pick_Random_Pokemon(randomInt);
    Pokemon2.print_stats();

    randomInt = d(rng);
    NPC Pokemon3;
    Pokemon3.pick_Random_Pokemon(randomInt);
    Pokemon3.print_stats();

    randomInt = d(rng);
    NPC Pokemon4;
    Pokemon4.pick_Random_Pokemon(randomInt);
    Pokemon4.print_stats();

    randomInt = d(rng);
    NPC Pokemon5;
    Pokemon5.pick_Random_Pokemon(randomInt);
    Pokemon5.print_stats();

   

   
    





    cout << endl;
    return 0;
}
