#include <stdio.h>
 
int main()
{
    int m;
    printf("Enter the size of array:  ");
    scanf("%d",&m);
    int arr[m];
    int i, x, pos,s=0;
    
    for (i = 0; i<m; i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
 
    for (i = 0; i < m; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    printf("Enter the element to insert: ");
    scanf("%d",&x);
 
    printf("Enter the position to insert:  ");
    scanf("%d",&pos);

    m++;
 
    for (i = m - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    arr[pos - 1] = x;
 
    for (i = 0; i < m; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}