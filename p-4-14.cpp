#include <iostream>
using namespace std;

class MyClass
{
	public:
    	MyClass()
		{
        	cout << "Object created" << endl;
    	}

    	~MyClass()
		{
        	cout << "Object destroyed" << endl;
    	}
};

int main() 
{
    MyClass obj1;

    {
        MyClass obj2;
}
    cout<<"sani zalavadiya";
    cout<<"22013031807";
    return 0;
}

