#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/time.h>
#include"headerfile.h"

int main(){
	FILE *fp;
	int arr[1000005];
	char input[30];
	int idx=0;
	fp=fopen("dataset1","r");
	while(fgets(input,1000005,fp)){
		if(*(input+strlen(input)-1)=='\n'){
			*(input+strlen(input)-1)='\0';
		}
		arr[idx]=atoi(input);
		idx++;
	}
	struct timeval start;
	struct timeval end;
	unsigned long diff;
	gettimeofday(&start,NULL);
	insertionsort(arr,1000000);
	gettimeofday(&end, NULL);
	diff = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
	printf("Sorting performance %ld us (equal %f sec)\n", diff, diff / 1000000.0);
}

