#include <stdio.h>

int scalar_product(int arr[], int arr2[], int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i] * arr2[i];
    }
    return sum;
}

int main()
{
    int n, i;
    printf("Please enter the size of the arrays: \n");
    scanf("%d", &n);
    int arr[n];
    int arr2[n];

    printf("Please insert the first array (one digit at a time): \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Please insert the second array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int sum = scalar_product(arr, arr2, n);
    printf("The sum is %d", sum);

    return 0;
}
