#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j; // Return the pivot's final position
        }

        swap(arr[i], arr[j]);
    }
}

void quicksort(int arr[], int l, int h) {
    if (l < h) {
        int n = partition(arr, l, h);

        quicksort(arr, l, n);
        quicksort(arr, n + 1, h);
    }
}

int main() {
    int array[] = {9, 3, 5, 2, 7, 6, 8, 1, 4};
    int z = sizeof(array) / sizeof(int);
    quicksort(array, 0, z - 1);

    for (int i = 0; i < z; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
