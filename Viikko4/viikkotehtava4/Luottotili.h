#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(const std::string& omistaja, double luottoraja);

    bool withdraw(double amount)override;
    bool deposit(double amount)override;

private:
    double m_luottoraja;
};
#endif
