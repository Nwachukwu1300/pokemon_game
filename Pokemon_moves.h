#include <iostream>
using namespace std;
class Moves{
protected:
    string pokemon;
    string move_name;
    string type;
    int damage;
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
class Water : public Moves{
public:
    Water(string aPokemon, string aMove_name, int aDamage): Moves(aPokemon, aMove_name, "Water", aDamage){};
};

class Fighting : public Moves{
public:
    Fighting(string aPokemon, string aMove_name, int aDamage): Moves(aPokemon, aMove_name, "Fighting", aDamage){};
};

class Grass : public Moves{
public:
    Grass(string aPokemon, string aMove_name, int aDamage): Moves(aPokemon, aMove_name, "Grass", aDamage){};
};

void printPokemonMoves(Moves poke)
{
    cout<<poke.pokemon<<"uses"<<poke.move_name<<"that causes"<<poke.damage<<"damage"<<endl;
}

void print_move()
    {   
        cout << "This move is called : " << move_name << endl;
        cout << "And it does " << damage << " damage." << endl;

    }

/*

HOW TO IMPLEMENT THE OBJECTS

Water pulpip("Pulpip", "Water Gun", 40);
Water oshawott("Oshawott", "Hydro Pump", 110);
Water magikarp("Magikarp", "Aqua Tail", 90);
Water eevee("Eevee", "Aqua Tail", 90);
*/
