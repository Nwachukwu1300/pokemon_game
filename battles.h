#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>


class Battles
{
public:
    //declare moves from Pokemon_moves.h
    Electric electric_Move1;
    Electric electric_Move2;
    Electric electric_Move3;
    Normal normal_Move1;
    Normal normal_Move2;
    Normal normal_Move3;
    Dragon dragon_Move1;
    Dragon dragon_Move2;
    Dragon dragon_Move3;
    Water water_Move1;
    Water water_Move2;
    Water water_Move3;
    Grass grass_Move1;
    Grass grass_Move2;
    Grass grass_Move3;
    Fighting fighting_Move1;
    Fighting fighting_Move2;
    Fighting fighting_Move3;
    Flying flying_Move1;
    Flying flying_Move2;
    Flying flying_Move3;
    Fire fire_Move1;
    Fire fire_Move2;
    Fire fire_Move3;

    Battles()
    {
    }

    int attack(int pokemon_Hp, int damage_Done)
    {
        //set the new_hp to be 0
        int new_Hp = 0;

        //set newHP to be the differnece  between the original hp an the damage done
        new_Hp = pokemon_Hp - damage_Done;

        //if the hp is below 0 then set it to be 0 as a pokemon cannot have less than 0 hp
        if(new_Hp < 0)
        {
            new_Hp = 0;
        }

        //return the new hp after the attack has been done
        return new_Hp;
    }

    int FightScence(int Pokemon_Hp,string pokemon_name,int ai_hp, string  ai_name)
    {
        int choice;

        //  loop for checking if pokemon HP has reached 0 and the continuous use of moves
        while (Pokemon_Hp != 0)
        {
            // player uses move

            cout << endl;


            //switches out players pokemon
            if (Pokemon_Hp == 0)
            {
               

                //message showing that their pokemon has been changed
                cout << pokemon_name << "has been defeated by: "<< ai_name << endl;
                // message showing that the pokemon has been switched out acompanied by a message of what pokemon took thier place
                cout << "pokemon has been switched to : " << endl; //new pokemon name should be before the end line statement
            }
        }

        return 0;
    } 
    

    void catchPokemon(bool isWildPokemon, int numPokeballs, string enemyType, vector<NPC>& pokemon_names) 
    {
            if (isWildPokemon) 
            {
                if (numPokeballs <= 0) 
                {
                    cout << "Error: There are no Pokeballs left" << endl;
                    return;
                }
                bool is_not_caught = (rand() % 2 == 0);//Its a boolean expression that generates a random integer between 0 and 1 and checks if it is equal to 0.
                if (!is_not_caught)
                {
                    cout << "Oh no! The wild Pokemon got away." << endl;
                    return;
                }
                // To reduce the number of Pokeballs
                numPokeballs--;
                // Catch the Pokemon
                cout << "You caught a wild Pokemon!" << endl;
                string choice;
                cout<<"Do you want to keep this pokemon ?"<<endl;
                cout<< "Enter Y for yes, N for no"<<endl;
                cin>> choice;
                if(choice == "Y" || choice == "y")
                {
                    cout<<"These are the pokemons you have: "<<endl;
                    //for loop
                    int replaced_pokemon;
                    while(true)
                    {
                        cout<<"Enter the number of the pokemon you want to replace"<<endl;
                        cin>>replaced_pokemon;
                        if(replaced_pokemon < 1 || replaced_pokemon > 3)
                        {
                            cout<<"Invalid input enter a number between 1 and 3"<<endl;
                        }
                        else
                        {
                            break;
                        }
                    }
                    string wildpokemon_name;
                    NPC wildpokemon;
                    cout<<"What would you like to name this wild pokemon you just caught.";
                    cin>>wildpokemon_name;
                    wildpokemon.set_Name(wildpokemon_name);
                    pokemon_names.push_back(wildpokemon);
                    cout<<"Added" << wildpokemon_name << "to your collection"<<endl; 
                }
                else if(choice == "n" || choice == "N")
                {
                    cout<<"You've let the wild pokemon go. "<<endl;
                }
                else
                {
                    cout<<"Invalid answer"<<endl;
                }

            } else {
                // Pokemon being fought is a trainer's Pokemon
                if (enemyType == "trainer")
                {
                    cout << "Error: Cannot catch a trainer's Pokemon" << endl;
                } else if (enemyType == "pokemon")
                {
                    cout << "Error: Cannot catch another Pokemon, that's not wild" << endl;
                } else 
                {
                    cout << "Error: Invalid enemy type" << endl;
                }
            }
    }

