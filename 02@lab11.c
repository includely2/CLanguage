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
main()
{
	struct loginer_t a[1000];
	char temp1[16] = "admin", 
		temp2[16] = "ASDF1234",
		temp3[12] = "13123456789";

	strcpy(&a[0].id, temp1);
	strcpy(&a[0].psw, temp2); 
	a[0].last.year = 2014;
	a[0].last.mon = 12;
	a[0].last.day = 22;
	a[0].login_times = 0;
	a[0].i1 = admin;
	strcpy(&a[0].m1.emgy, temp3);
}