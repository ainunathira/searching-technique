//documentation section 
/* Exercise 3 - Sequential Search - Sorted List*/

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    int p;
    int index = -1;
    int array_size = 7;
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int search_key = 45;

    for(p=0; p < array_size; p++){
        if(search_key < arr[p]){
            printf("Element with value 45 is not present in arr[]");
            break;
        }
        else if(search_key == arr[p]){
            index = p;
            printf("Element with value %d is present at index %d", search_key, index);
            break;
        }

    }
    

}

//user-defined section 
