// Rewrite the following program. Use a switch statement instead of the if/else if statement.

#include <iostream>
using namespace std;
int main()
{
       int selection;
        cout << "Which formula do you want to see?\n";
        cout << "1. Apple\n";
        cout << "2. Bannana\n";
        cout << "3. Orange\n" ;
        cout << "4. None of them\n";
        cin >> selection;
// TODO
switch (selection){
        case 1:

                cout << "Menu 1 selected." << endl;
                break;

        case 2:

                cout << "Menu 2, Bannana selected." << endl;
                break;

        case 3:

                cout << "Menu 3, Orange selected." << endl;
                break;

        case 4:

                cout << "Menu 4, None, selected." << endl;
                break;
        
        default:

                cout << "Menu item does not exist." << endl;
                return 1;
}
// TODO
}
