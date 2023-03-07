#ifndef POKEMON_MOVES_H
#define POKEMON_MOVES_H
#include <iostream>
using namespace std;
class Electric
{
public:
    string move_name;
    int damage;
    int counter1;
    int counter2;
    int counter3;

    Electric()
    {
        move_name = "name";
        damage = 0;
        counter1 = 3;
        counter2 = 3;
        counter3 = 1;
    }

<<<<<<< HEAD
=======





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
    void electric_Move1()
    {
        move_name = "Zippy zap";
        damage = 20;
        counter1 = counter1 - 1;
    }

    void electric_Move2()
    {
        move_name = "Thunder punch";
        damage = 33;
        counter2 = counter2 - 1;
    }

    void electric_Move3()
    {
        move_name = "Wild charge";
        damage = 70;
        counter3 = counter3 - 1;
    }

    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Electric move 1 getters//
int get_move1_damage()
{
    electric_Move1();
    return damage;
}

string get_move1_name()
{
    electric_Move1();
    return move_name;
}


//Electric move 2 getters//
int get_move2_damage()
{
    electric_Move2();
    return damage;
}

string get_move2_name()
{
    electric_Move2();
    return move_name;
}



//Electric move 3 getters//
int get_move3_damage()
{
    electric_Move3();
    return damage;
}

string get_move3_name()
{
    electric_Move3();
    return move_name;
}
};
<<<<<<< HEAD
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
=======


>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
class Normal
{
public:
    string move_name;
    int damage;
    int counter1; 
    int counter2;
    int counter3;
    int counter4;

    Normal()
    {
        move_name = "name";
        damage = 0;
        counter1 = 3;
        counter2 = 5;
        counter3 = 2;
        counter4 = 1;
    }

<<<<<<< HEAD
=======

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
    void normal_Move1()
    {
        move_name = "Vice grip";
        damage = 30;
        counter1 = counter1 - 1;
    }

    void normal_Move2()
    {
        move_name = "Slash";
        damage = 10;
        counter2 = counter2 - 1;

    }

