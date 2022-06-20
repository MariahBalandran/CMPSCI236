/******************************************************************************

                              Mariah Balandran

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str;
    int i = 0, notLower = 0, notUpper = 0, spaceCount = 0;
    
    cout << "Enter original string: ";
    getline(cin, str, '.');
    cout << "\n";
    
    
    for (i = 0; i < str.length(); i++) {
        
        if (i == 0) {
            if (!(isupper(str[0]))) {
                str[0] = toupper(str[0]);
                notUpper++;
            }
            
        } 
        
        if (i > 0) {
            if (isalpha(str[i])) {
                if (!(islower(str[i]))) {
                    str[i] = tolower(str[i]);
                    notLower++;
                }
            }
            
        }
        
        if (i > 1) {
            if (isspace(str[i])) {
                if (isspace(str[i - 1]) || str[i - 1] == '\0') {
                    str[i] = '\0';
                    spaceCount++;
                }
            }
        }
        
    }
    
    cout << "Here's your corrected string: " << str << "." << "\n\n";
    cout << "There were " << notUpper << " incorrectly lowercased characters." << "\n";
    cout << "There were " << notLower << " incorrectly uppercased characters." << "\n";
    cout << "There were " << spaceCount << " spaces too many." << "\n";

    return 0;
}