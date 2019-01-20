#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int intDayOfWeek=0;
	string strDayOfWeek;
	cout<<"Please Enter an integer:";
	cin>>intDayOfWeek;
	switch(intDayOfWeek){
		case 1:
			strDayOfWeek="Monday";
			break;
			case 2:
				strDayOfWeek="Teusday";
			break;
				case 3:
					strDayOfWeek="Wednesday";
			break;
					case 4:
						strDayOfWeek="Thursday";
			break;
						case 5:
							strDayOfWeek="Friday";
			break;
							case 6:
								strDayOfWeek="Saturday";
			break;
								case 7:
								strDayOfWeek="Sunday";
			break;
									default:
			strDayOfWeek="unknown!";
	}
	cout<<"Day of the week is:"<<strDayOfWeek<<'\n';
} 
