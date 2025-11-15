#include<stdio.h>
int main(){
	int num, num_copy ,reversed_num=0 ,i;
	printf("Enter the number to be reversed :");
	scanf("%d",&num);
	num_copy = num;
	
	for(i=0;num_copy!=0;i++){
		reversed_num *= 10;
		reversed_num += num_copy % 10;
		num_copy = num_copy / 10;
	}
	
	if(num == reversed_num){
		printf("%d is a palindrome number",num);
	}
	else{
		printf("%d is not a palindrome number",num);
	}
	return 0;
}
