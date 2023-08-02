#include<iostream>
using namespace std;

int main(){
    double num1, num2, result;
    char operation;

    cout << "Welcome to the Basic Calculator Program!" << endl;

    cout << "Enter the First Number: ";
    cin >> num1;

    cout << "Enter the operation (+, -, *, /)";
    cin >> operation;

    cout << "Enter the Second Number: ";
    cin >> num2;

    switch(operation){
        case('+') :
        result = num1 + num2;
        break;

        case('-') :
        result = num1 - num2;
        break;

        case('*') :
        result = num1 * num2;
        break;

        case('/') :
        if(num2 !=0){
            result = num1 / num2;
        }
        else{
            cout << "Error: division by zero is not allowed!" << endl;
        }

        default:
        cout << "Error: invalid operation."<<endl;
    }

    cout << "Result: " << result <<endl;

    return 0;
}