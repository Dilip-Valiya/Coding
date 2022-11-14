#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int tp = *xp;
    *xp = *yp;
    *yp = tp;
}

// bubble sort always swap adjacent(right next to it) element if it's bigger.
// So it's stable sorting algorithm.

// O(N^2): (N-1 comparisons) * (N-1 times)

class Solution
{
public:
    void bubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(&arr[j], &arr[j + 1]);
            }
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
    sb.bubbleSort(arr, 10);
    PrintArray(arr, 10);
}