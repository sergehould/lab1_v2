// toto2.cpp : Defines the entry point for the console application.
//


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <cstdlib>
#include <math.h>
#include <time.h>


// increaser
#include <iostream>
using namespace std;

typedef struct  {
           uint16_t  s6_addr[8];  /* IPv6 address */
}in6_addr;
typedef struct {
           uint16_t  s6_addr0;
		   uint16_t  s6_addr1;
		   uint16_t  s6_addr2;
		   uint16_t  s6_addr3;
		   uint16_t  s6_addr4;
		   uint16_t  s6_addr5;
		   uint16_t  s6_addr6;
		   uint16_t  s6_addr7;
}in6_addr_v2 ;


int sevencnt(int src[]){
	int i=0, cnt=0;
	while(src[i]!=0){
		if (src[i]%7 == 0) cnt++;
		i++;
	}
	return cnt;

}

int main ()
{
	int src[]={2,3,28,21,7,6,48,0};
	srand (time(NULL));
	double op4=8.77, result ;
	uint32_t op1=6, op2=3, op3=47;
  
	result  = (float)op1*op2-op3+op4;

	in6_addr ipv6_addr={0x0,0x1,0x2,3,4,5,6,7};
	in6_addr_v2 ipv6_addr2={0x0};

	ipv6_addr.s6_addr[7]=0x5678;
	ipv6_addr2.s6_addr0=0x6754;
	 int cnt=sevencnt(src);


}