#include <iostream>
using namespace std;

int main() {
    int a[10], item, beg = 0, end = 9, mid;

    cout << "Enter 10 elements in ascending order:\n";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> item;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (item == a[mid]) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }

        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }

    cout << "Element not found" << endl;
    return 0;
}