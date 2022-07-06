//documentation section
/*Exercise 5, Searching Technique*/

//pre processor section
#include<stdio.h>

//global variable section
int binarySearch(int searchKey, int arr[], int size);

//main function section
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchKey = 50;

    binarySearch(searchKey, arr, size);

    if (binarySearch(searchKey, arr, size) == -1)
    {
        printf("Element with value %d is not present in arr[]", searchKey);

    }

    else
    {
        printf("Element with value %d is present at index %d", searchKey, binarySearch(searchKey, arr, size));
    }
    
}



//user defined section
int binarySearch(int searchKey, int arr[], int size)
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