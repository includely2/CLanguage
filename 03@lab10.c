#include<stdio.h>
struct date_t{
	int year;
	int month;
	int day;
}
struct date_t read_date(struct date_t *a){
	printf("enter year, month, day\n");
	scanf("%d", &(a->year));
	scanf("%d", &(a->month));
	scanf("%d", &(a->day));
	return *a;
}
main(){}