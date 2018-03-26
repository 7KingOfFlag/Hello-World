#include<stdio.h>
#define ARRAY_SZIE 10

int identity_matrix(int array[][] ay,int size);
int main(void){
	int array[ARRAY_SZIE][ARRAY_SZIE];
	int i,j;
	for(i=0;i<ARRAY_SZIE;i++){
		for(j=0;j<ARRAY_SZIE;j++){
			if(i==j){
				array[i][j]=1;
			}else{
				array[i][j]=0;
			}
		}
	}
	printf("%d\n",identity_matrix(array ,ARRAY_SZIE));

	return 0;
}

int identity_matrix(int array[][] ,int size){
	int b=1,i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j==i){
				if(array[i][j]!=1){
					b=0;
				}
			}else{
				if(array[i][j]!=0){
					b=0;
				}
			}
			if(b==0){
				break;
			}
		}
		if(b==0){
			break;
		}
	}
	return b;
}	
