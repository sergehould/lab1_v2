// toto2.cpp : Defines the entry point for the console application.
//


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// increaser
#include <iostream>
using namespace std;

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { 
		char* pchar; 
		pchar=(char*)data; 
		++(*pchar); 
  }
  else if (psize == sizeof(int) )
  { 
		int* pint; 
		pint=(int*)data; 
		++(*pint); 
  }
}
void* moveptr (void* data, int psize, int step){
  if ( psize == 1 ){ 
		uint8_t* pchar; 
		pchar=(uint8_t*)data; 
		return pchar+step; 
  }
  else if (psize == 2 ){ 
		uint32_t* pint; 
		pint=(uint32_t*)data; 
		return pint+step;
  }

}

int main ()
{
 char strar[]="abcdefghijklmnop";
 uint32_t int32ar[]={0x0A0B0C0D,0x01020304,0x05060708} ; // little endian memory	
 printf("1- %c \n",*((uint8_t*)moveptr(strar,1,2)));
 printf("2- %c \n",*((uint8_t*)moveptr(strar,2,2)));
 printf("3- %X \n",*((uint16_t*)moveptr(strar,2,2)));
 printf("4- %08X\n",*((uint32_t*)moveptr(int32ar,1,1)));
 printf("4- %02X\n",*((uint8_t*)moveptr(int32ar,1,1)));
 printf("6- %08X\n",*((uint32_t*)moveptr(int32ar,2,1)));
}