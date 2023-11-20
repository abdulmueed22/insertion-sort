#include <iostream>
using namespace std;

int main()
{
    const int size = 11;
    int a[size] = {0, 2, 7, 1, 3, 9, 5, 8, 7, 6, 4};

    int i = 1;
    while (i <= size - 1) {
        int swap = a[i];
        int j = i - 1;

        while (j >= 0 && swap < a[j]) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = swap;
        i = i + 1;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int k = 0; k < size; ++k) {
        cout << a[k] << " ";
    }

    return 0;
}

