#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class ItalianChef : public Chef
{
private:
    std::string password;
    int makePizza(int flour, int water);

public:
    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string pw, int flour, int water);
};

#endif
