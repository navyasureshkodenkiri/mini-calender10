/**
*
* @Name : ConvertCalendar.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-31
* @Released under : https://github.com/BaseMax/ConvertCalendar/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/ConvertCalendar
*
**/
#include "ConvertCalendar.h"

date gregorian2jalali(date input) {
	date result;
	int array[]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	if(input.year<=1600) {
		input.year-=621;
		result.year=0;
	}
	else {
		input.year-=1600;
		result.year=979;
	}
	int temp=(input.year>2)?(input.year+1):input.year;
	int days=((int)((temp+3)/4)) + (365*input.year) - ((int)((temp+99)/100)) - 80 + array[input.month-1] + ((int)((temp+399)/400)) + input.day;
	result.year+=33*((int)(days/12053)); 
	days%=12053;
	return result;
}
