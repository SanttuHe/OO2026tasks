#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>
using namespace std;

class Seuraaja{
private:
    string nimi;


public:
    Seuraaja* next;

    Seuraaja(string n);
    string getNimi();
    void päivitys(const string& viesti);
};



#endif // SEURAAJA_H
