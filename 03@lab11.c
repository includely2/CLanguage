#include<stdio.h>
#include<stdlib.h>
enum iden{user, admin};
enum state{offline, online, playing};
struct loginer_t{
	char id[16];
	char psw[16];
	struct date_t{
				int year;
				int mon;
				int day;
	}last;
	int login_times;
	enum iden i1;
	union more_t{
		char emgy[12];
		struct user_t{
			struct date_t regis;
			enum state s1;
			int win_times;
			int lose_times;
		}u1;
	}m1;
};
void read_user(struct loginer_t a[], int n){
	int i;
	for (i = 1; i < n + 1; i++)
	{
		a[i].i1 = user;
		printf("Please enter ID\n");
		gets(a[i].id);
		printf("Please enter password\n");
		gets(a[i].psw);
		printf("Please enter last login date\n");
		scanf("%d", &a[i].last.year);
		scanf("%d", &a[i].last.mon);
		scanf("%d", &a[i].last.day);
		printf("Please enter login times\n");
		scanf("%d", &a[i].login_times);
		printf("Please enter register date\n");
		scanf("%d", &a[i].m1.u1.regis.year);
		scanf("%d", &a[i].m1.u1.regis.mon);
		scanf("%d", &a[i].m1.u1.regis.day);
		printf("Please enter win times\n");
		scanf("%d", &a[i].m1.u1.win_times);
		printf("Please enter lose times\n");
		scanf("%d", &a[i].m1.u1.lose_times);
	}
}
void sort(struct loginer_t a[], int n){
	int i, j;
	struct loginer_t t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n + 1 - i; j++)
		{
			if (a[j].m1.u1.regis.year > a[j + 1].m1.u1.regis.year)
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			else if (a[j].m1.u1.regis.year == a[j + 1].m1.u1.regis.year)
			{
				if (a[j].m1.u1.regis.mon > a[j + 1].m1.u1.regis.mon)
				{
					t = a[j];
					a[j] = a[j + 1];
					a[j + 1] = t;
				}
				else if (a[j].m1.u1.regis.mon == a[j + 1].m1.u1.regis.mon)
				{
					if (a[j].m1.u1.regis.day > a[j + 1].m1.u1.regis.day)
					{	
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
				}
			}
		}
	}
}
void print_user(struct loginer_t a[], int n){
	int i;
	for (i = 1; i < n + 1 && a[i].i1 == user; i++)
	{
		printf("ID ");
		puts(a[i].id);
		printf("password ");
		puts(a[i].psw);
		printf("last login date %d %d %d\n", a[i].last.year, a[i].last.mon, a[i].last.day);
		printf("login times %d\n", a[i].login_times);
		printf("register date %d %d %d\n", a[i].m1.u1.regis.year, a[i].m1.u1.regis.mon, a[i].m1.u1.regis.day);
		printf("win times %d\n", a[i].m1.u1.win_times);
		printf("lose times %d\n", a[i].m1.u1.lose_times);
	}
}
main()
{
	struct loginer_t a[1000];
	char temp1[16] = "admin", 
		temp2[16] = "ASDF1234",
		temp3[12] = "13123456789";
	int n;
	strcpy(&a[0].id, temp1);
	strcpy(&a[0].psw, temp2); 
	a[0].last.year = 2014;
	a[0].last.mon = 12;
	a[0].last.day = 22;
	a[0].login_times = 0;
	a[0].i1 = admin;
	strcpy(&a[0].m1.emgy, temp3);
	printf("Please enter the number of users\n");
	scanf("%d", &n);
	read_user(a, n);
	sort(a, n);
	print_user(a, n);
}