#include <stdio.h>
int main() 
{
    int array[8] = {1,2,3,4,5,6,7,8};
    int max2, max1 = array[0];
    for (int i = 0; i < 8; i++)
    {
        if ( max1 < array[i] ){
            max1 = array[i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if ( array[i] != max1 && max2 < array[i] ){    // max1 != 8 && max2 == 8
            max2 = array[i];
        }
    }
    printf("%d\n", max2);
    return 0;
}