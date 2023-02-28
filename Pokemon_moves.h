#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <random>
#include <algorithm>
using namespace std;
class Moves{//A Moves superclass that the different types should inherit from. 
protected:// protected attributes so only the child classes can have access to them
    string pokemon;
    string move_name;
    string type;
    int damage;//Below are the Moves initialiser and constructor respectively. 
    Moves(){
        pokemon = "no pokemon";
        move_name = "no move";
        type = "no type";
        damage = 0;
    }
    Moves(string aPokemon, string aMove_name, string aType, int aDamage){
        pokemon = aPokemon;
        move_name = aMove_name;
        type = aType;
        damage = aDamage;
    }
};
class Water : public Moves{// Water class being a child class to the Moves class
public:
    Water(string aPokemon, string aMove_name, int aDamage): Moves(aPokemon, aMove_name, "Water", aDamage){};
};

void printPokemonMoves(const Moves& poke)//take a const Moves& reference instead of a Moves object to avoid unnecessary copying, and prints pokemon moves. 
{
    cout<<poke.pokemon<<"uses"<<poke.move_name<<"that causes"<<poke.damage<<"damage"<<endl;
}

void print_Status()
    {   
        cout << "This move is called : " << move_name << endl;
        cout << "And it does " << damage << " damage." << endl;

    }


