#ifndef CHEFS_H
#define CHEFS_H
#include <string>
using namespace std;
class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};
class ItalianChef: public Chef
{
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta();
private:
    int vesi;
    int jauhot;
};

#endif // CHEFS_H
