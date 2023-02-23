#include <stdio.h>
int main()
{
    int num_state, num_end;
    printf("Enter Stateing number: ");
    scanf("%d", &num_state);
    printf("Enter Stateing number: ");
    scanf("%d", &num_end);
    printf("Sum of first N natural number: %d", (num_end * (num_end + 1) / 2) - (num_state * (num_state + 1) / 2));
    return 0;
}