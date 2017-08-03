#include<stdio.h>
int leapyear( unsigned int year){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)return 1;
	else return 0;
}/* 1 yes, 0 no */
int daybef(int year, int month, int day){
	int a = 0;
	if (leapyear(year))
	{
		if (month == 1)a = day;
		else if (month == 2)a = day + 31;
		else if (month == 3)a = day + 31 + 29;
		else if (month == 4)a = day + 31 + 29 + 31;
		else if (month == 5)a = day + 31 + 29 + 31 + 30;
		else if (month == 6)a = day + 31 + 29 + 31 + 30 + 31;
		else if (month == 7)a = day + 31 + 29 + 31 + 30 + 31 + 30;
		else if (month == 8)a = day + 31 + 29 + 31 + 30 + 31 + 30 +31;
		else if (month == 9)a = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
		else if (month == 10)a = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		else if (month == 11)a = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		else if (month == 12)a = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		return a;
	}
	else 
	{
		if (month == 1)a = day;
		else if (month == 2)a = day + 31;
		else if (month == 3)a = day + 31 + 28;
		else if (month == 4)a = day + 31 + 28 + 31;
		else if (month == 5)a = day + 31 + 28 + 31 + 30;
		else if (month == 6)a = day + 31 + 28 + 31 + 30 + 31;
		else if (month == 7)a = day + 31 + 28 + 31 + 30 + 31 + 30;
		else if (month == 8)a = day + 31 + 28 + 31 + 30 + 31 + 30 +31;
		else if (month == 9)a = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		else if (month == 10)a = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		else if (month == 11)a = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		else if (month == 12)a = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		return a;
	}		
}
int dayaft(int year, int month, int day){
	if (leapyear(year))return (366 - daybef(year, month, day));
	else return (365 - daybef(year, month, day));
}
main()
{
	int year1, year2, month1, month2, day1, day2, a = 0;
	scanf("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);
	if (year1 == year2)
		a = daybef(year2, month2, day2) - daybef(year1, month1, day1);
	else
	{
		a = dayaft(year1, month1, day1) + daybef(year2, month2, day2);
		for (++year1; year1 < year2; ++year1)
			if (leapyear(year1))a +=366;
			else a += 365; 
	}
	printf("%d\n", a);
}