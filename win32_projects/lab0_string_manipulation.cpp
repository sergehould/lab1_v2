// toto2.cpp : Defines the entry point for the console application.
//


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int strcnt(char src[]);
int strcapital(char src[]);
void tolower(char src[]);
void strbward(char src[]);

int main(void)
{
	//char src[10];
	char *src;
	char i=0;

	while(1){
		printf("How long do you want the string:\n");
		scanf("%d",&i);
		src=(char*) malloc(i+1);
		printf("%i bytes of memory were allocated to you.",i);
		printf("\nEnter the string:\n");
		scanf("%s",src);
		printf(src);
		//printf("\n\nThis string has %d charaters", strcnt(src));
		printf("\n");
		//printf("\nThis string has %d capital letters", strcapital(src));
		//printf("\n");
		tolower(src);
		//printf("\nThe new string %s", src);
		//printf("\n");
		//strbward(src);
		//printf("\nThe string backward is : %s", src);
		printf("\n\n\n");
		free(src);
		src=NULL;

	}
	return 0;
}

int strcnt(char src[]){
	int i=0;
	while(src[i]!=0){
		i++;
	}
	return i;

}

int strcapital(char src[]){
	int i=0,cnt=0;
	while(src[i]!=0){
		if (src[i]>='A' && src[i] <='Z') cnt++;
		i++;
	}
	return cnt;
}


void tolower(char src[]){
	int i=0,cnt=0;
	while(src[i]!=0){
		if (src[i]>='A' && src[i] <='Z') src[i]+=32;
		i++;
	}
	

}

void strbward(char src[]){
	int i=0,cnt=0,j=0;
	char dst[10];
	while(src[i]!=0){
		dst[i]=src[i];
		i++;
	}
	cnt=i;
	j=i;
	for(i=0; i<cnt;i++){
		j--;
		src[i]=dst[j];
	
	}
	src[i++]=0;
	

}

