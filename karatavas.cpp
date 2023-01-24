#include <iostream>
#include <string>
#include <random>
#include <list>
#include <fstream>
#include <cstdlib> // for p
#include <stdlib.h>
#include <array>

using namespace std;

int main() {
    srand(time(0));
    list<char> burti;
    int dzivibas;
    int a = 0;
    char x;
    int y2 = 0;
    int y = 0;
    int lives = 5;
    long p = 0;

    string minamais_vards;
    string myText;

    ifstream MyReadFile("vardi.txt");
    p=rand() % 370105 + 1;
    cout <<p<<endl;

    for (int o = 0; o<=p ; o++)  {
        getline (MyReadFile, minamais_vards);
    }


    cout << minamais_vards << endl;

    for (char c: minamais_vards) {
        y++;
    }

    vector <bool> burtuatklasana[y];
//help please i am stuck in this hell

    for (char c: minamais_vards) {
        cout << c << endl;
    }

    while (true) {
        dzivibas=0;
        cout << "mini burtu"<<endl;
        cout << "\n";
        cin >> x;
       	system ("cls");
            for (char c: minamais_vards) {
                if (x==c)   {
                    cout <<"";
                    cout << x << "\n";
                    cout << "burts pareizi\n";
                    dzivibas=1;
                    y2++;
                }

                if (x!=c){
                    cout << "burts nepareizi\n"; 
                    if (dzivibas==0){
                        dzivibas=1;
                        lives--;
                    }               
                }
                

            }
        cout << lives << "   dzivibas\n";
        cout << y2;
        cout << "\n";

        if (y2>=y)  {
            cout << "uzvara\n";
            system("pause");
            return 0;
        }
        if (lives == 0)  {
            cout << "lose" << endl;
            system("pause");
            return 0;
        }
    }
}