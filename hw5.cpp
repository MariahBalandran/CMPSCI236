/******************************************************************************

                                Mariah Balandran

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void fillOutput(ofstream&);
void sortAlpha(ifstream&);
string name, pop, mayor;
int numCities;
vector<vector<string>> vect;
vector<string> row(3);
bool sortcol(const vector<string>&, const vector<string>&);


int main() {
    
    ifstream inFile;
    ofstream outFile;
    
    outFile.open("cities.txt");
    
    if (outFile.fail()) {
        cout << "The file was unsuccessfully opened" << endl;
        exit(1);
    }
    
    fillOutput(outFile);
    
    outFile.close();
    
    inFile.open("cities.txt");
    
    if (inFile.fail()) {
        cout << "The file does not exist" << endl;
        exit(1);
    }
    
    sortAlpha(inFile);

    inFile.close();
    
    
    return 0;
    
}

void fillOutput(ofstream& filename){
    
    cout << "How many cities will you be entering? ";
    
    cin >> numCities;
    
    cout << "\n";
    
    for (int i = 0; i < numCities; i++) {
        
        cout << "Enter city name, population, and mayor: ";
    
        cin >> name >> pop >> mayor;
        
        filename << name << " " << pop << " " << mayor << "\n";
        
    }
    
}

void sortAlpha(ifstream& filename) {
    
    if (filename.is_open()) {
        
        while (filename >> name >> pop >> mayor) {
            
            row[0] = name;
            row[1] = pop;
            row[2] = mayor;
        
            vect.push_back(row);
        
        }
        
    }
    
    sort(vect.begin(), vect.end(), sortcol);
    
    cout << "\nCities in alphabetical order:\n\n";
    
    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << "\n";
    }
    
}

bool sortcol(const vector<string>& v1, const vector<string>& v2) {
    return v1[0] < v2[0];
}