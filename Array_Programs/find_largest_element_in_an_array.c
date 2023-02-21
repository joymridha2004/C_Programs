#include<stdio.h>
int main()
{
    int arr_lenth, max = -2147483648, index;
    printf("Enter array lenth: ");
    scanf("%d", &arr_lenth);
    int arr[arr_lenth];
    for (int i = 0; i < arr_lenth; i++)
    {
        printf("Enter integer, array %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < arr_lenth; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    printf("Largest number in an array [%d] : %d ", index, max);
    return 0;
}