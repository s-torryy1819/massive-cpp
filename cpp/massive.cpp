#include <string>
#include <iostream>
using namespace std;

int main()
{
    /*double const P = 3.141592653589793238462643383279;
    cout << P / 3 << endl;


    float ampoule1 = 3.75;
    float ampoule2 = 3.454565665433;
    float ampoule3 = 123.43;
    float ampoule4 = 31.322123; 
    float ampoule5 = 1.123;
    
    float arr[] = { 3.52441, 5.425, 5.3151, 53135.31, 1.532, 1.642 };
    for (int d = 0; d < 5; d++) {
       
        if (arr[d] < 1.5) {
            cout << arr[d] << " is the least ampoule of all." << endl;
            
        }
        else {
            cout << "Sorry, this is not the ampoule you need." <<  endl;
        }
    }
    



    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        cout << arr[i] << endl;
    }   
    


    int mas[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mas[i][j]<< "    "
                ;
                
        }
    }
    

    int mass[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            mass[i][j] = a;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mass[i][j] << "   ";


        }
        cout << endl;
    }
    */
   
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

