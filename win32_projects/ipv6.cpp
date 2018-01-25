#include <stdio.h>
#include <iostream>
#include <stdint.h>

typedef struct {
           uint16_t  s6_addr0;
		   uint16_t  s6_addr1;
		   uint16_t  s6_addr2;
		   uint16_t  s6_addr3;
		   uint16_t  s6_addr4;
		   uint16_t  s6_addr5;
		   uint16_t  s6_addr6;
		   uint16_t  s6_addr7;
}in6_addr;

typedef struct in6_addr_v2{
           char  s6_addr0[4];
		   char s6_addr1[4];
		   char  s6_addr2[4];
		   char  s6_addr3[4];
};



void main(void){
	in6_addr myIPv6;
	in6_addr_v2 myIPv6_v2={0,};
	myIPv6_v2.s6_addr0[0]=20H;


	while(1){
	}
}