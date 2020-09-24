#include <stdio.h>
#include <string.h>
int main() {
	int dd, mm, yy;
	
	int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

	
	char week[7][4];  // string week[7]  week[0] = "Sun".....
	
	strcpy(week[0], "Sun");
	strcpy(week[1], "Mon");
	strcpy(week[2], "Tue");
	strcpy(week[3], "Wed");
	strcpy(week[4], "Thr");
	strcpy(week[5], "Fri");
	strcpy(week[6], "Sat");
	
	int baseDay = 1;
	int baseMonth = 1;
	int baseYear = 2019;
	int baseWeek = 2;
	int result;
	int day_month=0,count_month=1,day_year=0;
	int last_day;
	
	scanf("%d %d %d",&yy, &mm, &dd);
	
	for(int count_year=1;count_year<yy;count_year++)
	{
		if((count_year%4==0)&&(count_year%100!=0)||(count_year%400==0)==1)
			day_year+=366;
		else
			day_year+=365;
	}
	
	if((yy%4==0)&&(yy%100!=0)||(yy%400==0)==1)
		month[2]=29;
	for(count_month=0;count_month<mm;count_month++)
	{
		day_month+=month[count_month];
	}
	
	last_day=day_year+day_month+dd;

	if(last_day%7==1)
	printf("%s",week[1]);

	else if(last_day%7==2)
	printf("%s",week[2]);

	else if(last_day%7==3)
	printf("%s",week[3]);

	else if(last_day%7==4)
	printf("%s",week[4]);

	else if(last_day%7==5)
	printf("%s",week[5]);

	else if(last_day%7==6)
	printf("%s",week[6]);

	else if(last_day%7==0)
	printf("%s",week[0]);

}
