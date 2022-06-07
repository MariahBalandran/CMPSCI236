/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>
using namespace std;
int convertdays();

int main()
{
    
    cout << convertdays() << endl;

    return 0;
}

int convertdays(){
    
    int month = 0;
    int day = 0;
    int year = 0;
    
    cout << "Enter a month: " << endl;
    cin >> month;
    
    cout << "Enter a day: " << endl;
    cin >> day;
    
    cout << "Enter a year: " << endl;
    cin >> year;
    
    int convert = year*10000 + month*100 + day;
    
    cout << "\n";
    
    return convert;
}