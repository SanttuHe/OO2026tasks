#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>

class Pankkitili
{
  public:
    explicit Pankkitili(const std::string& omistaja, double saldo = 0.0);

    virtual ~Pankkitili() = default;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    double getBalance() const;


protected:
    std::string m_omistaja;
        double m_saldo;
};
#endif
