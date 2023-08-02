#include<iostream>
#include<string>
using namespace std;


// We define a constant max_students to set the maximum number of students that can be managed by the program.
const int max_students = 100;

int main(){

    // We create two arrays: names to store student names and grades to store their corresponding grades.

    string names[max_students];
    double grades[max_students];

    int numStudents;
    double totalGrades = 0.0;
    double highestGrade = 0.0;
    double lowestGrade = 100.0;

    cout << "Welcome to The Student Grade Management Prpgram!"<<endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // We check if the entered number of students is valid (greater than 0 and not exceeding max_students). If not, an error message is displayed, and the program returns with an error code of 1.

    if(numStudents <= 0 || numStudents > max_students){
        cout << "Invalid number of students. Please try again."<<endl;
        return 1;
    }

    // Using a for loop, we take input for each student's name and grade. We also calculate the total grades and keep track of the highest and lowest grades encountered so far.

    for(int i = 0; i < numStudents; i++){
        cout << "Enter name for student " << i + 1 << ":";
        cin.ignore();
        getline(cin, names[i]);

        cout << "Enter grade for student " << i + 1 << ":";
        cin >> grades[i];

        totalGrades += grades[i];

        if(grades[i] > highestGrade){
            highestGrade = grades[i];
        }

        if(grades[i] < lowestGrade){
            lowestGrade = grades[i];
        }
    }

    // we calculate the average grade by dividing the total grades by the number of students.

    double averageGrade = totalGrades / numStudents;

    // Finally, we display the results, including the number of students, average grade, highest grade, and lowest grade.

    cout << "==== Grade Report ====" << endl;
    cout << "Number of Students: " << numStudents << endl;
    cout << "Aversge Grade: "<< averageGrade << endl;
    cout << "Highest Grade: "<< highestGrade <<endl;
    cout << "Lowest Grade: "<< lowestGrade <<endl;

    return 0;
}