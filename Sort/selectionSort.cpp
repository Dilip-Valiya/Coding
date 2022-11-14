#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int tp = *xp;
    *xp = *yp;
    *yp = tp;
}

// bubble sort always swap min element with index i.
// So it's not stable sorting algorithm.

// O(N^2): (N-1 comparisons) * (N-1 times)

class Solution
{
public:
    void selectionSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                    min = j;
            }
            swap(&arr[i], &arr[min]);
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
    sb.selectionSort(arr, 10);
    PrintArray(arr, 10);
}