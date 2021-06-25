#include<iostream>
using namespace std;

class A{
	private:
		int i1,i2;
		float f1,f2;
		
	public:
		void swap_function(int i1, int i2){
			i1 = i1+i2;
			i2 = i1-i2;
			i1 = i1-i2;
			cout<<i1<<"\t"<<i2<<endl;
		}
		
		void swap_function(float f1, float f2){
			f1 = f1+f2;
			f2 = f1-f2;
			f1 = f1-f2;
			cout<<f1<<"\t"<<f2<<endl;
		}
};

int main(){
	A a;
	a.swap_function(10,20);
	a.swap_function(11.2f,12.3f);
	return 0;
}