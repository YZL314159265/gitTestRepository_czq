#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("hello world\n");
	printf("gitTest\n");
	
	printf("change in master\n");
	printf("change in branch_c\n");
	
	char str[200];
	FILE *fp1=fopen("in.txt","r");
	if(!fp1)printf("can not open file\n");
	else{
		while(fscanf(fp1,"%s",str)!=EOF){
			printf("%s\n",str);
		}
	}
	
	system("pause");
	return true;
}
