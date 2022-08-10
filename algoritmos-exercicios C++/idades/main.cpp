#include <bits/stdc++.h>

using namespace std;

int main()
{
    string Nome1, Nome2;
    int idade1, idade2;
    double media;

    cout << "Digite o nome da primeira pessoa:" << endl;
    cout << "Nome:";
    getline(cin, Nome1);
    cout << "idade: ";
    cin >> idade1;

    cout << "Digite o nome da segunda pessoa:" << endl;
    cout << "Nome:";
    cin.ignore(INT_MAX, '\n'); //limpeza de buffer
    getline(cin, Nome2);
    cout << "idade: ";
    cin >> idade2;

    media = (idade1 + idade2)/2.0;
    cout << fixed << setprecision (1);
    cout << "A idade media de " << Nome1 << " e " << Nome2
         << " eh de " << media << " anos " << endl;


    return 0;
}
