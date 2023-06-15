#include<stdio.h>

int findgreaternumber(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int findgreaterternarynumber(int num1,int num2){
    return (num1>num2)?num1:num2;
}


int main(){

    int num1 = 15;
    int num2 = 12;

    int greaternumber = findgreaternumber(num1,num2);
    int greaterternarynumber = findgreaterternarynumber(num1,num2);

    printf("using if-else: %d\n", greaternumber);
    printf("using ternary: %d\n", greaterternarynumber);

    return 0;

}