#include <iostream>

using namespace std;

int main()
{

    int a, b, c, menor;

    cout << "Digite tres valores:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a < b && a < c){

       menor = a;

    }

    else if (b < c){

        menor =  b;
    }
    else {
        menor = c;

    }
     cout <<  "MENOR = " << menor << endl;


    return 0;
}