    void normal_Move3()
    {
        move_name = "Rock climb";
        damage = 45;
        counter3 = counter3 - 1;
    }
    void normal_Move4()
    {
        move_name = "Judgement";
        damage = 90;
        counter4 = counter4 - 1;
    }

    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Normal move 1 getters//
int get_move1_damage()
{
    normal_Move1();
    return damage;
}

string get_move1_name()
{
    normal_Move1();
    return move_name;
}


//Normal move 2 getters//
int get_move2_damage()
{
    normal_Move2();
    return damage;
}

string get_move2_name()
{
    normal_Move2();
    return move_name;
}



//Normal move 3 getters//
int get_move3_damage()
{
    normal_Move3();
    return damage;
}

string get_move3_name()
{
    normal_Move3();
    return move_name;
}



//Normal move 4 getters//
int get_move4_damage()
{
    normal_Move4();
    return damage;
}

string get_move4_name()
{
    normal_Move4();
    return move_name;
}
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Dragon
{
public:
    string move_name;
    int damage;
    int counter1;
    int counter2;
    int counter3;

    Dragon()
    {
        move_name = "name";
        damage = 0;
        counter1 = 3;
        counter2 = 1;
        counter3 = 3;
    }

<<<<<<< HEAD
=======

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
    void dragon_Move1()
    {
        move_name = "Dual chop";
        damage = 20;
        counter1 = counter1 - 1;
    }

    void dragon_Move2()
    {
        move_name = "Dragon claw";
        damage = 80;
        counter2 = counter2 - 1;
    }

    void dragon_Move3()
    {
        move_name = "Dragon hammer";
<<<<<<< HEAD
=======
        damage = 90;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Dragon move 1 getters//
int get_move1_damage()
{
    dragon_Move1();
    return damage;
}

string get_move1_name()
{
    dragon_Move1();
    return move_name;
}


//Dragon move 2 getters//
int get_move2_damage()
{
    dragon_Move2();
    return damage;
}

string get_move2_name()
{
    dragon_Move2();
    return move_name;
}



//Dragon move 3 getters//
int get_move3_damage()
{
    dragon_Move3();
    return damage;
}

string get_move3_name()
{
    dragon_Move3();
    return move_name;
}
};

class Water {
public:
    string move_name;
    int damage;

    Water() {
        move_name = "name";
        damage = 0;
    }

    void water_Move1() {
        move_name = "Water gun";
>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
        damage = 40;
        counter3 = counter3 - 1;
    }

<<<<<<< HEAD
    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }

=======
    void water_Move2() {
        move_name = "Surf";
        damage = 70;
    }

    void water_Move3() {
        move_name = "Hydro pump";
        damage = 90;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Water move 1 getters//
int get_move1_damage()
{
    water_Move1();
    return damage;
}

string get_move1_name()
{
    water_Move1();
    return move_name;
}


//Water move 2 getters//
int get_move2_damage()
{
    water_Move2();
    return damage;
}

string get_move2_name()
{
    water_Move2();
    return move_name;
}



//Water move 3 getters//
int get_move3_damage()
{
    water_Move3();
    return damage;
}

string get_move3_name()
{
    water_Move3();
    return move_name;
}
};

class Grass {
public:
    string move_name;
    int damage;

    Grass() {
        move_name = "name";
        damage = 0;
    }

    void grass_Move1() {
        move_name = "Vine whip";
        damage = 45;
    }

    void grass_Move2() {
        move_name = "Razor leaf";
        damage = 70;
    }

    void grass_Move3() {
        move_name = "Solar beam";
        damage = 90;
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Grass move 1 getters//
int get_move1_damage()
{
    grass_Move1();
    return damage;
}

string get_move1_name()
{
    grass_Move1();
    return move_name;
}


//Grass move 2 getters//
int get_move2_damage()
{
    grass_Move2();
    return damage;
}

string get_move2_name()
{
    grass_Move2();
    return move_name;
}


//Grass move 3 getters//
int get_move3_damage()
{
    grass_Move3();
    return damage;
}

string get_move3_name()
{
    grass_Move3();
    return move_name;
}
>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Water 
{
public:
    string move_name;
    int damage;
    int counter1;
    int counter2;
    int counter3;

    Water() 
    {
        move_name = "name";
        damage = 0;
        counter1 = 4;
        counter2 = 3;
        counter3 = 1;
    }

    void water_Move1() 
    {
        move_name = "Water gun";
        damage = 25;
        counter1 = counter1 - 1;
    }

    void water_Move2()
    {
        move_name = "Surf";
        damage = 40;
        counter2 = counter2 - 1;
    }

    void water_Move3() 
    {
        move_name = "Hydro pump";
        damage = 85;
        counter3 = counter3 - 1;
    }

    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }
};
<<<<<<< HEAD
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Grass 
{
public:
    string move_name;
    int damage;
    int counter1;
    int counter2;
    int counter3;

    Grass() 
    {
        move_name = "name";
        damage = 0;
        counter1 = 3;
        counter2 = 1;
        counter3 = 5;
    }

    void grass_Move1() 
    {
        move_name = "Vine whip";
        damage = 25;
        counter1 = counter1 - 1;
    }

    void grass_Move2() 
    {
        move_name = "Razor leaf";
        damage = 90;
        counter2 = counter2 - 1;
    }

    void grass_Move3()
    {
        move_name = "Solar beam";
        damage = 10;
        counter3 = counter3 - 1;
    }

    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Fighting 
{
public:
    string move_name;
    int damage;
    int counter1;
    int counter2;
    int counter3;

    Fighting() 
    {
        move_name = "name";
        damage = 0;
        counter1 = 7;
        counter2 = 3;
        counter3 = 1;
    }

void fightingMove1() 
{
        move_name = "Karate chop";
        damage = 10;
        counter1 = counter1 - 1;
    }

    void fightingMove2() 
    {
        move_name = "Brick break";
        damage = 25;
        counter2 = counter2 - 1;
    }

    void fightingMove3()
     {
        move_name = "Superpower";
        damage = 90;
        counter3 = counter3 - 1;
    }

    
    //getters
    int get_Damage()
    {
        return damage;
    }

    string get_Move_Name()
    {
        return move_name;
    }

};


=======
#endif
>>>>>>> 798d0a77e51f236364bec0c01c0350b32a210156
