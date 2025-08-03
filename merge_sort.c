#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

int cs;
int l;

int temp[n];

for (cs = 1; cs <= n-1; cs = 2 * cs) {
        for (l = 0; l < n-1; l += 2 * cs) {
            int mid = l + cs - 1;
            int r = (l + 2 * cs- 1 < n-1) ? (l + 2 * cs - 1) : (n-1);

            int i = l;
            int j = mid+1;
            int k = l;

            while (i <= mid && j <= r) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                } else {
                    temp[k++] = arr[j++];
                }
            }

            while (i <= mid)
                temp[k++] = arr[i++];

            while (j <= r)
                temp[k++] = arr[j++];

            for (i = l; i <= r; i++)
                arr[i] = temp[i];
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
