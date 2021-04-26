#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/time.h>
#include"headerfile.h"

int main(){
	FILE *fp;
	char *arr[1000100];
	char input[1000100];
	int lineCnt=0;
	int len;
	fp=fopen("dataset2","r");
	while(fgets(input,1000100,fp)){
		len=strlen(input);
		if(*(input+len-1)=='\n'){
			*(input+len-1)='\0';
		}
		arr[lineCnt]=(char*)malloc(sizeof(char)*len+100);
		strcpy(arr[lineCnt],input);
		lineCnt++;
	}
	struct timeval start;
	struct timeval end;
	unsigned long diff;
	gettimeofday(&start,NULL);
	bubblestring(arr,1000000);
	gettimeofday(&end, NULL);
	diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
}

