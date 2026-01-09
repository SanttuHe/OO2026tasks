#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum)
{
    std::srand(time(0));
    int oikea = std::rand() %maxnum + 1;
    int arvaus = 0;
    int arvauksia = 0;

    while(arvaus != oikea){
        std::cout << "Arvaa luku: ";
        std::cin >> arvaus;
        arvauksia++;

        if(arvaus < oikea){
            std::cout << "Liian pieni\n";
        }else if(arvaus > oikea){
            std::cout << "Liian suuri\n";
        }else{
            std::cout << "Oikein\n";
            return arvauksia;
        }

    }
    return arvauksia;
}
int main(){
    int tulos = game(40);
    std::cout << "Arvausten maara: " << tulos;
    return 0;
}
