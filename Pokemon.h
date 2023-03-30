#include <iostream>
#include <fstream> //used for files
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;


//create class
class NPC
{
public:


    //public variables in class
    int pokemon_Hp = 0;
    int counter = 0;
    string Pokemon_Name;


    //vectors to store the pokemon names from the file
    vector <string> Pokemon_Names;


    //vectors to hold each pokemon of each type
    vector <string> Electric_type;
    vector <string> Normal_type;
    vector <string> Dragon_type;
    vector <string> Fire_type;
    vector <string> Water_type;
    vector <string> Grass_type;


    
    //creates the class
    NPC()
    {
        //update the counter so that the vector gets looped though randmly to set a new name for the object
        counter = counter + 1;


        //if the counter is more than 0 then dont reload the pokemon else load the file into the code
        if(counter > 0 )
        {
            load_pokemon();
        }
        
        //create the name of the pokemon object
        pokemon_Hp = 100;
    }


    //load in pokemon from the file
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
            //print out that the file cannot be found if the file is not loading instead of crashing
            cout << "Couldn't find file";
        }
    }


    //pick a random pokemon to generate
    int pick_Random_Pokemon(int randomInt)
    {
        //declare variables
        string temp = "";
    
        //temp stores the random pokemon that is picked from the vector
        temp = Pokemon_Names[randomInt];


        //find out if the poekmone is a certain type, if so add to correct vector
        if(temp == "Picachu" || temp == "Luxray" || temp == "Electrabuzz" )
        {
            Electric_type.emplace_back(Pokemon_Name);
        }
        else if(  temp == "Lucario" || temp == "Mewtwo" || temp == "Snorlax" || temp == "Jigglypuff" || temp == "Pidgeot" || temp == "Butterfree" || temp == "Eevee")
        {
            Normal_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Charzard" || temp == "Dragonite" || temp == "Axew")
        {
            Dragon_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Infernape" || temp == "Tepig")
        {
            Fire_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Puplip" || temp == "Oshawott" || temp == "Magikarp")
        {
            Water_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Snivy" ||  temp == "Bulbasaur" ||  temp == "Turtwig")
        {
            Grass_type.emplace_back(Pokemon_Name);
        }
    
        //for loop to remove the names of the pokemon that have already been chosen so there is no repeat 
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


        //return the random number created
        return randomInt;   
    }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Setters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//used to set the pokemons name
string set_Name(string name)
{
    //set the public variable pokemon_name to the name just passed in
    Pokemon_Name = name;


    return Pokemon_Name;
}


//I first added a getter to return the type of pokemon add it to the setters and getters in the 
string get_type(string pokemon_name) {
    // check if the pokemon is Electric type
    if (find(Electric_type.begin(), Electric_type.end(), pokemon_name) != Electric_type.end()) {
        return "Electric";
    }
    // check if the pokemon is Normal type
    else if (find(Normal_type.begin(), Normal_type.end(), pokemon_name) != Normal_type.end()) {
        return "Normal";
    }
    // check if the pokemon is Dragon type
    else if (find(Dragon_type.begin(), Dragon_type.end(), pokemon_name) != Dragon_type.end()) {
        return "Dragon";
    }
    // check if the pokemon is Fire type
    else if (find(Fire_type.begin(), Fire_type.end(), pokemon_name) != Fire_type.end()) {
        return "Fire";
    }
    // check if the pokemon is Water type
    else if (find(Water_type.begin(), Water_type.end(), pokemon_name) != Water_type.end()) {
        return "Water";
    }
    // check if the pokemon is Grass type
    else if (find(Grass_type.begin(), Grass_type.end(), pokemon_name) != Grass_type.end()) {
        return "Grass";
    }
    // if the pokemon is not found in any type list, return unknown
    else {
        return "Unknown";
    }
}


//used to set the hp if it changes
int set_Hp(int HP)
{
    //set the public variable pokemon_hp to the hp just passed in
    pokemon_Hp = HP;


    return pokemon_Hp;
}


//resets the pokemons hp to 100 to be used after a battle to "heal" the pokemon
void set_Heal_Reset()
{
    
    pokemon_Hp = 100;
    cout << endl;
    cout << "*POKEMON HAS BEEN HEALED*";
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //return the pokemon name on request
    string get_Name()
    {
        return Pokemon_Name;
    }


    //return the pokemon hp on request
    int get_Hp()
    {
        return pokemon_Hp;
    }


    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    
    //prints the stats of the pokemon. (used wen testing the code)
    void print_stats()
    {
        cout << "Name: " << Pokemon_Name << endl;
        cout << "Hp: " << pokemon_Hp << endl;
    }
    
};   

