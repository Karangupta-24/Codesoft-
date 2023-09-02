#include <iostream>

#include <ctime>

#include <cstdlib>

using namespace std;

int main() {

srand(time(0)); 

int randomNumber=rand()%100+1; 

int userGuess;

int attempts=0;

cout<<"Welcome to the Number Guessing Game!"<<endl;

do {

cout<<"Enter your guess Number between (1-100): ";

cin>>userGuess;

attempts++;

if(userGuess<randomNumber){

cout<<"Guess Number is too low! Try again."<<endl;

} else if(userGuess > randomNumber){

cout<<"Guess Number is too high! Try again."<<endl;

} else {

cout<<"Congratulations! You guessed the correct Number ("<<

randomNumber <<") in " << attempts << " attempts." << endl;

}

} while(userGuess!=randomNumber);

return 0;
}
