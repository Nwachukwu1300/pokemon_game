#include <iostream>
#include <string>
#include <random>
//libaries used to give the game a delayed effect
#include <chrono>
#include <thread>
using namespace std;


//create class
class Story 
{
public:
    //declare public variables
    int poke_Balls = 0;
    int pokemon_Count = 0;
    string player_Name = "";
    bool bWin = false;


    //local variables to store details about the pokemon called / created
    string rosterPokemonName1 = "";
    int rosterPokemonHp1 = 0;
    string rosterPokemonName2 = "";
    int rosterPokemonHp2 = 0;
    string rosterPokemonName3 = "";
    int rosterPokemonHp3 = 0;
    
    //create the object story
    Story()
    {
    }


    void delay(int milli){
        this_thread::sleep_for(chrono::milliseconds(milli));
    }


    //void where the story line is going to be
    void storyPart1()
    {
        //declare to be able to use battle fucntions
        Battles battle;


        //local variables
        int randomInt;
        int answer;
        string szAnswer = "";
        string Trainer1 = "Lucy";


        //random generator to create a random number
        mt19937 rng(time(0)); // https://stackoverflow.com/questions/57135552/how-can-i-set-range-to-the-random-library
        uniform_int_distribution <int> d(0, 21); // The range of the length of pokemon file (hardcoded must be updated if more pokemon are added)
        
        //the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon1;   //creating the object
        Pokemon1.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


        //the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon2;   //creating the object
        Pokemon2.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


        //the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon3;   //creating the object
        Pokemon3.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


        //the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon4;   //creating the object
        Pokemon4.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


        //story text 
        cout << "Neighbour:\"Welcome to the Kanto region...\"" << endl; 
        delay(1500);
        cout << "Neighbour: \"Erm, \"" << endl;
        delay(2000);
        cout  << "Neighbour:\"Sorry what is your name?\" ";
        cin >> player_Name; //ask for the user to enter thier name

        //story text
        cout << endl << "Neighbour:\"Oh, " << player_Name << ". What a wonderful name!\"";
        delay(1500);
        cout << endl << "Neighbour:\"How nice of you to come and visit your father!\"" << endl;
        delay(1500);
        cout << "Neighbour:\"He's excited to see you...\"" << endl;
        delay(1500);
        cout << "Neighbour:\"He's at the pokemon hospital, I'll take you there now.\"" << endl;


        
        cout << endl << "*TRANSPORTING TO POKEMON HOSPITAL*" << endl;
        delay(4000);

        //paragraph
        cout << endl;
        
        //story text
        cout << "Dad:\"Son! Welcome to the Kanto region, I'm not sure why your mum doesn't let you come here.\"" << endl;
        delay(1500);
        cout << player_Name <<": \"Mum says pokemon are dangerous... Thats why\"" << endl;
        delay(1500);
        cout << "Dad:\"Well now your old enough! and it's your lucky day!\"" << endl;
        delay(1500);
        cout << "Dad:\"Here are 4 pokemon!\"" << endl;


        //paragraph
        cout << endl;


        //Display the pokemon for the user to pick which pokemon they dont want
        cout << "1." << Pokemon1.get_Name() << "\t\t2." << Pokemon2.get_Name() << " \t3." << Pokemon3.get_Name() << " \t\t4." <<  Pokemon4.get_Name() << endl << endl;
        cout << "Dad:\"Pick the pokemon that you don't want so you can discard it.\"" << endl << "Dad:\"The other 3 will be your very own!\"" << endl;
        cout << "Answer: ";
        cin >> answer; // get an inputted number 


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
      
        //paragraph
        cout << endl;

        delay(2000);
        //Story text
        cout << "Dad:\"Wow! " << rosterPokemonName1 <<", " <<  rosterPokemonName2 << " and " << rosterPokemonName3 << " That would have been my choices too...\"" << endl;
       delay(1500);
        cout << "Dad:\"Hey, here are some pokeballs just incase you run into any pokemon on your way.\"" << endl;


        //paragraph
        cout << endl;

        delay(1500);
        //text to recieve pokeballs
        cout << "*You have recieved 3 pokeballs!*" << endl;


        //make the pokeballs count now be 3
        poke_Balls = 3;


        //paragraph
        cout << endl;
        cout << endl;

        delay(2000);
        //story text
        cout << "Dad:\"Well, seems your ready to face your first trainer!... Trainer " << Trainer1 << "\"" << endl;
        delay(1500);
        cout << "Dad:\"She will be waiting for you at the battle gym south from here. Good luck\"" << endl;


        //paragraph
        cout << endl;

        delay(1500);
        //travel to the gym
        cout << "* Walking to Gym *" << endl;


        delay(4000);
        //story text
        cout << Trainer1 << ":\"Welcome to the Kanto gym " << player_Name << ". Let's battle!\"";
        cout << endl; //paragraph


        //generate 2 pokemon for the ai trainer to use
        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon5;   //creating the object
        Pokemon5.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Pokemon6;   //creating the object
        Pokemon6.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object


    //do all of this code here while the user chooses to play again (after losing)
    do
    {
        //pass into the function all the pokemon generated and all their attributes also the players name and the amount of pokeballs. This returns if the player won or not in Boolean
        bWin = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, Pokemon5.get_Name(), Pokemon5.get_Hp(), Pokemon6.get_Name(), Pokemon6.get_Hp(), player_Name, poke_Balls);


        
    //if the user wins print text then pass onto the next story
    if(bWin == true)
    {


        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        //story text
        cout << Trainer1 << ":\"Wow " << player_Name <<" you were strong for your first ever battle!\"" << endl;
        delay(1500);
        cout << Trainer1 << ":\"Here is a medal for your troubles\"" << endl;
        delay(1500);
        cout << Trainer1 << ":\"You have great potential. Your next trainer will be waiting for you at the Levincia gym \"" << endl;
        delay(1500);
        cout << Trainer1 << ":\"Good luck " << player_Name <<".\"" << endl;
    
        //call story part 2
        storyPart2();
    }


        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        //story text
        cout << Trainer1 << ":\"Haha unlucky " << player_Name << " \"" << endl;
        delay(1500);
        cout << Trainer1 << ":\"Your going to have to beat me before you move on!\"" << endl;
        delay(1500);
        cout << Trainer1 << ":\"Would you like to try again? (Y or N):\" ";
        cin >> szAnswer; // collect an answer as a string 


       
    //if the user picks no then end the code. if not do while to the top.
    } while (szAnswer == "Y" || szAnswer == "y");


        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        cout << "Hope you enjoyed the game! See you soon";
        exit(0); // end the game
    }


    //ife's part
    void storyPart2()
    {
        mt19937 rng(time(0));
        uniform_int_distribution <int> d(0, 21);
        string szAnswer = "";
        //declare to be able to use battle functions
        Battles battle;
        
        delay(1500);
        cout << player_Name <<": \"In order to get there, I will have to go through the great forest which is full of pokemon\"" << endl;
        delay(1500);
        cout << player_Name <<": \"I hope I don't encounter any wild pokemons on the way \"" << endl;
        
        delay(1500);
        //travel to the gym
        cout << "* Walking through to the forest *" << endl;
        delay(1500);
        cout << "* Pokemon encouintered *" << endl;

        delay(1500);
        cout << player_Name <<": \"Oh no, there's 2 pokemon in the way, I need to defeat them \"" << endl;


        //generate 1 pokemon for the ai to use
        // the random generator, generating a random number
        int randomInt = d(rng);
        NPC Wild_pokemon;   //creating the object
        Wild_pokemon.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        // the random generator, generating a random number
        randomInt = d(rng);
        NPC Wild_pokemon2;   //creating the object
        Wild_pokemon2.pick_Random_Pokemon(randomInt); //calling the method to pick a random pokemon to be assigned to the object

        //do all of this code here while the user chooses to play again (after losing)
    do
    {
        //pass into the function all the pokemon generated and all their attributes also the players name and the amount of pokeballs. This returns if the player won or not in Boolean
        bWin = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, Wild_pokemon.get_Name(), Wild_pokemon.get_Hp(), Wild_pokemon2.get_Name(), Wild_pokemon2.get_Hp(), player_Name, poke_Balls);


        
    //if the user wins print text then pass onto the next story
    if(bWin == true)
    {
        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        //story text
        cout << player_Name <<": \"Yes! I managed to defeat both pokemon\"" << endl;
        delay(1500);
        cout << player_Name <<": \"Now I can continue with my journey\"" << endl;
        delay(1500);
        //call story part 3
        storypart3();
    }


        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        //story text
        cout << "\"You were defeated by the pokemon " << player_Name << " \"" << endl;
        delay(1500);
        cout << "\"You don't need to defeat the wild pokemon to continue\"" << endl;
        delay(1500);
        cout << "\"Would you like to try again? (Y or N):\" ";
        cin >> szAnswer; // collect an answer as a string 


       
    //if the user picks no then end the code. if not do while to the top.
    } while (szAnswer == "Y" || szAnswer == "y");


        //paragraph
        cout << endl;
        cout << endl;

        delay(1500);
        cout << "Hope you enjoyed the game! See you soon";
        exit(0); // end the game
    }


  

    void storypart3()
    {
        exit(0);
    }
}; 

