#include <iostream>
#include <cstdlib>
using namespace std;
int game(int maxnum);
int game(int maxnum){
    int random_luku = 0; int luku = 0; int breaker = 0; int count = 1;
    srand(maxnum);
    random_luku = rand() % maxnum;
    cout << "arvaus: ";
    while(1){
        cin >> luku;
        if(luku == random_luku){
            cout << "oikea vastaus" << endl;
            break;
        }
        if(luku > random_luku){
            cout << "luku on pienempi" << endl;
            count = count + 1;
        }
        if(luku < random_luku){
            cout << "luku on suurempi" << endl;
            count = count + 1;
        }
        cout << "uusi arvaus: ";
    }
    return count;
}

int main(){
    cout << "Anna range: ";
    int maxnum; int count;
    cin >> maxnum;
    count = game(maxnum);
    cout << "Arvauksia meni: ";
    cout << count << endl;
    return 0;
}
