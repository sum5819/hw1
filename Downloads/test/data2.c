#include<stdio.h>
#include<stdlib.h>
int main(){
	int flag;
	int i,j,k=0;
	char ch[1000000+5]={0};
	for(i=0;i<1000000;i++){
		for(j=0;j<100;j++){
			flag=rand()%2;
			if(flag) ch[k++]='A'+rand()%26;
			else ch[k++]='a'+rand()%26;
		}
		ch[k]='\0';
		k=0;
		printf("%s\n",ch);
	}
}

