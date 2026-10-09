#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int my_factorial(int num) {

    int fact = 1;
    for (int j = 1; j <= num; j++) {
        fact *= j;
    }
    return fact;
}

float find_approximation_exp(float x0, int num_terms) {
    float exp_approximation2 = 1.0;
    float cur_term = 1.0;
    for (int k = 1; k < num_terms; k++) {
        cur_term *= x0 / k;
        exp_approximation2  += cur_term;
    }

    return exp_approximation2;
}

int main() {

    // float x0 = .5, exp_approximation1 = 0.0;
    // int num_terms = 3;

    // int num = 5, fact = 1;
    // for (int j = 1; j <= num; j++) {
    //     fact *= j;

    // }

    // cout << num << "! = " << fact << endl;

    // int fact = 1;
    // float cur_term;
    // for (int k = 0; k < num_terms; k++) {
        
    //     for (int j = 2; j <= k; j++)
    //         fact *= j;
    //     float cur_term = pow(x0, k) / fact;
    //     exp_approximation += cur_term;
    // }

    


    // float exp_approximation2 = 1.0;
    // float cur_term = 1.0;
    // for (int k = 1; k < num_terms; k++) {
    //     cur_term *= x0 / k;
    //     exp_approximation2  += cur_term;
    // }

    // cout << "Exact Value: " << exp(x0) << "\nApproximated Value:\t" << exp_approximation2 << endl;


    // int x0 = 5;
    // int result = my_factorial(x0);
    // cout << x0 << "! = " << result << endl;

    float exp_approx = find_approximation_exp(0.3,4);

    cout << exp_approx << endl;


    // return 0;

    
}