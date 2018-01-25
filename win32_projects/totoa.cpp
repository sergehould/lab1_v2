//Fig.1
//Addition program that displays the sum of two numbers.
#include <iostream> // allows program to perform input and output
#include <stdio.h>
using namespace std;
void main(int argc, char *argv[])
{
  if(!strcmp(argv[1],"happy") && !strcmp(argv[2],"joyous"))
	cout << argv[0] << " is in a VERY good mood since " << argv[1] << " or " << argv[2] << " were specified!" << endl;
    //printf("%s is in a VERY good mood since %s was specified\n",argv[0],argv[1],argv[2]);
  else if(!strcmp(argv[1],"happy") || !strcmp(argv[1],"joyous"))
	cout << argv[0] << " is in a GOOD mood since " << argv[1] << " was specified!" << endl;
  else printf("%s cannot tell the mood\n",argv[0]);
}
