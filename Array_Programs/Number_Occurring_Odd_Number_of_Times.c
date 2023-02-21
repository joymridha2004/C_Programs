#include <stdio.h>
int main()
{
    int arr_length;
    printf("Enter array length: ");
    scanf("%d", &arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        printf("Enter integer, Array [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arr_length; i++)
    {
        int count = 0;
        for (int j = 0; j < arr_length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            printf("%d time occurs in array ,number = %d \n", count, arr[i]);
            break;
        }
    }
    return 0;
}