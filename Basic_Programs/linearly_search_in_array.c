#include <stdio.h>
int main()
{
    int arr_lenth, target, flag = 0;
    printf("Enter array lenth: ");
    scanf("%d", &arr_lenth);
    int arr[arr_lenth];
    for (int i = 0; i < arr_lenth; i++)
    {
        printf("Enter integer, array %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    for (int i = 0; i < arr_lenth; i++)
    {
        if (target == arr[i])
        {
            printf("target found array index %d : %d", i, target);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("target not found ");
    }
    return 0;
}