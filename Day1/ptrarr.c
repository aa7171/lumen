#include <stdio.h>

int main()
{
        int arr[4] = {1,2,3,4};
        int *iptr;
        iptr = arr + 2; //pointing to the 3rd element
        printf("Address of 2nd index = %p\n", iptr);
        iptr = &arr[2]; //pointing to the 3rd element
        printf("Address of 2nd index = %p\n", iptr);
        return 0;
}

/*
Address of 3rd index = 0x7fff272a9398
Address of 3rd index = 0x7fff272a9398
*/
