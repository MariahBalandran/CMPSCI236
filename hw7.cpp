/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int count = 0;
    int maxSize = 100;
    double userIn = 0;
    string letter;
    char belowAve;
    double sum = 0;
    
    double *grade = new double[maxSize];
    
    cout << "Enter grades: \n";
  
    while (userIn >= 0) {
        cin >> userIn;
        if (userIn >= 0 && userIn <= 100) {
            
            grade[count] = userIn;
            count++;
            
            if (count > maxSize) {
                break;
            }
        }
    }
    
    for (int i = 0; i <= count; i++) {
        sum = sum + grade[i];
    }
    
    cout << "\nSum: " << sum << "\n\n";
    
    cout << "Average: " << sum/count << "\n\n";
    
    for (int i = 0; i < count; i++){
        
        if (grade[i] >= 0 && grade[i] <= 100) {
            
            if (grade[i] >= 90 && grade[i] <= 100) {
                letter = " is an A";
            } else if (grade[i] >= 80 && grade[i] < 90) {
                letter = " is a B";
            } else if (grade[i] >= 70 && grade[i] < 80) {
                letter = " is a C";
            } else if (grade[i] >= 60 && grade[i] < 70){
                letter = " is a D";
            } else {
                letter = " is an F";
            }
            
            
            if (grade[i] < (sum/count)){
                belowAve = '*';
            } else {
                belowAve = '\0';
            }
            
            cout << belowAve << grade[i] << letter << "\n";
            
        }
        
    }
    
    return 0;
}
    