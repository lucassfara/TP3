# TP3
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;
    int b;
    string res;

    while (a!=NULL) {

    cout << "Seleccione tema: \n 1.Matematicas \n 2.Historia\n" << endl;
    cin >> a;

    if (a==1) {

        system ("cls");
        cout << " Cuanto es 1 + 1? \n\n";
        cin >> b;

            if (b==2) {
                cout << "Respuesta Correcta \n\n";
            }

            else {
                cout << "Respuesta Incorrecta \n\n";
            }}

    if (a==2) {
        system ("cls");
        cout << " Capital de Buenos Aires? \n\n";
        cin >> res;

            if (res== "Laplata") {
               cout << "Respuesta Correcta \n\n";
            }

            else {
               cout << "Respuesta Incorrecta \n\n";
            }}}



    return 0;
}
