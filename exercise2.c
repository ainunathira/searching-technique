//documentation section 
/* Exercise 2 - Sequential Search - Unsorted List*/

//pre-processor section 
#include<stdio.h>

//global variable section 


//main function section 
int main(){
    //write here your program
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int p;
    int array_size = 10;

    int index = -1; //-1 means record not found 
    int search_key = 200;

    for(p=0; p<array_size;p++){
        if(search_key == arr[p]){
            index = p;
            break;
        }

    }

    if(index == -1){

    }
    else{

    }
    

    

    

}

//user-defined section 
