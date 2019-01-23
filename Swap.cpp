#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a, b, temp;
	cout<<"please enter two integer: "<<endl;
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"a: "<<a<<'\t'<<"b: "<<b;
}
