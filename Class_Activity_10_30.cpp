#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

struct Address {
    string city;
    string state;
    int zip;
};


struct Employee{
    string name;
    int age;
    float salary;
    Address add;
};

struct Student
{
    string name;
    float grades[NUM_EMPLOYEE];
    float gpa;
    Address add;

};

const int NUM_EMPLOYEE = 2;
const int NUM_GRADES =5;

void update_student(Student& s) {
    int count = 0;
    float total = 0;

    for (int k = 0; k < NUM_GRADES; k++) {
        if (s.grades[k] > 0) {
            total += s.grades[k];
            count++;
        }
    }
    s.gpa = (count > 0) ? total / count : 0

}

void find_gpas(Student s[], int size) {
    int count;
    float total;
    for (int i = 0; i < size; i++) {
        count = 0;
        total = 0;

        for (int k = 0; k < NUM_GRADES; k++) {
            if (s.grades[k] > 0) {
                total += s.grades[k];
                count++;
            }
        }
        s.gpa = (count > 0) ? total / count : 0;

    }
}


struct Shape
{
    float perimeter;
    float area;
    char type;
    float side_radius;
};

void sizes(Shape& s) {
    if (s.type == 's') {
        s.area = 
        s.perimeter = 
    } else if (s.type == 'c') {
        s.area = 
        s.perimeter = 
    }
}




int main() {




    // Student s5[2];
    // s5[0].grades[0] = 3.1;
    // s5[0].grades[1] = 2.8;

    // s5[1].grades[0] = 2.3;
    // s5[1].grades[1] = 2.8;

    // cout << s5[0].gpa << " | " << s5[1].gpa << endl;

    // find_gpas(s5, 2);
    
    



    // Student s1 = {"Katie", {3.4, 3.8}, 2.1, {"Somerville", "MA", 2145}};
    // cout << "GPA Before Function call: " << s1.gpa << endl;
    // update_student(s1);
    // cout << "GPA After Function call: " << s1.gpa << endl;



    // Address a1[2] = {
    //     {"Boston", "MA", 2128},
    //     {"Austin", "TX", 77456}
    // };

    // for (int k = 0; k < 2; k++) {
    //     cout << a1[k].city << ", " << a1[k].state << " | " << a1[k].zip << endl;
    // }


    // Student s1 = {"Katie", {3.4, 3.8, 2.1}, 3.1, {"Somerville", "MA", 2145}};

    // int count = 0;
    // float total = 0;
    // for (int k = 0; k < 5; k++) {
    //     if (s1.grades[k] > 0) {
    //         total += s1.grades[k];
    //         count++;
    //     }
    // }
    // s1.gpa = (count > 0) ? total / count : 0;
    // s1.gpa = total / 5;
    // cout << "Name: " << s1.name << " | GPA: " << s1.gpa << endl;

    // Employee e3[NUM_EMPLOYEE];

    // for (int k = 0; k < NUM_EMPLOYEE; k++) {
    //     cout << "Please enter the name of the " << (k+1) << "th employee";
    //     cin >> e3[k].name;

    //     cout << "Please enter the age of the " << (k+1) << "th employee";
    //     cin >> e3[k].age;

    //     cout << "Please enter the salary of the " << (k+1) << "th employee";
    //     cin >> e3[k].salary;

    //     cout << "Please enter the city of the " << (k+1) << "th employee";
    //     cin >> e3[k].add.city;
    // }

    // for (int k = 0; k < NUM_EMPLOYEE; k++) {
    //     cout << "Employee " << (k+1) << ": " << e3[k].name << " of " << e3[k].add.city << " ("
    //         << e3[k].age << "years old) receives $" << e3[k].salary << "per year" << endl; 
    // }

    // Employee e1, e2 = {"Bob", 23, 432.5, {"medford", "MA", 2155}};

    // e1.name = "john";
    // e1.age = 40;
    // e1.salary = 123.4;
    // e1.add.city = "Boston";
    // e1.add.state = "MA";
    // e1.add.zip = 2129;

    // cout << "Name: " << e1.name << "| Age: " << e1.age << " | salary: " << e1.salary << endl;
    // cout << "Address: " << e1.add.city << " of " << e1.add.state << " (" << e1.add.zip << ")" << endl;
    // cout << "Name: " << e2.name << "| Age: " << e2.age << " | salary: " << e2.salary << endl;
    // cout << "Address: " << e2.add.city << " of " << e2.add.state << " (" << e2.add.zip << ")" << endl;

    return 0;
}