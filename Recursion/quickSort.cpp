#include <iostream>

using namespace std;

int partition(int a[], int s, int e)
{
    // Let Pivot
    int pivot = a[s];

    // count element smaller than pivot
    int count = 0;
    for (int i = s + 1; i <= e; ++i)
    {
        if (a[i] <= pivot)
            ++count;
    }

    // swap pivot after that number of small elemment
    int pivotIndex = s + count;
    swap(a[pivotIndex], a[s]);

    // swap element in both side [        ][a][        ]
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (pivot < a[j])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
            swap(a[i++], a[j--]);
    }
    return pivotIndex;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(a, s, e);

    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);

    for (int x : a)
    {
        cout << x;
    }

    return 0;
}