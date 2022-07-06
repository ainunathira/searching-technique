//documentation section
/*Exercise 2, Searching Technique*/

//pre processor section
#include<stdio.h>

//global variable section
int sequenceSearch(int searchKey, int arr[], int size);

//main function section
int main(){
    int arr[] = {10,20,80,30,60,50,110,100,130,170};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchKey = 200;

    sequenceSearch(searchKey, arr, size);

    if (sequenceSearch(searchKey, arr, size) == -1)
    {
        printf("Element with value %d is not present in arr[]", searchKey);

    }

    else
    {
        printf("Element with value %d is present at index %d", searchKey, sequenceSearch(searchKey, arr, size));
    }
    
}



//user defined section
int sequenceSearch(int searchKey, int arr[], int size)
{
    int p;
    int index = -1;

    for (p = 0; p < size ; p++)
    {
        if (searchKey == arr[p])
        {
            index = p;
            break;
        }
    }
    
    return index;
}