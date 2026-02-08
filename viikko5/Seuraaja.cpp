#include "Seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(std::string n) : nimi(n), next(nullptr){}

std::string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::päivitys(const std::string& viesti){
    std::cout << nimi << " sai viestin: " << viesti << std::endl;
}
