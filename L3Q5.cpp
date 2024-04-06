#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    
    void getDate(int &d, int &m, int &y) {
        d = day;
        m = month;
        y = year;
    }
};

int main() {
    
    Date myDate(11, 3, 2024);

    
    int day, month, year;
    myDate.getDate(day, month, year);
    cout << "\nDate: " << day << "/" << month << "/" << year << endl;

    
    myDate.setDate(12, 4, 2025);


    myDate.getDate(day, month, year);
    cout << "\nUpdated Date: " << day << "/" << month << "/" << year << endl;

    return 0;
}

