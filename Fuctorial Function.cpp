#include <iostream>
#include <conio.h>
using namespace std;
int Fact(int);
main(){
	int i;
	cout<<"please enter an integer: "<<endl;
	cin>>i;
	cout<<"integer Factorial: "<<'\n'<<Fact(i);
		
}
int Fact(int k){
	if(k==0 || k==1)
	return k;
	else
	return Fact (k-1)*k;

}
