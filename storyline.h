#include <iostream>
#include <string>
#include <random>
using namespace std;

class Story 
{
public:
    int poke_Balls = 0;
    int pokemon_Count = 0;
    string player_Name = "";
    string rosterPokemonName1 = "";



    Story()
    {
    }

    void storyPart1()
    {
        int randomInt;
        int answer;

        //random generator to create a random number
        mt19937 rng(time(0)); // https://stackoverflow.com/questions/57135552/how-can-i-set-range-to-the-random-library
        uniform_int_distribution <int> d(0, 21); // The range of the length of pokemon file (hardcoded must be updated if more pokemon are added)
        
        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon1;   //creating the first object
        Pokemon1.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon2;   //creating the first object
        Pokemon2.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon3;   //creating the first object
        Pokemon3.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        cout << "Neighbour:\"Welcome to the Kanto region...\""<< endl << "Neighbour: \"Erm, \"" << endl << "Neighbour:\"Sorry what is your name?\" ";
        cin >> player_Name;

        cout << endl << "Neighbour:\"Oh, " << player_Name << ". What a wonderful name!\"";
        cout << endl << "Neighbour:\"How nice of you to come and visit your father!\"" << endl;
        cout << "Neighbour:\"He's excited to see you...\"" << endl;
        cout << "Neighbour:\"He's at the pokemon hospital, I'll take you there now.\"" << endl;

        
        cout << endl << "*TRANSPORTING TO POKEMON HOSPITAL*" << endl;

        cout << endl;
        
        cout << "Dad:\"Son! Welcome to the Kanto region, I'm not sure why your mum doesn't let you come here.\"" << endl;
        cout << player_Name <<": \"Mum says pokemon are dangerous... Thats why\"" << endl;
        cout << "Dad:\"Well now your old enough! and it's your lucky day!" << endl;
        cout << "Dad:\"Here are 3 pokemon! Pick the one that you like the most to be your very own!\"" << endl;

        cout << endl;

        cout << "1." << Pokemon1.get_Name() << " 2." << Pokemon2.get_Name() << " 3." << Pokemon3.get_Name() << endl;
        cout << "Answer: ";
        cin >> answer;

        if(answer == 1)
        {
            rosterPokemonName1 = answer;
        }
        else if (answer == 2)
        {
            rosterPokemonName1 = answer;
        }
        else if(answer == 3)
        {
            rosterPokemonName1 = answer;
        }

        cout << endl;

        //allow the user to pick an option of which pokemon they want
        cout << "Dad:\"Wow! " << rosterPokemonName1 << " That would have been my choice too...\"" << endl;



        cout << "Dad:\"Hey, here are some pokeballs just incase you run into any pokemon on your way to the house.\"" << endl;
        cout << "*You have recieved 3 pokeballs!*" << endl;
        cout << "Dad:\"See you later Son, Good luck with your adventures!\"" << endl;

        cout << endl;

        cout << "*WALKING HOME...*" << endl;

        //generate a pokemon for the user to run into to battle by force.
        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon4;   //creating the first object
        Pokemon4.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object
        
        cout << "*"<<  Pokemon4.get_Name() <<" has been encountered*" << endl;

        //call battle function

        //if the player wins
        //check how many pokemon they have 
        //if they have 2 proceed with the code
        //if they dont have 2 pokemon, generate a new pokemon and have them fight it till they have 2 pokemon minimum

        //when they have 2 pokemon
        cout << "Dad:\"Well done! I see you caught your first pokemon! It feels great doesnt it\"" << endl;
        cout << "Dad:\"Well, seems your ready to face your first trainer!... Trainer Lucy\"" << endl;
        cout << "Dad:\"She will be waiting for you at the battle gym south from here. Good luck\"" << endl;

        //travel to the gym
        //if visits > 1 then output " ahh your here to try and defeat me again"
        //battle trainer





    }





































};