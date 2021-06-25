#include <iostream>
using namespace std;

class A{
    private: int a;
    public:
    friend A read(A);
    friend int get(A);
};
class B{
    private: int a;
    public:
    friend B read(B);
    friend int get(B);
};
class C{
    private: int a;
    public:
    friend C read(C);
    friend int get(C);
};
A read(A x){
    int item;
    cout<<"Enter the value of a in A class : ";
    cin>>item;
    x.a=item;
    return x;
}
int get(A x){
    return x.a;
}
B read(B x){
    int item;
    cout<<"Enter the value of a in class B: ";
    cin>>item;
    x.a=item;
    return x;
}
int get(B x){
    return x.a;
}
C read(C x){
    int item;
    cout<<"Enter the value of a in class C: ";
    cin>>item;
    x.a=item;
    return x;

}
int get(C x){
    return x.a;
}
int main(){
    A first;    //declaring object of Class A
    B second;   //declaring object of Class B
    C third;    //declaring object of Class c
    first=read(first);
    second=read(second);
    third=read(third);
    cout<<"The value for a in class A : "<<get(first);
    cout<<"\nThe value for a in class B : "<<get(second);
    cout<<"\nThe value for a in class C : "<<get(third);
    return 0;
}