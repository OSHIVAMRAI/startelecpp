#include<iostream>
using namespace std;

class A{
	private:
		A(){
			cout<<"Private constructor\n";
		}
		friend class B;
};

class B{
	public:	
		B(){
			A obj;
			cout<<"public constructor\n";
		}
};

int main(){
	B obj1;
	return 0;
}