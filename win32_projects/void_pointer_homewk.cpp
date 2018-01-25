// toto2.cpp : Defines the entry point for the console application.
//


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// increaser
#include <iostream>
using namespace std;


void* moveptr (void* data, int psize, int step){
  if ( psize == 1 ){ 
	uint8_t* pchar; 
	pchar=(uint8_t*)data; 
	return pchar+step; 
  }
  else if (psize == 2 ){ 
	uint16_t* pint; 
	pint=(uint16_t*)data; 
	return pint+step;
  }
}



void print(void *p, int t){
if (t == 1) printf("%X\n", *(uint8_t *) p);
else if (t == 2) printf("%X\n", *(uint16_t  *) p);
else printf("error: unknown type\n");
} //end print

void print2(void *p, int t){
	if (t == 1) {
		uint8_t * pchar;
		pchar = (uint8_t*)p;
		printf("%X\n", *(pchar+1));
	}
else if (t == 2) 
	printf("%X\n", *(uint32_t  *) p);
} //end print
int main ()
{
	
uint32_t n = 0x12AB34CD;
uint32_t n2=0x34ab56cd;
print2(&n2, 1);
print2(&n2, 2); 

print(&n, 1);
print(&n, 2); 

uint8_t int8ar []={0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28};
uint16_t int16ar[]={0x1A2B, 0x9192,0x3839}; 
printf("1- %X \n",*((uint8_t*)moveptr(int8ar,2,2)));
printf("2- %X \n",*((uint16_t*)moveptr(int8ar,2,2)));
printf("3- %X\n",*((uint8_t*)moveptr(int16ar,1,1)));
printf("4- %X\n",*((uint16_t*)moveptr(int16ar,1,1)));
printf("5- %X\n",*((uint8_t*)moveptr(int16ar,2,2)));
printf("6- %X\n",*((uint32_t*)moveptr(int16ar,2,1)));
}