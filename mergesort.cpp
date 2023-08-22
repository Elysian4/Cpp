#include<iostream>
using namespace std;

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = 0;
    int b[h - l + 1];

    while (i <= mid && j <= h) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= h) {
        b[k] = arr[j];
        j++;
        k++;
    }

    for (k = 0; k <= h - l; k++) {
        arr[l + k] = b[k];
    }
}

void mergesort(int arr[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int main() {
    int array[] = {9, 3, 5, 2, 7, 6, 8, 1, 4};
    int z = sizeof(array) / sizeof(int);
    mergesort(array, 0, z - 1);
    printarray(array, z);
}
