#include<stdio.h> int main(){ 
    int arr[10], n;
    
    printf("Enter the number of elements you want.\n"); scanf("%d", &n);
    
    printf("Enter the elements.\n"); for(int i=0; i<n; i++){ scanf("%d", &arr[i]);
    }
    
    printf("Elements inside array are:\n"); for(int i=0; i<n; i++){ printf("%d\t", arr[i]);
    }
    
    return 0;
    }