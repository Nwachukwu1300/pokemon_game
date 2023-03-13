#include <iostream>
using namespace std;
class Electric
{
public:
    string move_name;
    int damage;

    Electric()
    {
        move_name = "name";
        damage = 0;
    }



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int get_Damage()
{
    return damage;
}

string get_Move_Name()
{
    return move_name;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void electric_Move1()
    {
        move_name = "Zippy zap";
        damage = 50;
    }

    void electric_Move2()
    {
        move_name = "Thunder punch";
        damage = 75;
    }

    void electric_Move3()
    {
        move_name = "Wild charge";
        damage = 90;
    }

};

class Normal
{
public:
    string move_name;
    int damage;

    Normal()
    {
        move_name = "name";
        damage = 0;
    }



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int get_Damage()
{
    return damage;
}

string get_Move_Name()
{
    return move_name;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void normal_Move1()
    {
        move_name = "Vice grip";
        damage = 55;
    }

    void normal_Move2()
    {
        move_name = "Slash";
        damage = 70;
    }

    void normal_Move3()
    {
        move_name = "Rock climb";
        damage = 90;
    }
    void normal_Move4()
    {
        move_name = "Judgement";
        damage = 100;
    }

};

class Dragon
{
public:
    string move_name;
    int damage;

    Dragon()
    {
        move_name = "name";
        damage = 0;
    }



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                            Getters
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int get_Damage()
{
    return damage;
}

string get_Move_Name()
{
    return move_name;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void dragon_Move1()
    {
        move_name = "Dual chop";
        damage = 40;
    }

    void dragon_Move2()
    {
        move_name = "Dragon claw";
        damage = 80;
    }

    void dragon_Move3()
    {
        move_name = "Dragon hammer";
        damage = 90;
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

    // Getters
    int get_Damage() {
        return damage;
    }

    string get_Move_Name() {
        return move_name;
    }

    void water_Move1() {
        move_name = "Water gun";
        damage = 40;
    }

    void water_Move2() {
        move_name = "Surf";
        damage = 70;
    }

    void water_Move3() {
        move_name = "Hydro pump";
        damage = 90;
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

    // Getters
    int get_Damage() {
        return damage;
    }

    string get_Move_Name() {
        return move_name;
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
};

class Fighting {
public:
    string move_name;
    int damage;

    Fighting() {
        move_name = "name";
        damage = 0;
    }

    //

void fightingMove1() {
        move_name = "Karate chop";
        damage = 50;
    }

    void fightingMove2() {
        move_name = "Brick break";
        damage = 75;
    }

    void fightingMove3() {
        move_name = "Superpower";
        damage = 120;
    }
};