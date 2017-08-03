#include<stdio.h>
#include<time.h>
struct date_t{
	int year;
	int month;
	int day;
};
struct info_t{
	char *id[16];
	char *psw[16];
	struct date_t orig;
	struct date_t last;
};
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
int date_delta(struct date_t *a, struct date_t *b){
	/* 前面的日期早，后面的日期迟 */
	int year1 = a -> year,
		year2 = b -> year,
		month1 = a -> month, 
		month2 = b -> month,
		day1 = a -> day,
		day2 = b -> day,
		delta = 0;
	if (year1 <= year2 && month1 <= month2 && day1 <= day2)
	{
		if (year1 == year2)
			{
				delta = daybef(year2, month2, day2) - daybef(year1, month1, day1);
				return delta;
			}
		delta = dayaft(year1, month1, day1) + daybef(year2, month2, day2);
		for (++year1; year1 < year2; ++year1)
		{
			if (leapyear(year1))delta +=366;
			else delta += 365;
		}
		return delta;
	}
	else printf("前面的日期早，后面的日期迟\n");
}
main()
{
	struct date_t orig = {2014, 9, 1};
	struct date_t last;
	struct info_t user;
	time_t rawtime;
	struct tm *timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	last.year = timeinfo -> tm_year + 1900;
	last.month = timeinfo -> tm_mon + 1;
	last.day = timeinfo -> tm_mday;
	printf("enter id, password\n");
	scanf("%s", &user.id);
	scanf("%s", &user.psw);
	printf("%d\n", date_delta(&orig, &last));
}