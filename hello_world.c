#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("hello world\n");
	printf("gitTest\n");
	
	char str[200];
	FILE *fp1=fopen("in.txt","r");
	if(!fp1)printf("can not open file\n");
	else{
		fscanf(fp1,"%s",str);
		printf("%s\n",str);
	}
	
	system("pause");
	return true;
}
