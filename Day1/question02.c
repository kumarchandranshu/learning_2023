#include<stdio.h>

int main(){
    printf("enter the marks:\n");
    int marks;
    scanf("%d\n",&marks);

    if(marks>=90 && marks<=100){
        printf("Grade A");
    }
    else if(marks>=75 && marks<=60){
        printf("Grade B");
    }
    else if(marks>=60 && marks<=74){
        printf("Grade C");
    }
    else if(marks>=50 && marks<=59){
        printf("Grade D");
    }
    else{
        printf("Grade E");

    }
    return 0;
}