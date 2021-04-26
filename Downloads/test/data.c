#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int test_data[1000000+5];
		for(i=0;i<1000000;i++){
			test_data[i]=rand();
			printf("%d\n",test_data[i]);
		}
}


