#include "Notifikaattori.h"
#include <iostream>

    Notifikaattori::Notifikaattori() : seuraajat(nullptr){}

void Notifikaattori::lisaa(Seuraaja* s){
    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja* s){
    if (!seuraajat)return;

    if (seuraajat == s){
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* ed = seuraajat;
    Seuraaja* nyk = seuraajat->next;

         while (nyk){
            if(nyk == s){
                 ed->next = nyk->next;
            return;
            }
            ed = nyk;
            nyk = nyk->next;
    }
}

void Notifikaattori::tulosta(){
    Seuraaja* ptr = seuraajat;
    while(ptr){
        std::cout << ptr->getNimi() << std::endl;
        ptr = ptr->next;
    }
}

void Notifikaattori::postita(const std::string& viesti) {
    Seuraaja* ptr = seuraajat;
    while (ptr) {
        ptr->päivitys(viesti);
        ptr = ptr->next;
    }
}