    //procedure to simulate the battle happening. (The variables we have not used yet look like errors but theyre not. Code still runs)
    void pokemonBattle(string name,int hp, string name2,int hp2, string name3, int hp3, string ai_Name, int ai_Hp, string ai_Name2, int ai_Hp2, string player_Name, int poke_Balls)
    {

        //declare local variables
        int answer;
        int pokemon_choice;
        bool choice_is_true = true;
        bool switch_is_true = true;

        cout << player_Name << ": " << name << " I choose you!"<< endl;
        cout << name << " has been summoned..." << endl << endl;
        
        //While loop used to make sure the player chooses in between 1 and 3
        while (choice_is_true == true)
        {
        cout << "Would you like to "<< endl << "1. ATTACK "<< endl << "2. SWITCH POKEMON" << endl << "3. CATCH POKEMON" << endl;
        cout << "Choice: ";
        cin >>  answer;
        
            if (answer == 1 || answer == 2 || answer == 3)
            {
                //make is_true false so that when the while loops checks, it doesnt loop again.
                choice_is_true = false;
            }
            else
            {
                cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
            }
        }

        //if statement for option 1
        if (answer == 1)
        {
            
           // FightScence();
           exit(0);
        }

    //if statement for option 2 (swap pokemon) 
        else if (answer == 2)
        {
            while (switch_is_true == true)
            {
                cout << "These are the pokemons you have:" << endl;
                cout << "1. " << name << endl;
                cout << "2. " << name2 << endl;
                cout << "3. " << name3 << endl;
                cout << "Which one would you like to use?" << endl;
                cin >>  pokemon_choice;
                //While loop to make sure player chooses in between 1 and 3
                
                    if (pokemon_choice == 1 || pokemon_choice == 2 || pokemon_choice == 3)
                    {
                        switch_is_true = false;
                    }

                    else
                    {
                        cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
                    }
                    
                    
            }
        //If statements for pokemon choice
            if (pokemon_choice == 1)
            {
                cout<<"This pokemon is already being used"<<endl;
                pokemonBattle()
            }

            else if (pokemon_choice == 2)
            {
            cout << player_Name << ": " << name2 << " I choose you!"<< endl;
            cout << name2 << " has been summoned..." << endl << endl;

            }

            else if (pokemon_choice == 3)
            {
            cout << player_Name << ": " << name3 << " I choose you!"<< endl;
            cout << name3 << " has been summoned..." << endl << endl;
            
            }
        }

        //if statement for option 3
        else if (answer == 3)
        {
            //This part here is what made it compile and I had to reasearch to understand what the ? does in c++
            bool isWildPokemon = rand() % 2; // generates a random value of either 0 or 1
            int numPokeballs = rand() % 20; // generates a random value between 0 and 19
            string enemyType = (rand() % 2) ? "pokemon" : "trainer"; // generates either "wild" or "trainer"
            vector<NPC> pokemon_names;
            catchPokemon(isWildPokemon, numPokeballs, enemyType, pokemon_names);
        }
    }

    //A WAY WE CAN GET HOW EFFECTIVE A MOVE IS
    const string WATER_TYPE = "Water";
    const string GRASS_TYPE = "Grass";
    const string NORMAL_TYPE = "Normal";
    const string FIGHTING_TYPE = "Fighting";
    const string ELECTRIC_TYPE = "Electric";
    const string DRAGON_TYPE = "Dragon";
    const string FLYING_TYPE = "Flying";
    const string FIRE_TYPE = "Fire";


