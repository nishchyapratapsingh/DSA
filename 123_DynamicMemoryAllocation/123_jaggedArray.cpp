//Store marks of students in multiple subjects using jagged array

#include<iostream>
using namespace std;

int main() {

    int nStudents;
    cin >> nStudents;

    int** jaggedArray = new int*[nStudents];

    int *nSubjects = new int[nStudents];

    for (int i=0; i<nStudents; i++) {
        cin>>nSubjects[i];
    }

    for (int i=0; i<nStudents; i++) {
        jaggedArray[i] = new int[nSubjects[i]];
    }

    for (int i=0; i<nStudents; i++) {
        for (int j=0; j<nSubjects[i]; j++) {
            cin>>jaggedArray[i][j];
        }
    }

    for (int i=0; i<nStudents; i++) {
        for (int j=0; j<nSubjects[i]; j++) {
            cout<<jaggedArray[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<nStudents; i++) {
        delete [] jaggedArray[i];
    }

    delete [] jaggedArray;
    delete [] nSubjects;

    return 0;
}