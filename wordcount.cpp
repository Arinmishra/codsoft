#include<iostream>   //for input/output operations
#include<fstream>    //for file handling
#include<string>     //for working with strings
using namespace std;

int main(){

    // We create variables fileName to store the name of the input text file, wordCount to keep track of the total number of words, and word to temporarily store each word read from the file.

    string fileName;
    int wordCount = 0;
    string word;

    cout<<"Welcome to the Word Count Program!"<<endl;
    cout<<"Enter the name of the text file: ";
    cin>>fileName;

    // We open the file using the ifstream (input file stream) object named inputFile.

    ifstream inputFile(fileName);

    // We check if the file was successfully opened using the if (!inputFile) condition.

    if(!inputFile){
        cout<<"Error: Unable to open file."<<endl;
        return 1;
    }

    // Using a while loop, we read each word from the file using the >> operator, and we increment the wordCount for each word encountered.

    while(inputFile >> word){
        wordCount++;
    }

    // After reading all words, we close the file using the inputFile.close() function.

    inputFile.close();

    // Finally, we display the total word count to the user.
    
    cout<<"Total word count: "<<wordCount<<endl;

    return 0;
}