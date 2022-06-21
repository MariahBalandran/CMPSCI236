/******************************************************************************

                                Mariah Balandran

*******************************************************************************/

#include <iostream>

using namespace std;

void show(double[]);

int main() {
    double rates[9]  = {6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

    show(rates);
    
    return 0;
}

void show(double rates[]) {

    for (int i = 0; i < 9; i++) {
        cout << "\n*(rates + " << i << ") is " << *rates++;
    }
}