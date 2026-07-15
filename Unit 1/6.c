//insert an element into the array at user define position.
#include <stdio.h>

void main() {
    int a[50], n, pos, val, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &val);

    for(i=n; i>pos; i--)
        a[i] = a[i-1];

    a[pos] = val;        // insert
    n++;

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    getch();
}
