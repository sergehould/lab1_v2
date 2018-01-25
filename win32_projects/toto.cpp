#include <stdio.h>
typedef struct {
	  char 	month;
	  char 	day;
	  int 	year;
}date;

void set_date(date * pdate,char mth, char day, int yr){
	
	pdate->day=day;
	pdate->month=mth;
	pdate->year=yr;
}
void reset_date(date * pdate){
	pdate->day=0;
	pdate->month=0;
	pdate->year=0;
}

//class Cdate{
//	public:
//		char 	month;
//		char 	day;
//		int 	year;
//};

class Cdate{
	public:
		char 	month;
		char 	day;
		int 	year;
		void set_date(char mth, char dy, int yr){
			month=mth;
			day=dy;
			year=yr;
		}
		void reset_date(void){
			month=0;
			day=0;
			year=0;
		}
};

void main(void){
	date current_date;
	Cdate Ocurrent_date;

	Ocurrent_date.set_date(4,5,2015);
	printf("Odate:%d, %d, %d \n",Ocurrent_date.day,Ocurrent_date.month, Ocurrent_date.year);
	Ocurrent_date.reset_date();
	printf("Odate:%d, %d, %d \n",Ocurrent_date.day,Ocurrent_date.month, Ocurrent_date.year);
	set_date(&current_date,2,3,2015);
	printf("date:%d, %d, %d \n",current_date.day,current_date.month, current_date.year);
	reset_date(&current_date);
	printf("date:%d, %d, %d ",current_date.day,current_date.month, current_date.year);
	while(1){
	}
}