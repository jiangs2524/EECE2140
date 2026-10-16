#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

float print_int(int& num); 
// // pass by value means the computer creates another copy of the number which isnt space effcient.
// // with big numbers you should pass by reference

// void process_rand(int max_val, int min_val, int& num_pos, int& num_neg, float& avg) {
//     int cur_rand;
//     float total = 0.0;
//     bool verbose = true;
    
    

//     for (int k = 0; k < 10; k++) {
//         cur_rand = rand() % (max_val - min_val + 1) + min_val;
//         if (cur_rand >= 0) {
//             num_pos++;
//         } else {
//             num_neg++;
//         }
//         total += cur_rand;
//         if (verbose)
//             cout << cur_rand << " | ";


//     }
//     if (verbose)
//         cout << endl;
// }




int main() {
    // int pos = 0, neg = 0, cur_max = 6, max_in, min_in;
    // float avg;

    // cout << "Please enter the upper bound and then the lower bound." << endl;
    // cin >> max_in, min_in;

    // process_rand(max_in, min_in, pos, neg, avg);

    // cout << "Current Max:" << cur_max << "Number of pos " << pos << "Number of Negatives" << neg << "The average of the numbers" << avg << endl;


    // int number = -4;
    // cout << "the original value is " << number << endl;

    int numbers[9];
    for (int i = 0; i < 9; i++){
        cout << numbers[i] << " | ";
    }   


    return 0;
}






float print_int(int num) {
    cout << "the integer is: " << num << endl;
    num++;
    return num* num;
}






