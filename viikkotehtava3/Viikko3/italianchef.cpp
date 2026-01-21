#include "italianchef.h"
#include <iostream>
#include <algorithm>
using namespace std;

ItalianChef::ItalianChef(string name)
    :Chef(name), password("pizza"){
    cout << "ItalianChef " << chefName << " constructed\n";
}

ItalianChef::~ItalianChef(){
    cout << "ItalianChef " << chefName << " destructed\n";
}

bool ItalianChef::askSecret(string pw, int flour, int water){
    if(pw.compare(password)== 0){
        int pizzas = makePizza(flour, water);
        cout << "ItalianChef " << chefName << " makes pizza: " << pizzas << "\n";
        return true;
    }else{
        cout << "Vaara salasana\n";
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water){
    return min(flour / 5, water / 5);
}
