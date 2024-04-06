#include <iostream>
#include <string>
using namespace std;

class TEST {
private:
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

    int CALCNTR() {
        return (NoCandidate / 100) + 1;
    }

public:
    
    void SCHEDULE() {
        cout << "Enter Test Code: ";
        cin >> TestCode;
        cin.ignore(); 
        cout << "Enter Description: ";
        getline(cin, Description);
        cout << "Enter Number of Candidates: ";
        cin >> NoCandidate;

        CenterReqd = CALCNTR();
    }

    void DISPTEST() {
        cout << "Test Code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "Number of Candidates: " << NoCandidate << endl;
        cout << "Number of Centers Required: " << CenterReqd << endl;
    }
};

int main() {
    TEST test1;
    test1.SCHEDULE();
    test1.DISPTEST();

    return 0;
}
