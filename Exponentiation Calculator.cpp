#include<stdio.h>
#include<conio.h>

// Function declaration: Recursive function to calculate exponentiation
int exponentiation(int base, int exponent);
int main(){
	int base, exponent, result;
	
	// Get the base and exponent from the user	
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent: ");
	scanf("%d", &exponent);
	
	// Call the recursive exponentiation function	
	result=exponentiation(base, exponent);
	
	// Display the result
	printf("%d ^ %d = %d", base, exponent, result);
	getch();
	return 0;
}

// Function to calculate the exponentiation using recursion
int exponentiation(int base, int exponent){
	// Base case: If exponent is 0, return 1 (any number raised to the power of 0 is 1)	
	if(exponent==0){
		return 1;
	}
	else{
		return base*exponentiation(base, exponent-1);
	}
}
