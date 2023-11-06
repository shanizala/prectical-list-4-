//p-13 Write a C++ program to demonstrate use of Destructor.
#include<iostream>
using namespace std;
class student
{
	public:
			student()
			{
				cout<<"constructor invoked"<<endl;
			}
			~student()
			{
				cout<<"destructor invoked"<<endl;
			}
};
int main()
{
	student s1;
	student s2;
	    cout<<"sani zalavadiya";
    cout<<"22013031807";
	return 0;

}
