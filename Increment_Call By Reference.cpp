#include <iostream>
#include <conio.h>
using namespace std;
void increment(int &);
main(){
	int a;
	cout<<"please enter an integer: "<<endl;
	cin>>a;
	increment(a);
	cout<<a;
}
void increment(int &i){
	++i;
}
