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
    // float grade; //float is 4 bytes of mem, double is 8 bytes of mem
    // cout << "please enter your numerical grade: ";
    // cin >> grade;
    // if (grade > 100 || grade <0) {
    //     cout << "The given grade of \"" << grade << "\" is out of range." << endl;
    // } else if (grade >= 90) {
    //     cout << "your letter grade is: A";
    // } else if (grade >= 80) {
    //     cout << "your letter grade is: B";
    // } else if (grade >= 70) {
    //     cout << "your letter grade is: c";
    // } else if (grade >= 60) {
    //     cout << "your letter grade is: D";
    // }else {
    //     cout << "your letter grade is: F";
    // }

    // cout << endl;

    // return 0;

// A && B is short circuit and/or. if A in A&&B is false, then B 
// will not be evaluated. if A in A||B is true, then B will not
// be evaluated because there is no need to evaluate B.

// test question, when you write else if (condition) without the currly braces, the next statement will be executed if the condition is true, but everything else after that it will be executed regardless of the condition. So it is a good practice to always use curly braces for if/else statements.
// char shape;
// float lr;
// float pi = 3.14;
// float area;

// cout << "Do you want to find the area of a square (s) or circle (c)" << endl;
// cin >> shape;
// cout << "please input the length of the square or radius of the circle" << endl;
// cin >> lr;

// if (shape == 's') {
//     area = (lr * lr);
// } else if (shape == 'c') {
//     area = pi * (lr*lr);
// } else 
//     cout << "you entered an invalid shape " << shape << endl;

// if (shape == 's') {
//     cout << "the area of the square is " << area << endl;
// } else if (shape == 'c')
//     cout << "the area of the circle is " << area << endl;

int x = 12, result;
// if (x>0)
//     result = 1;
// else 
//     result = -1;
result = (x>0) ? 1 : -1
cout << "x = " << x << " | result = " << result << endl;


}
