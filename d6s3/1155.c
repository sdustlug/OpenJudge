#include <stdio.h>
#define MAX_SIZE 1000
int get_array(int a[], int n)
{
    int i, b;
    for (i = 0; i < n; i++) {
        scanf("%d", &b);
        a[i] = b;
    }
}
int min_index(int a[], int n)
{
    int i, min = a[0], id = 0;
    ;
    for (i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            id = i;
        }
    }
    return id;
}


int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}

/**************************************************************
	Problem: 1155
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

