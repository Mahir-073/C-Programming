#include <stdio.h>

int addition(int a, int b){
	return a+b;
}

int subtraction(int a, int b){
	return a-b;
}

int multiplication(int a, int b){
	return a*b;
}

int main(){
	int num1, num2;
	char operator;
	
 	printf("Enter the first number: ");
    	scanf("%d", &num1);

    	printf("Enter the second number: ");
    	scanf("%d", &num2);

    	printf("Enter the operator (+, -, *): ");
    	scanf(" %c", &operator);

        if (operator == '+') {
		if (num1 < num2) {
		    int result = addition(num1, num2);
		    printf("Addition result: %d\n", result);
		} else if (num1 > num2) {
		    int result = subtraction(num1, num2);
		    printf("Subtraction result: %d\n", result);
		} else {
		    int result = multiplication(num1, num2);
		    printf("Multiplication result: %d\n", result);
        	}
    	} 
    	else if (operator == '-') {
		if (num1 < num2) {
		    int result = addition(num1, num2);
		    printf("Addition result: %d\n", result);
		} else if (num1 > num2) {
		    int result = subtraction(num1, num2);
		    printf("Subtraction result: %d\n", result);
		} else {
		    int result = multiplication(num1, num2);
		    printf("Multiplication result: %d\n", result);
		}
    	} 
    	else if (operator == '*') {
		if (num1 < num2) {
		    int result = addition(num1, num2);
		    printf("Addition result: %d\n", result);
		} else if (num1 > num2) {
		    int result = subtraction(num1, num2);
		    printf("Subtraction result: %d\n", result);
		} else {
		    int result = multiplication(num1, num2);
		    printf("Multiplication result: %d\n", result);
		}
    	} 
    	else {
        	printf("Invalid operator entered!\n");
    	}

    	return 0;
}