    double calculate_effectiveness(const string& move_type, const string& defender_type) {
        double effectiveness = 1.0;
        
        // Water type
        if (move_type == WATER_TYPE) {
            if (defender_type == "Fire" || defender_type == "Normal") {
                effectiveness = 2.0;
            } else if (defender_type == "Grass" || defender_type == "Fighting" || defender_type == "Water" || defender_type == "Flying") {
                effectiveness = 0.5;
            } else if (defender_type == "Dragon" || defender_type == "Electric") {
                effectiveness = 0.25;
            }
        }
        
        // Grass type
        if (move_type == GRASS_TYPE) {
            if (defender_type == "Water" || defender_type == "Electric") {
                effectiveness = 2.0;
            } else if ( defender_type == "Grass" || defender_type == "Normal" || defender_type == "Flying" || defender_type == "Dragon") {
                effectiveness = 0.5;
            } else if (defender_type == "Fire" || defender_type == "Fighting") {
                effectiveness = 0.25;
            }
        }
        
        // Normal type
        if (move_type == NORMAL_TYPE) {
            if(defender_type == "Fire" || defender_type == "Water"){
                effectiveness = 2.0;
            }else if (defender_type == "Normal" || defender_type == "Fighting" || defender_type == "Grass" || defender_type == "Electric") {
                effectiveness = 0.5;
            } else if (defender_type == "Flying"|| defender_type == "Dragon") {
                effectiveness = 0.25;
            }
        }
        
        // Fighting type
        if (move_type == FIGHTING_TYPE) {
            if (defender_type == "Normal" || defender_type == "Fire") {
                effectiveness = 2.0;
            } else if (defender_type == "Flying" || defender_type == "Dragon" || defender_type == "Grass" || defender_type == "Fighting" ) {
                effectiveness = 0.5;
            } else if (defender_type == "Water" || defender_type == "Elecric") {
                effectiveness = 0.25;
            }
        }
        
        // Electric type
        if (move_type == ELECTRIC_TYPE) {
            if (defender_type == "Dragon" || defender_type == "Flying") {
                effectiveness = 2.0;
            } else if (defender_type == "Electric" || defender_type == "Grass" || defender_type == "Normal"|| defender_type == "Fire") {
                effectiveness = 0.5;
            } else if (defender_type == "Water"|| defender_type == "Fighting") {
                effectiveness = 0.25;
            }
        }
        
        // Dragon type
        if (move_type == DRAGON_TYPE) {
            if (defender_type == "Water"|| defender_type == "Fighting") {
                effectiveness = 2.0;
            } else if (defender_type == "Dragon"|| defender_type == "Normal"|| defender_type == "Electric"|| defender_type == "Grass") {
                effectiveness = 0.5;
            } else if(defender_type == "Flying"|| defender_type == "Fire"){
                effectiveness = 0.25;
            }
        }
        
        //Flying type
        if (move_type == FLYING_TYPE) {
            if (defender_type == "Normal"|| defender_type == "Fire") {
                effectiveness = 2.0;
            } else if (defender_type == "Flying"|| defender_type == "Water"|| defender_type == "Electric"|| defender_type == "Grass") {
                effectiveness = 0.5;
            } else if(defender_type == "Dragon"|| defender_type == "Fighting"){
                effectiveness = 0.25;
            }
        }
        
        //Fire type
        if (move_type == FIRE_TYPE) {
            if (defender_type == "Water"|| defender_type == "Electric") {
                effectiveness = 2.0;
            } else if (defender_type == "Fighting"|| defender_type == "Fire"|| defender_type == "Flying"|| defender_type == "Grass") {
                effectiveness = 0.5;
            } else if(defender_type == "Dragon"|| defender_type == "Normal"){
                effectiveness = 0.25;
            }
        }
        return effectiveness;
    }    
};


