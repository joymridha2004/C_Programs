#include <stdio.h>
int main()
{
    int arr_length;
    printf("Enter array length: ");
    scanf("%d", &arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        printf("Enter integer: array [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int count = 0, max_count = 0, index = -1;
    for (int i = 0; i < arr_length; i++)
    {
        count=0;
        for (int j = 0; j < arr_length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            index = i;
        }
    }
    if (max_count > arr_length / 2)
    {
        printf("Majority element is: %d", arr[index]);
    }
    else
    {
        printf("No majority element");
    }
    return 0;
}