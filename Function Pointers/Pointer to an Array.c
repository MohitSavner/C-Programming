// Pointer to an Array

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int (*ptr)[5] ;            // Pointer to an Array
    ptr = &arr;
    int n = sizeof(arr)/sizeof(arr[0]);  //Array size calculation
    int i = 0;
    
    while(i < n) 
    {
        printf("Array[%d]: %d\n", i, *(*ptr+i));
        i++;
    }
    return 0;
}

    /*
    Output:
    Array[0]: 1
    Array[1]: 2
    Array[2]: 3
    Array[3]: 4
    Array[4]: 5
    */
    
