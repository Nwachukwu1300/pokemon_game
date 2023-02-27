#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <random>
#include <algorithm>
using namespace std;

class Electric
{
public:
    string move_name;
    int damage;
    
    //creates the class
    Electric()
    {
        cout<<endl;
    }

    void electric_Move1()
    {
        move_name = "Zippy zap";
        damage = 50;
    }


    void print_Status()
    {   
        cout << "This move is called : " << move_name << endl;
        cout << "And it does " << damage << " damage." << endl;

    }
    
};   
