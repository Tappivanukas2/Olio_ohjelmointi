#include "chefs.h"

using namespace std;

int main()
{
    Chef chef1("Gordon");
    chef1.makeSalad();
    chef1.makeSoup();
    ItalianChef italianchef("Luigi", 250, 100);
    italianchef.makeSalad();
    italianchef.makeSoup();
    italianchef.makePasta();
    return 0;
}
