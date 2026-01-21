#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string name): chefName(name) {
     cout << "Chef " << chefName << " constructed\n";
}

Chef::~Chef(){
    cout << "Chef " << chefName << " destructed\n";
}

int Chef::makeSalad(int ingredients){
    int portions = ingredients / 5;
    cout << "Chef " << chefName << " makes salad: " << portions << "\n";
    return portions;
}

int Chef::makeSoup(int ingredients){
    int portions = ingredients / 3;
    cout << "Chef " << chefName << " makes soup: " << portions << "\n";
    return portions;
}
