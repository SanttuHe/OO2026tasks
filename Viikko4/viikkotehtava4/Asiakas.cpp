#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(const std::string& nimi, double luottoraja)
    : m_nimi(nimi),
    m_pankkitili(nimi, 0.0),
    m_luottotili(nimi, luottoraja)
{
}

void Asiakas::showSaldo() const
{
    std::cout << m_nimi << ":\n";
    std::cout << "  Pankkitili: " << m_pankkitili.getBalance() << "\n";
    std::cout << "  Luottotili: " << m_luottotili.getBalance() << "\n";
}

bool Asiakas::talletus(double amount)
{
    return m_pankkitili.deposit(amount);
}

bool Asiakas::nosto(double amount)
{
    return m_pankkitili.withdraw(amount);
}

bool Asiakas::luotonNosto(double amount)
{
    return m_luottotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount)
{
    return m_luottotili.deposit(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas& vastaanottaja)
{
    if (amount < 0.0) {
        return false;
    }


    if (!m_pankkitili.withdraw(amount)) {
        return false;
    }

    if (!vastaanottaja.m_pankkitili.deposit(amount)) {

        m_pankkitili.deposit(amount);
        return false;
    }

    return true;
}
