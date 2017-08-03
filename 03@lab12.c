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
void putb_info(struct loginer_t a, FILE *fp){
	struct loginer_t *p = &a;
	if (fwrite(p, sizeof(struct loginer_t), 1, fp) == EOF){
		printf("put info fail\n");
		exit(1);
	}
}
main(){}