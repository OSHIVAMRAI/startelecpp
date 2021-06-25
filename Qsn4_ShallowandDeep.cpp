#include<iostream>
using namespace std;

class A{
	private:
		int x,y;
	
	public:
		A(int a, int b){
			x = a;
			y = b;
		}
		
		A(A& a){
			x = a.x;
			y = a.y;
		}
		
		void display(){
			cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
		}
};

int main(){
	int n1,n2;
	cout<<"Enter n1 and n2\n";
	cin>>n1 >>n2;
	
	A a(n1, n2);
	a.display();
	
	cout<<"shallow copy:\n";
	A a1 = a; // shallow copy
	a1.display();
	
	cout<<"Deep copy:\n";
	A a2(a); // deep copy
	a2.display();
	return 0;
}