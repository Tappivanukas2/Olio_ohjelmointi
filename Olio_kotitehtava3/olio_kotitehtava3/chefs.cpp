#include "chefs.h"
#include <string>
#include <iostream>
using namespace std;

Chef::Chef(string n){
    cout << "Chef " << n << " konstruktori" << endl;
    name = n;
}
Chef::~Chef(){
    cout << "Chef " << Chef::name << " destruktori" << endl;
}
void Chef::makeSalad(){
    cout << "Chef " << Chef::name << " makes salad." << endl;
}
void Chef::makeSoup(){
    cout << "Chef " << Chef::name << " makes soup." << endl;
}
string ItalianChef::getName(){
    return name;
}
void ItalianChef::makePasta(){
    cout << "Chef " << ItalianChef::name << " makes pasta with special recipe." << endl;
    cout << "Chef" << ItalianChef::name << "uses jauhot = " << ItalianChef::jauhot << endl;
    cout << "Chef" << ItalianChef::name << "uses vesi = " << ItalianChef::vesi << endl;
}

ItalianChef::ItalianChef(string m,int jauhot, int vesi) : Chef::Chef(m){
    cout << "Chef " << name << " konstruktori" << endl;
    name = getName();
    ItalianChef::vesi = vesi;
    ItalianChef::jauhot = jauhot;
}
