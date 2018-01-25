/*
Bench test for GPIO setting using command line arguments
 
example:
	gpio out 17 on
 
 Author: Serge Hould
 Date Jan, 25 2015
  Works perfecly


 Note: 
	Executed form cmd console
	The files are located in \release forder
*/

#include <stdint.h>
#include <fcntl.h>
#include <stdlib.h>
//#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <fstream>


int main(int argc, char **argv)
{
	int value=0,i; 
	FILE *fd;
	char buf[100]; 
	if(!strcmp(argv[1],"out")){
		fd = fopen("export.txt", "w"); 
		sprintf(buf, "%s", argv[2]); 
		fwrite(buf,1,strlen(buf),fd);
		printf("wrinting to file...\n");
		fclose(fd);

		sprintf(buf,"gpio%s/direction.txt", argv[2]);
		fd = fopen(buf, "w");
		//Set out direction 
		fwrite("out",1,3,fd);
		
		// Set in direction 
		//write(fd, "in", 2);
		//fclose(fd);
				// set port and value
		sprintf(buf,"gpio%s/value.txt",argv[2]);
		fd = fopen(buf,"w"); 
		// Set value
		if(!strcmp(argv[3],"on"))	fwrite("1", 1,1,fd);
		else 	fwrite("0", 1,1,fd);
		fclose(fd);
	}
	else printf("out was NOT the first arg\n");

	printf("\n\nThe args wwere then:%s,%s\n",argv[1],argv[2]);
	return 0;
}

