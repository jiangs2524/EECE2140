#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    // cout << "Hello, World!" << endl;

    // int num1 = -10, num2 = 3.0;
    // cout << "addition: " << num1 + num2 << endl;

    int num3, num4;
    // cout << num3;
    // cout << "Enter two numbers: ";
    // cin >> num3 >> num4;

    // cout << "num3: " << num3 << " | num4: " << num4 << endl;
    // cout << "divsion: " << num3 << "/" << num4 << " = " << num3 / num4 << endl;

    // int num5;
    // cout << "please enter an integer so that i can extract the lsd: ";
    // cin >> num5;
    // if (num5 < 0) 
    // {
    //     num5 = -num5;
    // }
    // cout << "the lsd of " << num5 << " is: " << num5 % 10 << endl;


    // int op_code, operand1, operand2;
    // cout << "please select your operation (0:+, 1:-, 2:*, 3:/): ";
    // cin >> op_code; 
    // cout << "please enter two operands: ";
    // cin >> operand1 >> operand2;
    // if op_code == 0 {
    //     cout << "result: " << operand1 + operand2 << endl;
    // } else if (op_code == 1) {
    //     cout << "result: " << operand1 - operand2 << endl;
    // } else if (op_code == 2) {
    //     cout << "result: " << operand1 * operand2 << endl;
    // } else if (op_code == 3) {
    //     cout << "result: " << operand1 / operand2 << endl;
    // } else {
    //     cout << "invalid operation code" << endl;

    // }
    int grade;
    cout << "please enter your numerical grade: ";
    cin >> grade;
    if (grade >= 90) {
        cout << "your letter grade is: A";
    } else if (grade >= 80) {
        cout << "your letter grade is: B";
    } else if (grade >= 70) {
        cout << "your letter grade is: c";
    } else if (grade >= 60) {
        cout << "your letter grade is: D";
    }else {
        cout << "your letter grade is: F";
    }

    cout << endl;

    return 0;
}
