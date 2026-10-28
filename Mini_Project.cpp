#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;





int tortoise_move(int& h_curpos) {
    int upper = 100;
    int lower = 1;
    int h_movement;

    h_movement = rand() % (upper - lower + 1) + lower;
    if(h_movement <= 10) {
        cout << "Sleep" << endl;
        return h_curpos;
    } else if (h_movement <= 30) {
        cout << "Big Hop" << endl;
        return (h_curpos += 8);
    } else if (h_movement <= 40) {
        cout << "Big Slip" << endl;
        return (h_curpos += -10);
    } else if (h_movement <= 80) {
        cout << "Small Hop" << endl;
        return (h_curpos += 1);
    } else if (h_movement <= 100) {
        cout << "Small Slip" << endl;
        return (h_curpos += -2);
    }
}

int hare_move(int t_curpos) {
    int upper = 120;
    int lower = 1;
    int t_movement;

    t_movement = rand() % (upper - lower + 1) + lower;
    if(t_movement <= 36) {
        cout << "fast plod" << endl;
        return (t_curpos += 3);
    } else if (t_movement <= 60) {
        cout << "slip" << endl;
        return (t_curpos += -6);
    } else if (t_movement <= 120) {
        cout << "slow plod" << endl;
        return (t_curpos += 1);
    }

    
    

}

string display_course(int t_pos, int h_pos, string& course) {
    for(int i = 1; i < 61; i++) {
        if(t_pos == h_pos && i == h_pos)
            course += "OUCH!!!";
        else if(i == t_pos)
            course += "T";
        else if(i == h_pos)
            course += "h";
        else
            course += "-";
    }

    cout << course;

}

int main() {
    srand(time(0));
    cout << "BANG! AND THEY'RE OFF!!!!!" << endl;
    display_course()



}