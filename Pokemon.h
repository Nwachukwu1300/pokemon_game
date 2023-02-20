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
        
        Pokemon_Name = shuffle_pokemon_order();


    
        //create the name of the pokemon object
        name = Pokemon_Name;
        pokemon_Hp = 100;
        cout << "Pokemon " << name << " created" << endl;
        
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

    string shuffle_pokemon_order()
    {
        //declare variables
        string temp = "";
        int length = 0;
        int random = 0;

        length = Pokemon_Names.size();


        //random gen
        std::mt19937 rng(std::time(0)); // `std::minstd_rand` would also work.
        std::uniform_int_distribution d(0,length);

        random = d(rng);
        cout << "Random number: "<< random << endl;

        temp = Pokemon_Names[random];
        
        cout << "temp holds " << temp << endl;

        for(int i = 0; i < length; i++)
        {
             if(temp == Pokemon_Names[i])
             {
                if(i == 0)
                {
                    Pokemon_Names.erase(Pokemon_Names.begin());
                }
            }
            else
            {
                Pokemon_Names.erase(Pokemon_Names.begin() + i);
            }
                
        }
     cout<<"THis is the new array:"<<endl;
            for(int j = 0; j < length; j++)
        {
           
            cout<<Pokemon_Names[j]<<endl;

        }

        return temp;
    }

    void say_Hello()
    {
        cout << "Hello, my name is " << name << endl;
    }

    void check_Hp() 
    {
        cout << name << "'s HP is currently " << pokemon_Hp << endl;
    }

    
};   
