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
        exit(0);
    }


    void storypart3()
    {
        mt19937 rng(time(0));
        uniform_int_distribution <int> d(0, 21);
        //declare to be able to use battle fucntions
        Battles battle;


        //code to check the output of the wild pokemons it fought and use it in below 
        cout<<"Trainer: \"The next stage of your journey is to defeat the leader in the pokemon city centre."<<endl;
        cout << endl;
        delay(1000);
        // one of these 2 prints out depending on what happened in part 2
        cout<< "Trainer: \"Dont worry about the Wild Pokemon you couln't conquer this is your chance to redeem yourself."<<endl;
        delay(3000);
        cout << endl;
        cout<< "Trainer: \"You should have confidence you already have 3 pokemons and 2 medals you can do it!!" <<endl;
        delay(3000);
        cout << endl;
        cout<< "Trainer: \"Let's rest for now you've had a busy day. Goodnight" <<endl;
        delay(10000);
        cout << endl;
        cout<< "*8 HOURS LATER*" <<endl;
        delay(1000);
        cout << endl;
        cout<< "Trainer: \"GET UP !! GET UP!! We need to leave now so we can beat this master pokemon. Once and for all..." <<endl;
        delay(6000);
        cout << endl;
        cout<< "*TRAVELLING*..." <<endl;
        delay(10000);
        cout << endl;
        cout<<"As they arrived at the city center,  felt a mix of nervousness and excitement. \nThis was the moment they had been waiting for - the chance to battle the leader and prove themselves as a strong pokemon trainer."<<endl;
        delay(6000);
        cout << endl;
        cout<<player_Name <<" inhaled deeply before going towardds the Pokemon gym. A huge arena full with people cheering on the trainers and their Pokémon welcomed them as they approached the gym."<<endl;
        delay(5000);
        cout << endl;
        cout<<player_Name <<"'s heart raced as they stood on the battlefield, facing their opponent. The leader's pokemons were powerful and skilled, but" <<player_Name <<"had come prepared. They had trained hard and were determined to win."<<endl;
        delay(7000);
        cout << endl;
        cout<<"Trainer: \"When we first met, you have grown drastically. How far you've gone and how powerful your pokémons have gotten makes me proud."<<endl;
        delay(8000);
        cout << endl;
        cout<<player_Name<<"smiled, appreciating the trainer's encouragement and direction. He said,\n "<<player_Name<<": \"I couldn't have done it without you. I really appreciate the instruction and advise you provided.\""<<endl;
        delay(7000);
        cout << endl;
        cout<<"The trainer chuckled. \"You're too kind. But remember, this is your own journey, and you've worked hard to get here. Now go and show everyone what you're capable of !!"<<endl;
        delay(10000);
        cout << endl;
        cout<< "PRESENTER: \"LET THE BATTLES BEGIN!!!"<<endl;
        NPC PokemonBoss1;   //creating the object
        NPC PokemonBoss2;
        int randomInt = d(rng);
        PokemonBoss1.pick_Random_Pokemon(randomInt); 
        PokemonBoss2.pick_Random_Pokemon(randomInt); 
        bool boss_fight = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, PokemonBoss1.get_Name(), PokemonBoss1.get_Hp(), PokemonBoss2.get_Name(), PokemonBoss2.get_Hp(), player_Name, poke_Balls);
        while(!boss_fight){
            cout<<"YOU LOST NOW YOU'LL TRY AGAIN MOMENTARILY"<<endl;
            bool boss_fight = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, PokemonBoss1.get_Name(), PokemonBoss1.get_Hp(), PokemonBoss2.get_Name(), PokemonBoss2.get_Hp(), player_Name, poke_Balls);
        }
        cout<<"Congratulations YOU WON !!"<<endl;
        delay(3000);
        cout << endl;
        cout<<"Trainer: \"I'm so proud of you. To be honest I didn't think you'll make it but hey, here you are."<<endl;
        delay(8000);
        cout << endl;
        cout<<"Trainer: \"Now let's go out and get some more pokemons to fight."<<endl;
        delay(5000);
        cout << endl;
        cout<<"In your search for more pokemons to fight you reached a crossroad"<<endl;
        delay(7000);
        cout << endl;
        cout<<"Trainer: \"I know this road, but listen now they're two ways we could go its simple left or right"<<endl;
        delay(10000);
        cout << endl;
        cout<<"Trainer: \"Now if we go left it's a more dangerous road with more powerful pokemons, but it would take us a shorter time to pass this level"<<endl;
        delay(10000);
        cout << endl;
        cout<<"Trainer: \"Alternatively we could go right which have less dangerous pokemon but I think the journey is longer."<<endl;
        delay(10000);
        cout << endl;
        cout<<"Trainer: \" I'll leave it to you to decide"<<endl;
        delay(12000);
        cout << endl;
        string direction;
        cout<<"Input L for left or R for right. "<<endl;
        cin>>direction;
        if(direction == "L" || direction == "l"){
            cout<<"Trainer: \"Okay Left we go..."<<endl;
            delay(10000);
        }
        else if(direction == "R" || direction == "r"){
            cout<<"Trainer: \"Okay Right we go..."<<endl;
            delay(10000);
        }
        else{
            cout<<"Invalid input, try again"<<endl;
            cin>>direction;
        }
            //BEGINING OF THE FIRST BATTLE
        cout<<"ROAR!!!!"<<endl;
        delay(5000);
        cout<<"A Pokemon has just ambushed you and your trainer, now you have to fight it."<<endl;
        NPC first_pokemon1;
        NPC first_pokemon2;
        int randomInt1 = d(rng);
        first_pokemon1.pick_Random_Pokemon(randomInt); 
        first_pokemon2.pick_Random_Pokemon(randomInt); 
        bool first_pokemon_battle = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, PokemonBoss1.get_Name(), PokemonBoss1.get_Hp(), PokemonBoss2.get_Name(), PokemonBoss2.get_Hp(), player_Name, poke_Balls);
        if(first_pokemon_battle){
            cout<<"Trainer: \"Nice you won well done"<<endl;
            cout<<"EXPLORING..."<<endl;
            delay(20000);
        }
        else{
            cout<<"Trainer: \"Even though you lost I'm sure you did your best don't beat yourself too much. Let's keep going"<<endl;
            cout<<"EXPLORING..."<<endl;
            delay(20000);
        }
            
            //BEGINING OF THE SECOND BATTLE
        cout<<"A second pokemon has approached you."<<endl;
        NPC second_pokemon1;
        NPC second_pokemon2;
        int randomInt2 = d(rng);
        second_pokemon1.pick_Random_Pokemon(randomInt2); 
        second_pokemon2.pick_Random_Pokemon(randomInt2); 
        bool second_pokemon_battle = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, PokemonBoss1.get_Name(), PokemonBoss1.get_Hp(), PokemonBoss2.get_Name(), PokemonBoss2.get_Hp(), player_Name, poke_Balls);
        if(second_pokemon_battle){
            cout<<"Trainer: \"Whoa that was really good keep it up"<<endl;
            delay(4000);
            cout<<"EXPLORING..."<<endl;
            delay(20000);
        }
        else{
            cout<<"Trainer: \"Yeah you lost so what just keep you're head up "<<endl;
            delay(5000);
            cout<<"EXPLORING..."<<endl;
            delay(20000);
        }


            //BEGINING OF THE THIRD BATTLE
        cout<<"Trainer: \"Look at that abandoned building should we search it for some pokemons to beat?"<<endl;
        delay(5000);
        cout<<"Input your answer y for yes OR n for no"<<endl;
        string y_or_n;
        cin>>y_or_n;
        if(y_or_n == "y"||y_or_n =="Y"){
            delay(4000);
            cout<<"Trainer: \"Alright let's go make sure to be at a very sharp alert"<<endl; 
            delay(6000);
            cout<<"Trainer: \"Shh I can here one sleeping let's kill it from the back let's move slowly..."<<endl; 
            delay(4000);
            cout<<"Slowly..."<<endl; 
            delay(7000);
            cout<<"Slowly..."<<endl;
            delay(9000);
            cout<<"*Snap*"<<endl;
            delay(5000);
            cout<<"Trainer: \"Yo I told you to watch your step!"<<endl;
            delay(4000);
            cout<<"ROAR!!!!"<<endl;
            delay(6000);
            cout<<"FIGHT"<<endl;
        }
        else if(y_or_n == "n"||y_or_n =="N"){
            cout<<"Trainer: \"No ? What you? A whimp? Fine I'll let you have it. We'll pass through that bridge instead."<<endl;
            delay(7000);
            cout<<"Trainer: \"This bridge clearly isn't in great condition but we can pass it let's go, just watch your step"<<endl;
            delay(6000);
            cout<<"Trainer: \"Slowly..."<<endl;
            delay(6000);
            cout<<"Trainer: \"Slowly..."<<endl;
            delay(7000);
            cout<<"*Snap*"<<endl;
            delay(5000);
            cout<<"Trainer: \"Yo I told you to watch your step!"<<endl;
            delay(4000);
            cout<<"You fell into the water and found a pokemon resting there."<<endl;
            delay(5000);
            cout<<"ROAR!!!"<<endl;
            delay(5000);
            cout<<"Trainer: \"I can't help from up here you have to fight it now!!!"<<endl;
        }
        else{
            cout<<"Invalid input say \"y" <<"or" <<"n"<<endl;
        }


        NPC third_pokemon1;
        NPC third_pokemon2;
        int randomInt3 = d(rng);
        third_pokemon1.pick_Random_Pokemon(randomInt3); 
        third_pokemon2.pick_Random_Pokemon(randomInt3); 
        bool third_pokemon_battle = battle.pokemonBattle(rosterPokemonName1 , rosterPokemonHp1, rosterPokemonName2, rosterPokemonHp2, rosterPokemonName3, rosterPokemonHp3, PokemonBoss1.get_Name(), PokemonBoss1.get_Hp(), PokemonBoss2.get_Name(), PokemonBoss2.get_Hp(), player_Name, poke_Balls);
        if(third_pokemon_battle){
            cout<<"Trainer: \"Well done that was brilliant "<<endl;
        }
        else{
             cout<<" Trainer: \"Sigh let's continue on our journey."<<endl;
        }
        }
};

