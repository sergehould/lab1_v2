#include <stdio.h>
#include <iostream>

using namespace std;
class CBox // Class definition at global scope
{
	public:
	double m_Length; // Length of a box in inches
	double m_Width; // Width of a box in inches
	double m_Height; // Height of a box in inches

	// Function to calculate the volume of a box
	double volume()
	{
	return m_Length * m_Width * m_Height;
	}
};

class Circle {
		double radius;
	public:
		void set(double r) { radius = r; }
		double circum() {return 2*radius*3.14159265;}
};

typedef struct tag_box{
	double l; // Length of a box in inches
	double w; // Width of a box in inches
	double h; // Height of a box in inches
}BOX;



double volume(BOX _box){
	return _box.h*_box.l*_box.w;
}

typedef struct {
	  char 	month;
	  char 	day;
	  int 	year;
}s_date;

void set_date(s_date * pdate,char mth, char day, int yr){
	
	pdate->day=day;
	pdate->month=mth;
	pdate->year=yr;
}
void reset_date(s_date * pdate){
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

class c_date{
	private:
		char 	month;
		char 	day;
		int 	year;
	public:
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
		char get_month(void){
			return month;
		}
};

typedef struct tag_employee{
	int 	id;
	char 	age;
}EMPLOYEE;

typedef struct {
	int 	id;
	char	name[20];
}EMPLOYEE2;

void set_employee(EMPLOYEE * _employ,int id, char  age){
	_employ->id=id;
	_employ->age=age;
}

class CEmployee{
	int 	id;
	char 	age;

	public:
		void set_employee(int _id, char  _age){
			if(_id<=1000000)id=_id;
			if(_age<=120)age=_age;
		}
		char get_age(void){ return age;}
		int get_id(void){ return id;}

};


typedef struct tag_break{
	int 	speed;
	int 	accel;
	char	pos;
}BREAK;

void set_break(BREAK * _break, int _speed, int _accel, char _pos){
	_break->speed=_speed;
	_break->accel =_accel;
	_break->pos =_pos;

}



void main(void){
	s_date current_date;
	//current_date.






	CBox mybox;
	mybox.







	EMPLOYEE _employ={1234,49};
	CEmployee arr_empl[10];


	CEmployee c_empl;
	int myage= c_empl.get_age();






	EMPLOYEE2	paul={123,"PC"};
	c_date c_mydate;
	c_mydate.
	paul.id=34;
	BREAK break1;
	set_break(&break1,2,3,4);
	paul.name[0]='T';
	printf("empl2: %d, %s\n",paul.id,paul.name);
	set_employee(&_employ,4321,45);
	for(int i=0; i<10;i++){
		arr_empl[i].set_employee(rand()%10000,rand()%121);
	}
	BOX		box1={2,3,4};
	CBox	rectBox,squaBox={2,3,4};
	Circle	circ1, circ2;

	//box1.h=3;
	//box1.l=4;
	printf("empl: %d, %d\n",arr_empl[9].get_age(), arr_empl[9].get_id());
	circ1.set(2);
	
	rectBox.m_Height=3;
	rectBox.m_Length=6;
	rectBox.m_Width=2;
	printf("Circle circum %f\n",circ1.circum());
	printf("Rect box volume %f\n",rectBox.volume());
	s_date current_date;
	c_date _current_date;

	_current_date.set_date(4,5,2015);
	
	printf("month:%d\n",_current_date.get_month());
	//_current_date.set_date(4,5,2015);
	//printf("c_date:%d, %d, %d \n",_current_date.day,_current_date.month, _current_date.year);
	//_current_date.reset_date();
	//_current_date.month=5;
	//printf("c_date:%d, %d, %d \n",_current_date.day,_current_date.month, _current_date.year);
	set_date(&current_date,2,3,2015);
	printf("s_date:%d, %d, %d \n",current_date.day,current_date.month, current_date.year);
	reset_date(&current_date);
	printf("s_date:%d, %d, %d ",current_date.day,current_date.month, current_date.year);
	while(1){
	}
}