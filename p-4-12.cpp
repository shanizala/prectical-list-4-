#include <iostream>
using namespace std;
class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    MyClass(const MyClass& other) {
        data = other.data;
        cout << "Copy constructor called" << endl;
    }

    void displayData() {
        cout << "Data in MyClass: " << data << endl;
    }
};

int main() {
   
    MyClass original(42);

    MyClass copied= original;

    original.displayData();
    copied.displayData();
    cout<<"22013031807";


    return 0;
}

