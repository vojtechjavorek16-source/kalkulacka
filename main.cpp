#include <iostream>
#include <string>
using namespace std;

int main(){
    double cislo1 = 0;
    double cislo2 = 0;
    char op = '0';
    double vysledek = 0;

    cout << "co chces s číslem udělat?:  (+ , - , : nebo *)";
    cin >> op;

    cout << "zadej první číslo: ";
    cin >> cislo1;
    cout << "zadej druhé číslo: ";
    cin >> cislo2;

    if (op == '-'){
        vysledek = cislo1 - cislo2;
        cout << "výsledek je " << vysledek;
    }else if (op == '+'){
        vysledek = cislo1 + cislo2;
        cout << "výsledek je " << vysledek;
    }else if (op == ':'){
        vysledek = cislo1 / cislo2;
        cout << "výsledek je " << vysledek;
    }else if (op == '*'){
        vysledek = cislo1 * cislo2;
        cout << "výsledek je " << vysledek;
    }
    else{
        cout << "špatně zadaný znak";
        return 1;
    }



    return 0;
}
