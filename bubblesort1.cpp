#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Note: For large 'n', consider using dynamic memory instead

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}