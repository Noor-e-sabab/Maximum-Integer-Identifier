#include <stdio.h>

int main() {
    int n, num, largest;

    printf("Enter the number of integers you want to compare: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("You must enter a positive number of integers.\n");
        return 1;
    }

    printf("Enter integer 1: ");
    scanf("%d", &num);
    largest = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
    }

    printf("The largest integer is %d\n", largest);

    return 0;
}
