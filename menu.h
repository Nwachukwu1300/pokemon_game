#include <iostream>
using namespace std;

void main_menu()
{
    cout << "MAIN MENU\n Select from the following options your desired choice" << endl;
    cout <<"1.) Resume\n2.) Status\n3.) Help\n4.) Quit"<<endl;
    int choice;
    cin >> choice;
    if (choice>4 || choice<1){
        cout<<"Pick between 1 and 4\n";
    }else{
        switch(choice){
            case 1:
                break;
            case 2:
                cout<<"here we will give them their status. hp, current pokemons etc."<<endl;
                break;
            case 3:
                cout<<"here we'll show them the manual for the game"<<endl;
                break;
            case 4:
                cout<<"Goodbye"<<endl;
                break;
        }
    }
}

