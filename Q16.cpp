#include <iostream>
#include <string>

using namespace std;

class Child {
private:
    string name;
    double height;
    int age;

public:
    Child(const string& name, double height, int age) : name(name), height(height), age(age) {}

    double getHeight() const {
        return height;
    }

    int getAge() const {
        return age;
    }

    string getName() const {
        return name;
    }
};

int main() {
    const int numChildren = 3; 
    Child** children = new Child*[numChildren];

    
    children[0] = new Child("ABC", 120.5, 5);
    children[1] = new Child("BCA", 115.2, 4);
    children[2] = new Child("CAB", 130.0, 6);

    
    Child* max_height_child = children[0];
    for (int i = 1; i < numChildren; ++i) {
        if (children[i]->getHeight() > max_height_child->getHeight()) {
            max_height_child = children[i];
        }
    }

    
    Child* youngest_child = children[0];
    for (int i = 1; i < numChildren; ++i) {
        if (children[i]->getAge() < youngest_child->getAge()) {
            youngest_child = children[i];
        }
    }

    
    cout << "Child with maximum height: " << max_height_child->getName() << endl;
    cout << "Youngest child: " << youngest_child->getName() << endl;

    
    for (int i = 0; i < numChildren; ++i) {
        delete children[i];
    }
    delete[] children;

    return 0;
}
