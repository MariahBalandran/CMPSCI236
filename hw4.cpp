/******************************************************************************

                                Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void fillOutput(ofstream&);
void gradeReport();

int main() {
    
    ofstream outFile;
    
    outFile.open("grade.dat");
    
    if (outFile.fail()) {
        cout << "The file was unsuccessfully opened" << endl;
        exit(1);
    }
    
    fillOutput(outFile);
    
    gradeReport();

    outFile.close();
    
    return 0;
    
}

void fillOutput(ofstream& filename){
    
    for (int i = 0; i < 3; i++){
        filename << "2333021" << "\n";
        filename << "BOKOW, R." << "\n";
        
        if (i == 0){
            filename << "NS201" << "\n";
            filename << "3" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        } else if (i == 1) {
            filename << "MG342" << "\n";
            filename << "3" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        } else {
            filename << "FA302" << "\n";
            filename << "1" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        }
    }
    
    for (int i = 0; i < 4; i++){
        filename << "2574063" << "\n";
        filename << "FALLIN, D." << "\n";
        
        if (i == 0){
            filename << "MK106" << "\n";
            filename << "3" << "\n";
            filename << "C" << "\n";
            filename << "\n";
        } else if (i == 1) {
            filename << "MA208" << "\n";
            filename << "3" << "\n";
            filename << "B" << "\n";
            filename << "\n";
        } else if (i == 2) {
            filename << "CM201" << "\n";
            filename << "3" << "\n";
            filename << "C" << "\n";
            filename << "\n";
        } else {
            filename << "CP101" << "\n";
            filename << "2" << "\n";
            filename << "B" << "\n";
            filename << "\n";
        }
    }
    
    for (int i = 0; i < 5; i++){
        filename << "2663628" << "\n";
        filename << "KINGSLEY, M." << "\n";
        
        if (i == 0){
            filename << "QA140" << "\n";
            filename << "3" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        } else if (i == 1) {
            filename << "CM245" << "\n";
            filename << "3" << "\n";
            filename << "B" << "\n";
            filename << "\n";
        } else if (i == 2) {
            filename << "EQ521" << "\n";
            filename << "3" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        } else if (i == 3) {
            filename << "MK341" << "\n";
            filename << "3" << "\n";
            filename << "A" << "\n";
            filename << "\n";
        } else {
            filename << "CP101" << "\n";
            filename << "2" << "\n";
            filename << "B" << "\n";
            filename << "\n";
        }
    }
    
}

void gradeReport() {
    
    cout << "Student Name: BOKOW, R." << "\n";
    cout << "Student ID Number: 2333021" << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    cout << "NS201                   3                A     " << "\n";
    cout << "MG342                   3                A     " << "\n";
    cout << "FA302                   1                A     " << "\n";
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: 7" << "\n";
    cout << "Semester GPA: 4.0" << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
    
    cout << "Student Name: FALLIN, D." << "\n";
    cout << "Student ID Number: 2574063" << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    cout << "MK106                   3                C     " << "\n";
    cout << "MA208                   3                B     " << "\n";
    cout << "CM201                   3                C     " << "\n";
    cout << "CP101                   2                B     " << "\n";
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: 11" << "\n";
    cout << "Semester GPA: 2.5" << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
    
    cout << "Student Name: KINGSLEY, M." << "\n";
    cout << "Student ID Number: 2663628" << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    cout << "QA140                   3                A     " << "\n";
    cout << "CM245                   3                B     " << "\n";
    cout << "EQ521                   3                A     " << "\n";
    cout << "MK341                   3                A     " << "\n";
    cout << "CP101                   2                B     " << "\n";
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: 14" << "\n";
    cout << "Semester GPA: 3.6" << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
    
}