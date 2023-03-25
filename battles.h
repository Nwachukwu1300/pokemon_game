#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <random>
#include <ctime>
#include <algorithm>

double calculate_effectiveness( string defender_type,  string move_type) {
    double effectiveness = 1.0;
    
    // Water type
    if (move_type == "Water") {
        if (defender_type == "Fire" || defender_type == "Normal") {
            effectiveness = 2.0;
        } else if (defender_type == "Grass" || defender_type == "Fighting" || defender_type == "Water" || defender_type == "Flying") {
            effectiveness = 0.5;
        } else if (defender_type == "Dragon" || defender_type == "Electric") {
            effectiveness = 0.25;
        }
    }
    
    // Grass type
    if (move_type == "Grass") {
        if (defender_type == "Water" || defender_type == "Electric") {
            effectiveness = 2.0;
        } else if ( defender_type == "Grass" || defender_type == "Normal" || defender_type == "Flying" || defender_type == "Dragon") {
            effectiveness = 0.5;
        } else if (defender_type == "Fire" || defender_type == "Fighting") {
            effectiveness = 0.25;
        }
    }
    
    // Normal type
    if (move_type == "Normal") {
        if(defender_type == "Fire" || defender_type == "Water"){
            effectiveness = 2.0;
        }else if (defender_type == "Normal" || defender_type == "Fighting" || defender_type == "Grass" || defender_type == "Electric") {
            effectiveness = 0.5;
        } else if (defender_type == "Flying"|| defender_type == "Dragon") {
            effectiveness = 0.25;
        }
    }
    
    // Fighting type
    if (move_type == "Fighting") {
        if (defender_type == "Normal" || defender_type == "Fire") {
            effectiveness = 2.0;
        } else if (defender_type == "Flying" || defender_type == "Dragon" || defender_type == "Grass" || defender_type == "Fighting" ) {
            effectiveness = 0.5;
        } else if (defender_type == "Water" || defender_type == "Elecric") {
            effectiveness = 0.25;
        }
    }
    
    // Electric type
    if (move_type == "Fighting") {
        if (defender_type == "Dragon" || defender_type == "Flying") {
            effectiveness = 2.0;
        } else if (defender_type == "Electric" || defender_type == "Grass" || defender_type == "Normal"|| defender_type == "Fire") {
            effectiveness = 0.5;
        } else if (defender_type == "Water"|| defender_type == "Fighting") {
            effectiveness = 0.25;
        }
    }
    
    // Dragon type
    if (move_type == "Dragon") {
        if (defender_type == "Water"|| defender_type == "Fighting") {
            effectiveness = 2.0;
        } else if (defender_type == "Dragon"|| defender_type == "Normal"|| defender_type == "Electric"|| defender_type == "Grass") {
            effectiveness = 0.5;
        } else if(defender_type == "Flying"|| defender_type == "Fire"){
            effectiveness = 0.25;
        }
    }
    
    //Flying type
    if (move_type == "Flying") {
        if (defender_type == "Normal"|| defender_type == "Fire") {
            effectiveness = 2.0;
        } else if (defender_type == "Flying"|| defender_type == "Water"|| defender_type == "Electric"|| defender_type == "Grass") {
            effectiveness = 0.5;
        } else if(defender_type == "Dragon"|| defender_type == "Fighting"){
            effectiveness = 0.25;
        }
    }
    
    //Fire type
    if (move_type == "Fire") {
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
string get_type(string pokemon_name);


int attack(int pokemon_Hp, int damage_Done, string pokemon_name, string defender_name)
{
    //set the new_hp to be 0
    int new_Hp = 0;
    string pokemon_type = get_type(pokemon_name);
    string defender_type = get_type(defender_name);
    float how_effective = calculate_effectiveness(defender_type, pokemon_type);

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


void catchPokemon(int num_poke_balls, bool is_wild_pokemon, string enemy_type, vector<NPC>& pokemon_names) {
        if (is_wild_pokemon == 0){
            if (num_poke_balls <= 0) {
                cout << "ERROR: There are no pokeballs left" << endl;
                return;
            }
            bool is_caught = (rand() % 2 == 0);//Its a boolean expression that generates a random integer between 0 and 1 and checks if it is equal to 0.
            if (is_caught==0) {
                cout << "Oh no! The wild Pokemon got away." << endl;
                return;
            }
            // To reduce the number of Pokeballs
            num_poke_balls--;
            // Catch the Pokemon
            cout << "You caught a wild Pokemon!" << endl;
            cout<<"Do you want to keep this pokemon ?"<<endl;
            cout<< "Enter Y for yes, N for no"<<endl;
            string choice;
            cin>> choice;
            if(choice == "Y" || choice == "y"){
                cout<<"These are the pokemons you have: "<<endl;// For loop to print out the pokemons they have
                for(int name = 1; name <=3; name++){
                    cout << name+1 << ". " << pokemon_names[name].get_Name() << endl;
                }
                while(true){
                    cout<<"Enter the number of the pokemon you want to replace"<<endl;
                    int replaced_pokemon;
                    cin>>replaced_pokemon;
                    if(replaced_pokemon < 1 || replaced_pokemon > 3){
                        cout<<"ERRORR: Invalid input enter a number between 1 and 3"<<endl;
                    }
                    else{
                        pokemon_names.erase(pokemon_names.begin() + replaced_pokemon - 1);
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
            else if(choice == "n" || choice == "N"){
                cout<<"You've let the wild pokemon go. "<<endl;
            }
            else{
                cout<<"Invalid answer"<<endl;
            }

        } else{
            // Pokemon being fought is a trainer's Pokemon
            if (enemy_type == "trainer") {
                cout << "ERROR: You cannot catch a trainer's Pokemon" << endl;
            } else if (enemy_type == "pokemon") {
                cout << "ERROR: You cannot catch another Pokemon that's not wild" << endl;
            } else {
                cout << "ERROR: Invalid enemy type" << endl;
            }
        }
}


//procedure to simulate the battle happening. (The variables we have not used yet look like errors but theyre not. Code still runs)
void pokemonBattle(string name,int hp, string name2,int hp2, string name3, int hp3, string ai_Name, int ai_Hp, string player_Name, int poke_Balls)
{
    //declare local variables
    int answer;
    int pokemon_choice;
    bool is_true = true;

    //declare moves from Pokemon_moves.h
    Electric electric_Move1;
    Electric electric_Move2;
    Electric electric_Move3;
    Fire fire_Move1;
    Fire fire_Move2;
    Fire fire_Move3;
    
    //call the moves (from Pokemon_moves) so that the individual variables are assigned
    electric_Move1.electric_Move1();
    electric_Move2.electric_Move2();
    electric_Move3.electric_Move3();
    fire_Move1.fire_Move1();
    fire_Move2.fire_Move2();
    fire_Move3.fire_Move3();

    cout << player_Name << " is battling Trainer Lucy!" << endl; 

    cout << player_Name << ": " << name << " I choose you!"<< endl;
    cout << name << " has been summoned..." << endl << endl;
    
    //While loop used to make sure the player chooses in between 1 and 3
    while (is_true == true)
    {
    cout << "Would you like to "<< endl << "1. ATTACK "<< endl << "2. SWITCH POKEMON" << endl << "3. CATCH POKEMON" << endl;
    cout << "Choice: ";
    cin >>  answer;
    
        if (answer == 1 || answer == 2 || answer == 3)
        {
            //make is_true false so that when the while loops checks, it doesnt loop again.
            is_true = false;
        }
        else
        {
            cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
        }
    }

    //if statement for option 1
    if (answer == 1)
    {
        cout<<"attacking"<< endl;
    }

   //if statement for option 2 (swap pokemon) 
    else if (answer == 2)
    {
        while (true)
        {
            cout << "These are the pokemons you have:" << endl;
            cout << "1. " << name << endl;
            cout << "2. " << name2 << endl;
            cout << "3. " << name3 << endl;
            cout << "Which one would you like to use?" << endl;
            cin >>  pokemon_choice;
            //While loop to make sure player chooses in between 1 and 3
            
                if (pokemon_choice != 1 || pokemon_choice != 2 || pokemon_choice != 3)
                {
                    cout<<"invalid input, please choose one between the options which are 1, 2 and 3"<<endl;
                }
                
                if (pokemon_choice == 1 || pokemon_choice == 2 || pokemon_choice == 3)
                {
                    break;
                }
        }
    //If statements for pokemon choice
        if (pokemon_choice == 1)
        {
            cout<<"This pokemon is already being used"<<endl;
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
        bool is_pokemon_wild = rand() % 2; // generates a random value of either 0 or 1
        int num_of_poke_balls = rand() % 21; // generates a random value between 0 and 20
        string enemy_type = (rand() % 2) ? "pokemon" : "trainer"; // generates either "wild" or "trainer"
        vector<NPC> pokemon_names;
        catchPokemon(num_of_poke_balls, is_pokemon_wild, enemy_type, pokemon_names);
    }
}



