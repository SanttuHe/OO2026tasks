#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <string.h>
#include "Luottotili.h"
#include "Pankkitili.h"

class Asiakas{
public:
    Asiakas(const std::string& nimi, double luottoraja);

    void showSaldo()const;

    bool talletus(double amount);
    bool nosto(double amount);

    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);

    bool tiliSiirto(double amount, Asiakas& vastaanottaja);

private:
    std::string m_nimi;
    Pankkitili m_pankkitili;
    Luottotili m_luottotili;
};

#endif // ASIAKAS_H
