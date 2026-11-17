#include <stdio.h>

int main() {
    int n, i;
    
   
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("You need at least 2 numbers to find a second maximum.\n");
        return 1;
    }

    int arr[n];
    
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int max1, max2;
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    
    int second_max = (arr[0] != arr[1]) ? 1 : 0;

    
    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
            second_max = 1;
        } 
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
            second_max = 1;
        }
        else if (max1 == max2 && arr[i] < max1) {
           
            max2 = arr[i];
            second_max = 1;
        }
    }

   
    printf("\nMaximum value: %d\n", max1);
    
    if (second_max)
    {
        printf("Second maximum value: Does not exist (all elements are equal)\n");
    }
     else 
    {
        printf("Second maximum value: %d\n", max2);
    }

    return 0;
}










