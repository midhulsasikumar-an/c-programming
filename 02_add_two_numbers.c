#include<stdio.h>

int main(){
	int input_num1 , input_num2 , sum;
	
	// Take inputs
	printf("Enter the first number :");
	scanf("%d",&input_num1);
	
	printf("Enter the second number :");
	scanf("%d",&input_num2);
	
	// Arithmetic operation
	sum = input_num1 + input_num2;
	printf("Sum of %d and %d : %d",input_num1,input_num2,sum);
	
	return 0;
}
