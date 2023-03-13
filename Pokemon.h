#include <iostream>
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

        //find out if the poekmone is a certain type, if so add to correct vector
        if(temp == "Picachu" || temp == "Luxray" || temp == "Electrabuzz" )
        {
            cout << temp << " is Electric" << endl;
            Electric_type.emplace_back(Pokemon_Name);
        }
        else if(  temp == "Lucario" || temp == "Mewtwo" || temp == "Snorlax" || temp == "Jigglypuff" || temp == "Pidgeot" || temp == "Butterfree" || temp == "Eevee")
        {
            cout << temp << " is Normal" << endl;
            Normal_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Charzard" || temp == "Dragonite" || temp == "Axew")
        {
            cout << temp << " is Dragon" << endl;
            Dragon_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Infernape" || temp == "Tepig")
        {
            cout << temp << " is Fire" << endl;
            Fire_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Puplip" || temp == "Oshawott" || temp == "Magikarp")
        {
            cout << temp << " is Water" << endl;
            Water_type.emplace_back(Pokemon_Name);
        }
        else if( temp == "Snivy" ||  temp == "Bulbasaur" ||  temp == "Turtwig")
        {
            cout << temp << " is Grass" << endl;
            Grass_type.emplace_back(Pokemon_Name);
        }
    
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
    cout << endl;
    cout << "*POKEMON HAS BEEN HEALED*";
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


    
    //prints the stats of the pokemon. (later could add the pokemon type (Fire,water etc...))
    void print_stats()
    {
        cout << "Name: " << Pokemon_Name << endl;
        cout << "Hp: " << pokemon_Hp << endl;
    }
    
};   
