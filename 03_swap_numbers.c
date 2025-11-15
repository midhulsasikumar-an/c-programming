#include<stdio.h>

int main(){
	int input_num1 , input_num2 ,temp;
	
	// Take inputs
	printf("Enter the first number :");
	scanf("%d",&input_num1);
	
	printf("Enter the second number :");
	scanf("%d",&input_num2);
	
	printf("Before swap\n");
	printf("first number : %d | second number : %d \n",input_num1 , input_num2);
	
	// Swap without temporary variable
	input_num1 = input_num1 + input_num2;
	input_num2 = input_num1 - input_num2;
	input_num1 = input_num1 - input_num2;
	printf("After swap\n");
	printf("Swap without temporary variable\n");
	printf("first number : %d | second number : %d\n",input_num1 , input_num2);
	
	// Swap with temporary variable
	printf("Swap with temporary variable\n");
	temp = input_num1;
	input_num1 = input_num2;
	input_num2 = temp;
	printf("first number : %d | second number : %d",input_num1 , input_num2);
	
	return 0;
}
