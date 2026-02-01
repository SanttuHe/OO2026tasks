#include "Luottotili.h"
Luottotili::Luottotili(const std::string& omistaja, double luottoraja)
    : Pankkitili(omistaja, 0.0), m_luottoraja(luottoraja)
{
    if(m_luottoraja <0.0){
        m_luottoraja = 0.0;
    }
}

bool Luottotili::withdraw(double amount)
{
    if(amount < 0.0){
        return false;
    }

    if(m_saldo - amount < -m_luottoraja){
        return false;
    }

    m_saldo -= amount;
    return true;
}


bool Luottotili::deposit(double amount)
{
    if(amount < 0.0){
        return false;
    }
    if (amount + m_saldo > 0.0){
        return false;
    }

    m_saldo += amount;
    return true;
}

