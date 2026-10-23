#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int size = 4;

// void gen_rand_array(int arrayp[], int size, int upper = 0, int lower = 10) {
//     srand(time(0));
//     for (int k = 0; k < 0; k++) {
//         array[k] = rand() % (upper - lower + 1) + lower;
//     }
// }


// int array_config(const int array1[], const int array2[], int size, int& dot_total[], int& total) {
//     for (int k = 0; k < size; k++) {
//         total = total + array1[k] + array2[k];
//         dot_total[k] = dot_total[k] + array1[k] * array2[k];
//     }
//     return 0;
// }

int print_matrix(int matrix[][5], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j]; << " ";
            if ()
            

        }
    }
}

void gen_rand_matrix(int matrix[][5], int rows, int cols, int lower = 10, int upper = 0) {
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % (upper - lower + 1) + lower;
        }
    }
}

void print_matrix(int mat[][5], int rows, int cols) {
    cout << "[";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j];
            if (j < cols - 1) 
                cout << ", ";
        }
        if ( i < rows - 1)
            cout << "], ";
        else
            cout << "]" << endl;
    }    
}


int main() {
    srand(time(0));
    // int array1[] = {1, 1, 1, 1};
    // int array2[] = {1, 1, 1, 1};
    // int sum[4], total;
    // array_config(array1, array2, size, sum, total);
    // cout << "The sum of the arrays is: " << total;
    // cout << "The dot product of the arrays is: " << sum; // cant do this because arrays are essentially pointers
    // cout << endl;

    int array[3][5] = {{0}, {-1, 4}, {1, 3, -7, 0 ,5}};
    for ( int k = 0; k < 3; k++) {
        for (int j = 0; j < 5; j++) {
            cout << array[k][j] << " , ";
        }
        cout << endl;
    }

    // c++ is a row major programming language - it is processing effcient. The way it formats arrays is differently


    // processing a 2d array, asks to perform a operation row wise and colum wise, find the min of the first row next row and then next row until end
    // if it is 1 you find it across the colum and if 0 you find through colum
    // multiplying 2 arrays.


    // idea for project str += '-'; this concatenates.

    return 0;

}