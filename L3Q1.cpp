#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int age;
    int Class;
    int marks[6];
    float grade;
    bool gradeFlag;

public:
    // Default constructor
    Student() {
        cout << "Object created" << endl;
    }

    // Parameterized constructor
    Student(int r, string n, int a = 10, int c = 5) {
        roll = r;
        name = n;
        age = a;
        Class = c;
    }

    // Copy constructor
    Student(const Student &obj) {
        roll = obj.roll;
        Class = obj.Class;
        age = obj.age;
        name = obj.name;
    }

    // Function to take user inputs for marks
    void inputMarks() {
        cout << "Enter marks (6 subjects): ";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    // Function to display student details
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Class: " << Class << endl;
        cout << "Marks: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    void check() {
        int g;
        cout << "Enter 1 for grade on the scale of 1 to 10 and 2 for percentage: ";
        cin >> g;
        gradeFlag = (g == 1) ? true : false;
    }

    float computeGrade() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }

        check();

        if (gradeFlag) {
            grade = (sum / 600.0) * 10;
        } else {
            grade = (sum / 600.0) * 100;
        }
        return grade;
    }
};

int main() {
    Student s(12, "ABC", 16, 10);
    s.inputMarks();
    s.display();
    float y = s.computeGrade();
    cout << "Grade = " << y << endl;
    return 0;
}

