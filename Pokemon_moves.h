#include <iostream>
using namespace std;
class Moves
{
public:
    string move_name;
    int damage;

    Moves()
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


};
    //creates the class
class Electric: public Moves
{
    Electric()
    {
        cout<<endl;
    }
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