#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

void tortoise_move(int& t_curpos) {
    int movement = rand() % 100 + 1;
    
    if (movement <= 50) {
        cout << "Tortoise: Fast Plod" << endl;
        t_curpos += 3;
    } else if (movement <= 70) {
        cout << "Tortoise: Slip" << endl;
        t_curpos -= 6;
    } else {
        cout << "Tortoise: Slow Plod" << endl;
        t_curpos += 1;
    }

    if (t_curpos < 0) t_curpos = 0; 
}

void hare_move(int& h_curpos) {
    int movement = rand() % 100 + 1;

    if (movement <= 20) {
        cout << "Hare: Sleep" << endl;
    } else if (movement <= 40) {
        cout << "Hare: Big Hop" << endl;
        h_curpos += 9;
    } else if (movement <= 50) {
        cout << "Hare: Big Slip" << endl;
        h_curpos -= 12;
    } else if (movement <= 80) {
        cout << "Hare: Small Hop" << endl;
        h_curpos += 1;
    } else {
        cout << "Hare: Small Slip" << endl;
        h_curpos -= 2;
    }

    if (h_curpos < 0) h_curpos = 0; 
}

void display_course(int t_pos, int h_pos, string array[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == t_pos && i == h_pos)
            array[i] = "OUCH!!!";
        else if (i == t_pos)
            array[i] = "T";
        else if (i == h_pos)
            array[i] = "H";
        else
            array[i] = "-";
    }
}

void print_array(string array[], int size) {
    for (int k = 0; k < size; k++) {
        cout << array[k];
    }
    cout << endl; 
}

int main() {
    int tie = 0, h_win = 0, t_win = 0;
    srand(time(0));
    for(int i = 0; i < 50; i++) {
        
        int h_curpos = 0, t_curpos = 0, size = 60;
        string array1[60];
        
        cout << "BANG! AND THEY'RE OFF!!!!!" << endl;
        
        while (h_curpos < 59 && t_curpos < 59) {
            tortoise_move(t_curpos);
            hare_move(h_curpos);
            display_course(t_curpos, h_curpos, array1, size);
            print_array(array1, size);
        }

        if (t_curpos >= 59 && h_curpos >= 59) {
            cout << "IT'S A TIE!" << endl;
            tie += 1;
        }else if (t_curpos >= 59) {
            cout << "TORTOISE WINS!!! YAY!!!" << endl;
            t_win += 1;
        }
        else {
            cout << "HARE WINS. YUCH." << endl;
            h_win += 1;
        }

    }

    cout << "The turtle won " << t_win << " times." << endl;
    cout << "There was a tie " << tie << " times." << endl;
    cout << "The hare won " << h_win << " times." << endl;
    return 0;
}