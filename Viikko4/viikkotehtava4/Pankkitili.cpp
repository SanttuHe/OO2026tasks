#include "Pankkitili.h"

Pankkitili::Pankkitili(const std::string& omistaja, double saldo)
    : m_omistaja(omistaja), m_saldo(saldo)
{
    if(m_saldo < 0.0)
    {
        m_saldo = 0.0;
    } //Varmistan ettei saldo tipu negatiiviseksi
}

bool Pankkitili::deposit(double amount)
{
    if(amount < 0.0){
        return false;
    }
    m_saldo += amount;
    return true;
}


bool Pankkitili::withdraw(double amount)
{
    if(amount < 0.0){
        return false;
    }
    if (amount > m_saldo){
        return false;
    }

    m_saldo -= amount;
    return true;
}


double Pankkitili::getBalance() const
{
    return m_saldo;
}
