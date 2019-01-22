#include <iostream>
#include <conio.h>
using namespace std;
int q, p=1, r=0, s;
int main(){
	cout<<"please inter an ineger:";
	cin>>q;
	for(int i=1; i<=q; i++){
	s=p;
	p=r;
	r=r+s;
	cout<<r<<'\t';
	}
	
} 
