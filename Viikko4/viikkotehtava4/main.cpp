#include <iostream>
#include "Asiakas.h"
using namespace std;

int main()
{
    // Luodaan kaksi asiakasta
    Asiakas asiakas1("Santtu", 1000.0);
    Asiakas asiakas2("Laura", 500.0);

    cout << "Alkutilanne:\n";
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    cout << "\nSanttu tallettaa 300 pankkitilille\n";
    asiakas1.talletus(300);

    cout << "\nSanttu nostaa 150 pankkitililta\n";
    asiakas1.nosto(150);

    cout << "\nSanttu nostaa luottoa 400\n";
    asiakas1.luotonNosto(400);

    cout << "\nTilisiirto 100 Santulta Lauralle\n";
    asiakas1.tiliSiirto(100, asiakas2);

    cout << "\nLopputilanne:\n";
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}
