#include "italianchef.h"


int main()
{
    ItalianChef chef ("Santtu");
    chef.makeSalad(20);
    chef.makeSoup(9);

    chef.askSecret("pizza", 25, 30);
    chef.askSecret("wrong", 25, 30);

    return 0;
}
