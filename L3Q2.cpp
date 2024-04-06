#include <iostream>
#include <cstring>
using namespace std;

class Laptop {
private:
    char brand[10];
    char model[10];
    int ram;
    int hard_disk_size;
    double price;

public:
    Laptop() {
        cout << "Object created" << endl;
    }

    Laptop(char brand[10], char model[10], double price, int ram = 4, int hard_disk_size = 500) {
        strcpy(this->brand, brand);
        strcpy(this->model, model);
        this->price = price;
        this->ram = ram;
        this->hard_disk_size = hard_disk_size;
    }

   /* Laptop(char brand[10], char model[10], double prize ,int ram, int hard_disk_size) {
        strcpy(this->brand, brand);
        strcpy(this->model, model);
        this->ram = ram;
        this->hard_disk_size = hard_disk_size;
        this->price = price;
    }*/

    Laptop(const Laptop &obj) {
        strcpy(brand, obj.brand);
        strcpy(model, obj.model);
        ram = obj.ram;
        hard_disk_size = obj.hard_disk_size;
        price = obj.price;      
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Hard Disk Size: " << hard_disk_size << " GB" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Laptop l1;

    Laptop l3("Dell", "a", 800, 8, 1000);
    Laptop l4("Lenovo", "b", 1200);
    Laptop l5(l4);

    l3.display();
    l4.display();
    l5.display();

    return 0;
}

