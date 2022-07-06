//document section
/*Exercise 1_ searching techinque */   

//pre-processor section
#include <stdio.h> 

//global vraiable section  
int search(int arr[], int n, int value) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == value) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 130, 170}; 
    int value = 110; 
    int n = sizeof(arr) / sizeof(arr[6]); 
    int result = search(arr, n, value);  
    printf("Element is with value %d with present %d", result); 

    return 0; 
} 