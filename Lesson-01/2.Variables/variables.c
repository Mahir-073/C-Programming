#include<stdio.h>

int main(){

    int x; //declaration
    x = 73; //initialization

    int y = 18; //declaration and initialization together

    printf("Values of X and Y are: %d, %d  \n", x,y);

    // real life variables
    int age = 15;
    float cgpa = 3.5;
    char grade = 'A'; // single character
    char name[]="Mahir Ahmed Niloy"; //series of characters by an array

    printf("Name: %s \n",name);

    printf("Age: %d  \n", age);

    printf("Grade: %c \n", grade);

    printf("Cgpa: %f \n", cgpa);

    printf("Student details: Name:%s , Age:%d , Cgpa:%f , Grade:%c \n", name,age,cgpa,grade);

    return 0;
}