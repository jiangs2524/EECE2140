#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// float find_avg_min(int num_se, char type = 'a') {
//     if (type == 'a' && num_se > 0) {
//         float total = 0;
//         for ( ; num_se ; num_se--) {
//             float num;
//             cout << "what is the number coming up next: ";
//             cout << endl;
//             cin >> num;
//             total += num;
//         }

//         return (total/num_se);

//     } else if (type == 'm' && num_se > 0) {
//         float curr_num;
//         for ( ; num_se ; num_se--) {
//             float num;
            
//             cout << "what is the number coming up next: ";
//             cout << endl;
//             cin >> num;
//             if (num < curr_num) {
//                 curr_num = num;
//             }
//         }

//         return curr_num;
//     } 

// }


int isprime(int n) {
    if (n <= 1)
        return 2;
    for (int i = 2; i < n; i++) {
        int div;
        div = (n % i);
        if (div == 0) {
            cout << n << "is a prime number.";
            return 1;
        }
    }

    cout << n << "is not a prime number";
    return 0;
}

void find_primes(int min_val, int max_val) {
    int count = 0;
    for (int k = min_val; k <= max_val; k++) {
        
    }
}

int main() {
    // float a;
    // int num;
    // char type;
    // cout << "How many numbers do you want to take the min or average of: " << endl;
    // cin >> num;
    // cout << endl;
    // cout << "If you want to take a minimum please type m \n if you want to take an average please type a" << endl;
    // cin >> type;
    // a = find_avg_min(num, type);
    // if (type = 'a') {
    //     cout << "The average of the number is: " << a << endl;
    // } else if (type == 'm') {
    //     cout << "The minimum of the number is: " << a << endl;
    // } else {
    //     cout << "You either entered an invalid number character.";
    // }





}