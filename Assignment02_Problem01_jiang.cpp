#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

int main() {
    int menu = 0;
    
    do {
        cout << "1.) Run the length and sequence input and decode as you implemented.\n";
        cout << "2.) Explanation of translation.\n";
        cout << "3.) Exit";
        cout << endl;
        cin >> menu;
        switch(menu) {
            case(1): {
                int length;
                string word;
                    

                cout << "How many numbers are in the secret sequence: ";
                cin >> length;
                cout << endl;
                while (length <= 0) {
                    cout << "You have entered an invalid amount please enter again: ";
                    cin >> length;
                    cout << endl;
                }
                    
                for( ; length > 0 ; length--) {
                    int number;
                    cout << "what is the next number in your sequence: ";
                    cin >> number;
                    char letter = ('A' + (number -1)); 
                    word += letter;
                }

                cout << "Your secret word is: " << word << endl;
            }
                break;
            case(2): 
                cout << "This is a basic translation with the English alphabet where 1 is A and 2 is B and so forth." << endl; 
            
                break;
            
            case(3): 
                cout << "You have exited." << endl;
                return 0;
            
                break;
            
            default:
                cout << "Invalid menu option." << endl;
        }
        
    } while (true);

    return 0;
}