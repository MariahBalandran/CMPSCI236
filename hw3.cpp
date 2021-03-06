/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


int main(){
    
    vector<double> grade;
    double userIn = 0;
    string letter;
    char belowAve;
    double sum = 0;
    
    cout << "Enter grades: \n";
  
    while (userIn >= 0) {
        cin >> userIn;
        if (userIn >= 0 && userIn <= 100) {
            grade.push_back(userIn);
        }
    }
    
    sum = accumulate(grade.begin(),grade.end(), 0.00);
    
    cout << "\n";
    
    cout << "Sum: " << sum << "\n";
    
    cout << "\n";
    
    cout << "Average: " << sum/grade.size() << "\n";
    
    cout << "\n";
    
    sort(grade.begin(),grade.end());
    
    for (int i = 0; i < grade.size(); i++){
        
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
            
            
            if (grade[i] < (sum/grade.size())){
                belowAve = '*';
            } else {
                belowAve = '\0';
            }
            
            cout << belowAve << grade[i] << letter << "\n";
            
        }
        
    }
    
    
    return 0;
}
    