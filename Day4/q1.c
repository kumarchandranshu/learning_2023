
// find the Sum and Average in the given array.
#include<stdio.h>

int  calculateSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
       
        
    }
     return sum;
    
}

float calculateAverage(int sum,int n){
    
    float average = (float)sum / n;
    return average;


    
   
   
    
    
}



int main(){
    
    int arr[] = {12,84,20,36,64,56,72,10,45,90};
    
    int n = arr[n]/arr[0];
    
    int sum = calculateSum(arr,n);
    
    float average = calculateAverage(sum,n);
    
    printf("Sum : %d\n", sum);
    
    printf("Average : %.2f\n", average);
    
    
    
    
    
    return 0;
}