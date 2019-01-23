#include <iostream>
#include <conio.h>
using namespace std;
int increment(int);
int decrement(int);
int x=4, y=6;
int main(){
	x=increment(x);
	y=decrement(y);
	cout<<"increment: "<<x<<'\n'<<"decrement: "<<y;
}
int increment(int in){
	return ++in;
	}
int decrement(int de){
return --de;
}

