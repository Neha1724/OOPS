#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    
    Student(int rollNo, string name) : rollNo(rollNo), name(name) {}

    
    void displayStudentDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Exam : public Student {
private:
    int marks[5]; 

public:
    
    Exam(int rollNo, string name, int marks[]) : Student(rollNo, name) {
        for (int i = 0; i < 5; i++) {
            this->marks[i] = marks[i];
        }
    }


    void displayExamDetails() {
        displayStudentDetails(); 
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class Result : public Exam {
private:
    int total;
    float avg;

public:
    
    Result(int rollNo, string name, int marks[]) : Exam(rollNo, name, marks) {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        avg = total / 5;
    }

    
    void displayResult() {
        displayExamDetails(); 
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    int marks[] = {80, 75, 85, 90, 95};
    Result result(11, "XYZ", marks);
    result.displayResult();
    return 0;
}

