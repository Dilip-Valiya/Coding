#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int tp = *xp;
    *xp = *yp;
    *yp = tp;
}

// bubble sort always swap(copy) adjacent element.
// So it's stable sorting algorithm.

// O(N^2): (N-1 comparisons) * (N-1 times)

class Solution
{
public:
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (key < arr[j] && j >= 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    Solution sb;
    int arr[10] = {5, 1, 4, 3, 2, 9, 6, 8, 10, 7};
    sb.insertionSort(arr, 10);
    PrintArray(arr, 10);
}