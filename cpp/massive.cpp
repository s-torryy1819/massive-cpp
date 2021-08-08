#include <string>
#include <iostream>
using namespace std;

int main()
{
    
   
    int mas[5][5];
    string a = ".";
    mas[5][5] = a;
    


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            string a = ".";
            mas[5][5] = a;
            cout << mas[i][j];
        }
    }


}

