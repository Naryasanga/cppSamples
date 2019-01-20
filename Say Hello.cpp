#include <iostream>
#include <conio.h>
using namespace std;
string Hello(string);
main(){
	string FName;
	cin>>FName;
	cout<<Hello(FName);
}
string Hello(string FN){
	return "Hello "+FN;
}
