#include<stdio.h>
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
void get_info(struct loginer_t a, FILE *fp){
	if (fscanf(fp, "%s\n%s\n%d %d %d\n%d\n", &a.id, &a.psw, &a.last.year, 
		&a.last.mon, &a.last.day, &a.login_times) == EOF){
		printf("get info fail\n");
		exit(1);
	}
	if  (a.i1 == admin){
		if (fscanf(fp, "%s\n", &a.m1.emgy) == EOF){
			printf("get info fail\n");
			exit(1);
		}
	}
	else {
		if (fscanf(fp, "%d %d %d\n%d\n%d\n", &a.m1.u1.regis.year, &a.m1.u1.regis.mon, 
			&a.m1.u1.regis.day, &a.m1.u1.win_times, &a.m1.u1.lose_times) == EOF){
			printf("get info fail\n");
			exit(1);
		}
	}
}
main(){}