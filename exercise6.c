//documentation section 
/* Exercise 5 - Binary Search*/

//pre-processor section 
#include<stdio.h>

//global variable section 
int binarySearch(int arr[], int search_value, int low, int high){
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == search_value){
            return mid; 
        }

        if(arr[mid] < search_value){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    return -1;
}


//main function section 
int main(){
    //write here your program
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int search_value = 45; 

    int result = binarySearch(arr, search_value, 0 , n-1);
    if (result == -1){
        printf("Element with value %d is not present in arr[]", search_value);
    }
    else{
        printf("Element with value %d is present at index %d", search_value, result);
    }

    

}

//user-defined section 
