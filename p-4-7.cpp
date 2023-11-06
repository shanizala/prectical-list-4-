#include<iostream>
using namespace std;

class get{
	private:
		int number1,number2,result;
	public:
		get(){
		cout<<"Enter your first number :";
		cin>>number1;
		cout<<"Enter your second number :";
		cin>>number2;
		result=number1+number2;
		}	
		friend void display(get& g);	
};
void display(get& g){
		cout<<"Your sum of given number ::"<<g.result;
}
int main()
{
	get g;
	display(g);
	    cout<<"sani zalavadiya";
            cout<<"22013031807";
	return 0;
}

