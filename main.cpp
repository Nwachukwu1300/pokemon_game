#include <iostream>
#include <string>
#include <random>
#include "Pokemon.h"
#include "Pokemon_moves.h"
using namespace std;

class Player
{
    public:
    int poke_Balls = 0;
    int pokemon_Count = 0;
    string player_Name = "";
};

int main()
{

    //random gen
    mt19937 rng(time(0)); // `std::minstd_rand` would also work.
    uniform_int_distribution d(0, 40);
    //declare objects in main to be able to use their functions
    Player player;
    NPC Pokemon1;
    int randomInt = d(rng);
    cout << randomInt << endl;
    NPC Pokemon2;
    randomInt = d(rng);
    cout << randomInt << endl;
    NPC Pokemon3;
    





    cout << endl;

   
   
    
 


    


    return 0;
}
