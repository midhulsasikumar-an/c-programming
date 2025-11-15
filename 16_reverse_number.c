#include<stdio.h>
int main(){
	int num , reversed_num=0 , i;
	printf("Enter the number to be reversed :");
	scanf("%d",&num);
	
	for(i=0;num!=0;i++){
		reversed_num *= 10;
		reversed_num += num % 10;
		num = num / 10;
	}
	printf("reversed number :%d",reversed_num);
	
	return 0;
}
