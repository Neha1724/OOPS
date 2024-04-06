#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll_no;
    string name;

public:
    
    void set_data(int roll, string student_name) {
        this->roll_no = roll;
        this->name = student_name;
    }

    
    void print_data() {
        cout << "\nStudent with roll number " << this->roll_no << " and name " << this->name;
    }
};

int main() {
    
    Student s1, s2, s3;

    
    s1.set_data(1, "Anne");
    s2.set_data(2, "Bille");
    s3.set_data(3, "Charlie");

    
    s1.print_data();
    s2.print_data();
    s3.print_data();

    return 0;
}
