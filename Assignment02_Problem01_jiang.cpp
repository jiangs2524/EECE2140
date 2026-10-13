#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

char NumToChar(int num) {
    if (num == 1) {
        return 'A';
    } else if (num == 2) {
        return 'B';
    } else if (num == 3) {
        return 'C';
    } else if (num == 4) {
        return 'D';
    } else if (num == 5) {
        return 'E';
    } else if (num == 6) {
        return 'F';
    } else if (num == 7) {
        return 'G';
    } else if (num == 8) {
        return 'H';
    } else if (num == 9) {
        return 'I';
    } else if (num == 10) {
        return 'J';
    } else if (num == 11) {
        return 'K';
    } else if (num == 12) {
        return 'L';
    } else if (num == 13) {
        return 'M';
    } else if (num == 14) {
        return 'N';
    } else if (num == 15) {
        return 'O';
    } else if (num == 16) {
        return 'P';
    } else if (num == 17) {
        return 'Q';
    } else if (num == 18) {
        return 'R';
    } else if (num == 19) {
        return 'S';
    } else if (num == 20) {
        return 'T';
    } else if (num == 21) {
        return 'U';
    } else if (num == 22) {
        return 'V';
    } else if (num == 23) {
        return 'W';
    } else if (num == 24) {
        return 'X';
    } else if (num == 25) {
        return 'Y';
    } else if (num == 26) {
        return 'Z';
    } else {
        return '?';
    }


}

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
                    word += NumToChar(number);
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