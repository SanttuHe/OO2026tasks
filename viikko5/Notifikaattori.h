#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"



class Notifikaattori{
    private:
    Seuraaja* seuraajat;


public:
    Notifikaattori();
    void lisaa(Seuraaja* s);
    void poista(Seuraaja* s);
    void tulosta();
    void postita(const std::string& viesti);
};

#endif // NOTIFIKAATTORI_H
