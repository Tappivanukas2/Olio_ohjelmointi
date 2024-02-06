#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
Game::Game(int i){
    maxNumber = i;
    playerGuess = 0;
    numOfGuesses = 1;
    srand(std::time(0));
    cout << "GAME CONSTRUCTOR: object initalized with "<< maxNumber <<" as maximum value" << endl;
}
Game::~Game(){
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::play(){
    randomNumber = (rand() % maxNumber);
    int loop = 0;
    while (loop == 0){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        if (playerGuess == randomNumber){
            loop = 1;
            printGameResult();
        }
        else if (playerGuess < randomNumber){
            cout << "Your guess is too small." << endl;
        }
        else {
            cout << "Your guess is too big." << endl;
        }
        numOfGuesses++;
    }
}
void Game::printGameResult(){
    cout << "Your guess is right = " << playerGuess << endl;
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses." << endl;
}
