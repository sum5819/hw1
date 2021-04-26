#include<stdio.h>
#include<string.h>

void bubblesort(int arr[],int len){
	int x;
	for(int i=0;i<len;i++){
		for(int j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
}
void selectionsort(int arr[],int len){
	int x;
	int *min;
	for(int i=0;i<len;i++){
		min=arr+i;
		for(int j=i+1;j<len;j++){
			if(arr[j]<*min){
				min=arr+j;
			}
		}
		x=arr[i];
		arr[i]=*min;
		*min=x;
	}
}

void insertionsort(int *arr,int len){
	for(int i=1;i<len;i++){
		int j=i-1;
		int key=arr[i];
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

void bubblestring(char **arr,int len){
	char *x;
	for(int i=0;i<len;i++){
		for(int j=0;j<len-i-1;j++){
			if(strcmp(arr[j],arr[j+1])>0){
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
			}
		}
	}
}

void selectionstring(char **arr, int len){
	char *x;
	char **min;
	for(int i = 0; i < len; ++i){
		min = arr + i;
		for(int j = i + 1; j < len; ++j){
			if(strcmp(arr[j],*min)<0){
				min = arr + j;
			}
		}
		x=arr[i];
		arr[i]=*min;
		*min=x;
	} 
}

void insertionstring(char **arr,int len){
	for(int i=1;i<len;i++){
		int j=i-1;
		char *key=arr[i];
		while(j>=0&&strcmp(arr[j],key)>0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

