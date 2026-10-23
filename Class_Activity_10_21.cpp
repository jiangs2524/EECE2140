#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int len = 5;

void print_array(int array[], int size) {
    for (int k = 0; k < size ; k++) {
        cout << array[k];
    }
}

bool greater_array(const int array1[], const int array2[], int size) {
    for (int k = 0; k < size; k++) {
        if (array1[k] < array2[k]) {
            return true;
        } else if (array1[k] > array2[k]) {
            return false;
        }
    }
}




int main() {
    // last class overview:
    // if you want a function to have multiple outputs you can pass by reference so the function 
    // looks like it has x amount of outputs.
    // pass by reference is memory effcient because you dont have to create a copy.
    // In c you can make arrays as individuals.
    // int array1[5] = {};
    // int array1[5] = {-1, 4}; // makes the first elemetn -1 and the second 4
    // for ( int k = 0; k < 5; k++) { 
    //     // in c you have to do start(0) to size - 1. if you do this 
    //     // it would cause it to print out random numbers in array.
    //     cout << array1[k] << " | ";
    // }


    // int array2[len];
    // for (int k = 0; k < len; k++) {
    //     cout << "enter element " << k+1 << ": ";
    //     cin >> array2[k];
    // }
    // srand(time(0));

    // int array3[len];
    // for (int k = 0; k < len; k++)
    //     array3[k] = rand() % 10 + 1;

    // for ( int k = 0; k < len; k++) { 
    //     // in c you have to do start(0) to size - 1. if you do this 
    //     // it would cause it to print out random numbers in array.
    //     cout << array3[k] << " | ";
    // }

    // for (int k = 0; k < len; k++)


    int array1[] = {2, 3, 5};
    int array2[] = {2, 3, 4};
    cout << greater_array(array1, array2, 3) << endl;


    return 0;
}
