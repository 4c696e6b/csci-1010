// Link Parrish
// CSCI-1010-002
// Assignment 8, Question 1
// this program runs a function that calculates the gpa of an array of letter grades

#include <iostream>

using namespace std;

double compute_GPA(char grades[], int size);

int main() {

    const int sizeA = 8;
    const int sizeB = 12;

    char studentA[sizeA] = {'A', 'A', 'B', 'A', 'D', 'C', 'A', 'A'};
    char studentB[sizeB] = {'B', 'B', 'D', 'F', 'A', 'A', 'B', 'A', 'A', 'D', 'A', 'B'};
    
    double gpaA = compute_GPA(studentA, sizeA);
    double gpaB = compute_GPA(studentB, sizeB);

    cout << "Student A's GPA: " << gpaA << endl;
    cout << "Student B's GPA: " << gpaB << endl;

    return 0;
}

double compute_GPA(char grades[], int size) {

    double gpa = 0;

    for (int i = 0; i < size; i++) {

        switch (grades[i]) {

            case 'A': {
                gpa += 4;
                break;
            }

            case 'B': {
                gpa += 3;
                break;
            }

            case 'C': {
                gpa += 2;
                break;
            }

            case 'D': {
                gpa += 1;
                break;
            }

            case 'F': {
                gpa += 0;
                break;
            }
        }
    }

        gpa /= size;
        return gpa;

}