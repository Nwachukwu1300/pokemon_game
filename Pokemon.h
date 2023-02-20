#include <iostream>
#include <fstream> //used for files
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>
#include "Pokemon_Moves.h"
using namespace std;

class NPC
{
public:
    string name;
    int pokemon_Hp = 0;
    int counter = 0;
    string Pokemon_Name;
    vector <string> Pokemon_Names;

    

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
        for(int i = 0; i < 5; i++)
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
    
        name = temp; 

        return randomInt;
    }

    //prints the stats of the pokemon. (later could add the pokemon type (Fire,water etc...))
    void print_stats()
    {
        cout << "Name: " << name << endl;
        cout << "Hp: " << pokemon_Hp << endl;

    }
    
};   
