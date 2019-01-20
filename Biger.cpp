#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int intVar1, intVar2, intVar3, max;
	cout<<"please Enter 3 integer:\n";
	cin>>intVar1>>intVar2>>intVar3;
	max=intVar1;
	if (intVar2>max) max=intVar2;
	if (intVar3>max) max=intVar3;
	cout<<"the max is: " <<max;
}	
 

