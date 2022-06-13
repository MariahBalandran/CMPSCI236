/******************************************************************************

                                Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <numeric>

using namespace std;

void fillOutput(ofstream&);
void gradeReport(ifstream&);
void printReport1();
void printReport2();
void printReport3();
int id, units, total, count;
string name, course, line;
double average, grade, n;
char letter;
vector<string> courses1;
vector<double> units1;
vector<double> grades1;
vector<string> courses2;
vector<double> units2;
vector<double> grades2;
vector<string> courses3;
vector<double> units3;
vector<double> grades3;

int main() {
    
    ifstream inFile;
    ofstream outFile;
    
    outFile.open("grade.dat");
    
    if (outFile.fail()) {
        cout << "The file was unsuccessfully opened" << endl;
        exit(1);
    }
    
    fillOutput(outFile);
    
    outFile.close();
    
    inFile.open("grade.dat");
    
    if (inFile.fail()) {
        cout << "The file does not exist" << endl;
        exit(1);
    }
    
    gradeReport(inFile);

    inFile.close();
    
    
    return 0;
    
}

void fillOutput(ofstream& filename){
    
    for (int i = 0; i < 3; i++){
        filename << "2333021" << " ";
        filename << "BOKOW,R." << " ";
        
        switch (i) {
        case 0:
            course = "NS201";
            units = 3;
            letter = 'A';
            break;
        case 1:
            course = "MG342";
            units = 3;
            letter = 'A';
            break;
        case 2:
            course = "FA302";
            units = 1;
            letter = 'A';
            break;
        }
        
        switch (letter) {
        case 'A':
            grade = 4;
            break;
        case 'B':
            grade = 3;
            break;
        case 'C':
            grade = 2;
            break;
        case 'D':
            grade = 1;
            break;
        case 'F':
            grade = 0;
            break;
        }
        
        filename << course << " ";
        filename << units << " ";
        filename << letter;
        filename << "\n";
        
        courses1.push_back(course);
        units1.push_back(units);
        grades1.push_back(grade);
    }
    
    for (int i = 0; i < 4; i++){
        filename << "2574063" << " ";
        filename << "FALLIN,D." << " ";
        
        switch (i) {
        case 0:
            course = "MK106";
            units = 3;
            letter ='C';
            break;
        case 1:
            course = "MA208";
            units = 3;
            letter = 'B';
            break;
        case 2:
            course = "CM201";
            units = 3;
            letter = 'C';
            break;
        case 3:
            course = "CP101";
            units = 2;
            letter = 'B';
            break;
        }
        
        switch (letter) {
        case 'A':
            grade = 4;
            break;
        case 'B':
            grade = 3;
            break;
        case 'C':
            grade = 2;
            break;
        case 'D':
            grade = 1;
            break;
        case 'F':
            grade = 0;
            break;
        }
        
        filename << course << " ";
        filename << units << " ";
        filename << letter;
        filename << "\n";
        
        courses2.push_back(course);
        units2.push_back(units);
        grades2.push_back(grade);
    }
    
    for (int i = 0; i < 5; i++){
        filename << "2663628" << " ";
        filename << "KINGSLEY,M." << " ";
        
        switch (i) {
        case 0:
            course = "QA140";
            units = 3;
            letter ='A';
            break;
        case 1:
            course = "CM245";
            units = 3;
            letter = 'B';
            break;
        case 2:
            course = "EQ521";
            units = 3;
            letter = 'A';
            break;
        case 3:
            course = "MK341";
            units = 3;
            letter = 'A';
            break;
        case 4:
            course = "CP101";
            units = 2;
            letter = 'B';
            break;
        }
        
        
        switch (letter) {
        case 'A':
            grade = 4;
            break;
        case 'B':
            grade = 3;
            break;
        case 'C':
            grade = 2;
            break;
        case 'D':
            grade = 1;
            break;
        case 'F':
            grade = 0;
            break;
        }
        
        filename << course << " ";
        filename << units << " ";
        filename << letter;
        filename << "\n";
        
        courses3.push_back(course);
        units3.push_back(units);
        grades3.push_back(grade);
    }
    
}

void gradeReport(ifstream& filename) {
    
    if (filename.is_open()) {
        
        while (filename >> id >> name >> course >> units >> letter) {
        
            if (id == 2333021) {
                n = 3;
                total = accumulate(units1.begin(),units1.end(), 0);
                average = (accumulate(grades1.begin(),grades1.end(), 0.00))/n;
                
                if(count == 0){
                    printReport1();
                }
            }
            
            if (id == 2574063) {
                n = 4;
                total = accumulate(units2.begin(),units2.end(), 0);
                average = (accumulate(grades2.begin(),grades2.end(), 0.00))/n;
                
                if(count == 4){
                    printReport2();
                }
            }
            
            if (id == 2663628) {
                n = 5;
                total = accumulate(units3.begin(),units3.end(), 0);
                average = (accumulate(grades3.begin(),grades3.end(), 0.00))/n;
                
                if(count == 8){
                    printReport3();
                }
                
            }
            
            count++;
        
    }
        
    }
    
}

void printReport1(){
    
    cout << "Student Name: " << name << "\n";
    cout << "Student ID Number: " << id << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    for (int i = 0 ; i < n; i++){
        
        if (grades1[i] < 1) {
            letter = 'F';
        } else if (grades1[i] < 2) {
            letter = 'D';
        } else if (grades1[i] < 3) {
            letter = 'C';
        } else if (grades1[i] < 4) {
            letter = 'B';
        } else {
            letter = 'A';
        }
        
        cout << courses1[i] << "                        " << units1[i] << "                " << letter <<"     " << "\n";
    }
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: " << total << "\n";
    cout << "Semester GPA: " << average << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

void printReport2(){
    
    cout << "Student Name: " << name << "\n";
    cout << "Student ID Number: " << id << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    for (int i = 0 ; i < n; i++){
        
        if (grades2[i] < 1) {
            letter = 'F';
        } else if (grades2[i] < 2) {
            letter = 'D';
        } else if (grades2[i] < 3) {
            letter = 'C';
        } else if (grades2[i] < 4) {
            letter = 'B';
        } else {
            letter = 'A';
        }
        
        cout << courses2[i] << "                        " << units2[i] << "                " << letter <<"     " << "\n";
    }
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: " << total << "\n";
    cout << "Semester GPA: " << average << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

void printReport3(){
    
    cout << "Student Name: " << name << "\n";
    cout << "Student ID Number: " << id << "\n";
    
    cout << "\n";
    
    cout << "Course Code       Course Credits   Course Grade" << "\n";
    cout << "_______________________________________________" << "\n";
    
    for (int i = 0 ; i < n; i++){
        
        if (grades3[i] < 1 && grades3[i] >= 0) {
            letter = 'F';
        } else if (grades3[i] < 2) {
            letter = 'D';
        } else if (grades3[i] < 3) {
            letter = 'C';
        } else if (grades3[i] < 4) {
            letter = 'B';
        } else {
            letter = 'A';
        }
            
        
        cout << courses3[i] << "                        " << units3[i] << "                " << letter <<"     " << "\n";
    }
    
    cout << "\n";
    
    cout << "Total Semester Course Credits Completed: " << total << "\n";
    cout << "Semester GPA: " << average << "\n";
    
    cout << "\n";
    cout << "\n";
    cout << "\n";
}
