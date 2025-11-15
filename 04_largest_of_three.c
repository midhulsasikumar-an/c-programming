#include<stdio.h>

int main(){
	int input_num1 , input_num2 , input_num3 , largest_num;
	
	// Take inputs
	printf("Enter the first number :");
	scanf("%d",&input_num1);
	
	printf("Enter the second number :");
	scanf("%d",&input_num2);
	
	printf("Enter the third number :");
	scanf("%d",&input_num3);
	
	// Find largest using ternary operator
	largest_num = (input_num1 > input_num2)? 
		((input_num1 > input_num3)? input_num1 : input_num3) : ((input_num2 > input_num3)? input_num2 : input_num3);
	printf("Largest Number : %d",largest_num);
	
	return 0;
}
