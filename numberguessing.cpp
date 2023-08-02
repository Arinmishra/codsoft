#include<iostream>    //for input/output operations
#include<ctime>      //for working with time
#include<cstdlib>   //for generating random numbers
using namespace std;

int main(){
    
    // we use srand(time(0)); to seed the random number generator. By using the current time as the seed, we ensure that the random numbers generated are different in each run of the program.
    
    srand(time(0));   

    // define the range of the numbers(from 1 to 100 in this case)
    
    int minNumber = 1;
    int maxNumber = 100;

    // rand()%(maxNumber - minNumber + 1) + minNumber is used to generate a random number within a specified range.
    // rand() returns a random integer, and we use the % operator to restrict the value within our desired range (maxNumber - miNumber + 1), then we add minNumber to shift the range to start from the desired minimum value.

    int secretNumber = rand() % (maxNumber - minNumber + 1) + minNumber;

    // variables to store the player's guess and the number of attempts

    int guess;
    int maxAttempts = 7;    //maximum number of attempts allowed
    int attempts = 0;

    cout<<endl<<"Welcome to The Number Guessing Game!"<<endl;
    cout<<endl<<"Try to guess a number between "<< minNumber <<" and "<< maxNumber <<"."<<endl;
    cout<<endl<<"You have "<< maxAttempts <<" attempts to guess a number."<<endl;

    // main game loop

    do{
        cout<<"Attempts left: "<<maxAttempts - attempts <<endl;
        cout <<endl<< "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess == secretNumber){
            cout<<"Congratulations! You guessed the correct number in "<<attempts<<" attempts!"<<endl;
        }
        else if(guess < secretNumber){
            cout<<"Wrong! guess higher. try again."<<endl;
        }
        else{    
            cout<<"Wrong! guess lower. try again."<<endl;    
        }
    }
    while(guess != secretNumber && attempts < maxAttempts);
    if(guess != secretNumber){
        cout<<"You lost!! you've run out of attempts. The secret number was: "<< secretNumber <<endl;
    }

    return 0;
    
}