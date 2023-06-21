#include <iostream>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int arr[] = { 1, 4, 9, 13, 34, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, 10);
    
    std::cout << "Element is present at index " << result<<std::endl;

    //sorted array

    int arr1[] = { 1, 4, 8, 9, 13, 34 };
    n = sizeof(arr1) / sizeof(arr[0]);
    result = binarySearch(arr1, 0, n - 1, 10);
    
    std::cout << "Element is present at index " << result;
    return 0;
}
