#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include "Pokemon_moves.h"
#include <fstream> //used for files
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;

class NPC
{
public:
    int pokemon_Hp = 0;
    int counter = 0;
    string Pokemon_Name;
    vector <string> Pokemon_Names;
    vector <string> Electric_type {"Picachu", "Luxray", "Electrabuzz"};
    vector <string> Normal_type{"Mewtwo", "Snorlax", "Jigglypuff", "Pidgeot", "Butterfree", "Eevee"};
    vector <string> Dragon_type{"Charzard", "Infernape", "Dragonite", "Axew"};
    vector <string> Water_type{"Puplip", "Oshawott", "Magikarp"};
    vector <string> Grass_type{"Snivy", "Bulbasaur", "Turtwig"};

    

    //creates the class
    NPC()
    {
        //update the counter so that the vector gets looped though randmly to set a new name for the object
        counter = counter + 1;

        if(counter > 0 )
        {
            load_pokemon();
        }
        
        //create the name of the pokemon object
        pokemon_Hp = 100;
        
        cout<<endl;
    }

    void load_pokemon()
    {
        //opens the file
        std::ifstream myFile ("PokemonNames.txt");


        //checks if the file is open
        if (myFile.is_open())
        {
            do 
            {
                //gets each line of the file and stores it in the vector
                std::getline(myFile, Pokemon_Name);
                Pokemon_Names.emplace_back(Pokemon_Name);


            }while(!myFile.fail());

            //close the file
            myFile.close();
        }
        else
        {
            //print out that the file cannot be found if the file is not loading 
            cout << "Couldn't find file";
        }
    }

    int pick_Random_Pokemon(int randomInt)
    {
        //declare variables
        string temp = "";
    
        //temp stores the random pokemon that is picked from the vector
        temp = Pokemon_Names[randomInt];

        //for loop to remove the names of the pokemon that have already been chosen so there is no repeat (DOES NOT WORK ATM)
        for(int i = 0; i < 8; i++)
        {
             if(temp == Pokemon_Names[i])
             {
                if(i == 0)
                {
                    std::remove(Pokemon_Names.begin(), Pokemon_Names.end(), Pokemon_Names[i]);

                }
            }
            else
            {
                std::remove(Pokemon_Names.begin(), Pokemon_Names.end(), Pokemon_Names[i]);
            }
                
        }

        //the name of the pokemon gets transferred to the public variable
        Pokemon_Name = temp; 

        return randomInt;
        
       
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Setters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

string set_Name(string name)
{
    //set the public variable pokemon_name to the name just passed in
    Pokemon_Name = name;

    return Pokemon_Name;
}

int set_Hp(int HP)
{
    //set the public variable pokemon_hp to the hp just passed in
    pokemon_Hp = HP;

    return pokemon_Hp;
}

void set_Heal_Reset()
{
    //resets the pokemons hp to 100 to be used after a battle to "heal" the pokemon
    pokemon_Hp = 100;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    string get_Name()
    {
        //return the pokemon name on request
        return Pokemon_Name;
    }

    int get_Hp()
    {
        //retunn the pokemon hp on request
        return pokemon_Hp;
    }
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void pokemon_type()
{
    if (count(Electric_type.begin(), Electric_type.end(), Pokemon_Name))
    {
        cout << "Pokemon is electric"<< endl;
        
        
    }
    else if (count(Normal_type.begin(), Normal_type.end(), Pokemon_Name))
    {
        cout << "Pokemon is Normal"<< endl;
    }
    else if (count(Dragon_type.begin(), Dragon_type.end(), Pokemon_Name))
    {
        cout << "Pokemon is a Dragon"<< endl;
    }
    else if (count(Grass_type.begin(), Grass_type.end(), Pokemon_Name))
    {
        cout << "Pokemon is Grass"<< endl;
    }
    else if (count(Water_type.begin(), Water_type.end(), Pokemon_Name))
    {
        cout << "Pokemon is Water"<< endl;
    }
                
}
    
    
    
    
    
    
    //prints the stats of the pokemon. (later could add the pokemon type (Fire,water etc...))
    void print_stats()
    {
        cout << "Name: " << Pokemon_Name << endl;
        cout << "Hp: " << pokemon_Hp << endl;

    }
    
};   
#endif

