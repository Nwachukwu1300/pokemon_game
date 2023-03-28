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
    int rosterPokemonHp1 = 0;
    string rosterPokemonName2 = "";
    int rosterPokemonHp2 = 0;
    string rosterPokemonName3 = "";
    int rosterPokemonHp3 = 0;






    Story()
    {
    }

    void storyPart1()
    {
        //declare to be able to use battle fucntions
        Battles battle;

        int randomInt;
        int answer;
        string Trainer1 = "Lucy";

        //random generator to create a random number
        mt19937 rng(time(0)); // https://stackoverflow.com/questions/57135552/how-can-i-set-range-to-the-random-library
        uniform_int_distribution <int> d(0, 21); // The range of the length of pokemon file (hardcoded must be updated if more pokemon are added)
        
        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon1;   //creating the object
        Pokemon1.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon2;   //creating the object
        Pokemon2.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon3;   //creating the object
        Pokemon3.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon4;   //creating the object
        Pokemon4.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

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
        cout << "Dad:\"Well now your old enough! and it's your lucky day!\"" << endl;
        cout << "Dad:\"Here are 4 pokemon!\"" << endl;

        cout << endl;

        cout << "1." << Pokemon1.get_Name() << "\t\t2." << Pokemon2.get_Name() << " \t3." << Pokemon3.get_Name() << " \t\t4." <<  Pokemon4.get_Name() << endl << endl;
        cout << "Dad:\"Pick the pokemon that you don't want so you can discard it.\"" << endl << "Dad:\"The other 3 will be your very own!\"" << endl;
        cout << "Answer: ";
        cin >> answer;

        //save the pokemons details to local variables for whatever pokemon is not chosen
        if(answer == 1)
        {
           rosterPokemonName1 =  Pokemon2.get_Name();
           rosterPokemonHp1 = Pokemon2.get_Hp();

           rosterPokemonName2 =  Pokemon3.get_Name();
           rosterPokemonHp2 = Pokemon3.get_Hp();

           rosterPokemonName3 =  Pokemon4.get_Name();
           rosterPokemonHp3 = Pokemon4.get_Hp();
        }
         else if (answer == 2)
        {
            rosterPokemonName1 = Pokemon1.get_Name();
            rosterPokemonHp1 = Pokemon1.get_Hp();

            rosterPokemonName2 = Pokemon3.get_Name();
            rosterPokemonHp2 = Pokemon3.get_Hp();

            rosterPokemonName3 = Pokemon4.get_Name();
            rosterPokemonHp3 = Pokemon4.get_Hp();
        }
        else if(answer == 3)
        {
            rosterPokemonName1 =  Pokemon1.get_Name();
            rosterPokemonHp1 = Pokemon1.get_Hp();

           rosterPokemonName2 =  Pokemon2.get_Name();
           rosterPokemonHp2 = Pokemon2.get_Hp();

           rosterPokemonName3 =  Pokemon4.get_Name();
           rosterPokemonHp3 = Pokemon4.get_Hp();
        }
        else if(answer == 4)
        {
           rosterPokemonName1 =  Pokemon1.get_Name();
           rosterPokemonHp1 = Pokemon1.get_Hp();

           rosterPokemonName2 =  Pokemon2.get_Name();
           rosterPokemonHp2 = Pokemon2.get_Hp();

           rosterPokemonName3 =  Pokemon3.get_Name();
           rosterPokemonHp3 = Pokemon3.get_Hp();
        }
      
        
        cout << endl;

        //allow the user to pick an option of which pokemon they want
        cout << "Dad:\"Wow! " << rosterPokemonName1 <<", " <<  rosterPokemonName2 << " and " << rosterPokemonName3 << " That would have been my choices too...\"" << endl;
        cout << "Dad:\"Hey, here are some pokeballs just incase you run into any pokemon on your way to the house.\"" << endl;

        cout << endl;

        cout << "*You have recieved 3 pokeballs!*" << endl;

        cout << endl;

        // make the pokeballs count now be 3
        poke_Balls = 3;

        cout << endl;

        cout << "Dad:\"Well, seems your ready to face your first trainer!... Trainer " << Trainer1 << "\"" << endl;
        cout << "Dad:\"She will be waiting for you at the battle gym south from here. Good luck\"" << endl;

        cout << endl;

        //travel to the gym
        cout << "* Walking to Gym *" << endl;

        cout << Trainer1 << ":\"Welcome to the Kanto gym " << player_Name << ". Let's battle!\"";
        cout << endl;

        //generate 2 pokemon for the ai trainer to use

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon5;   //creating the object
        Pokemon5.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object
        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon6;   //creating the object
        Pokemon6.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, Pokemon5.get_Name(), Pokemon5.get_Hp(), Pokemon6.get_Name(), Pokemon6.get_Hp(), player_Name, poke_Balls);

        //if visits > 1 then output " ahh your here to try and defeat me again"
        //battle trainer

    }
};