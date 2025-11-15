#include<stdio.h>

int main(){
	int input_num;
	// Take input
	printf("Enter the Number :");
	scanf("%d",&input_num);
	
	// check even or odd
	if(input_num % 2 == 0){
		printf("%d is an Even Number",input_num);
	}
	else{
		printf("%d is a Odd Number",input_num);
	}
	
	return 0;
}
