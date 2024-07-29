
 

#include <stdio.h>

int findElement(int arr[], int n, int key);

int deleteElement(int arr[], int n, int key)
{
	int pos = findElement(arr, n, key);

	if (pos == -1) {
		printf("Element not found");
		return n;
	}

	int i;
	for (i = pos; i < n - 1; i++)
		arr[i] = arr[i + 1];

	return n - 1;
}


int findElement(int arr[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == key)
			return i;

	return -1;
}

int main()
{
	int i,m;
	printf("Enter the size of array:  ");
	scanf("%d",&m);
	int arr[m];

	
	
	
	for (i=0; i<m; i++ ){
	    printf("Enter the element:  ");
	    scanf("%d",&arr[i]);
	}

	printf("\n");
	int key;
	printf("Enter the item to delete:  ");
	scanf("%d",&key);

	printf("Array before deletion\n");
	for (i = 0; i < m; i++)
		printf("%d ", arr[i]);

	
	m = deleteElement(arr, m, key);

	printf("\nArray after deletion\n");
	for (i = 0; i < m; i++)
		printf("%d ", arr[i]);

	return 0;
}
