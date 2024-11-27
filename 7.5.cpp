#include<stdio.h>
 int main(){
 	int number[5]={3,5,4,7,1};
 	int max=number[0];
 	int min=number[0];
 	for(int i=0;i<=4;i++){
 		if(max<number[i]){
 			max=number[i];
		 }
		 if(min>number[i]){
		 	min=number[i];
		 }
	}
		 printf("so lon nhat la : %d\n",max);
		 printf("so nho nhat la : %d",min);
		 
		 return 0;
	 }
