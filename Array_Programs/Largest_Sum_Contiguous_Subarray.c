#include <stdio.h>
#include <math.h>
int main()
{
    int arr_length;
    printf("Enter array length: ");
    scanf("%d", &arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        printf("Enter integer ,array [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    int max_so_far = -2147483647, max_ending_here = 0;
    for (int i = 0; i < arr_length; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    printf("largest subarray sum is: %d", max_so_far);
    return 0;
}