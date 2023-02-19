#include <stdio.h>
int main()
{
    int arr_length, sum = 0;
    printf("Enter array length: ");
    scanf("%d", &arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        printf("Enter integer, array %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("sum of element in a array: %d", sum);
    return 0;
}
