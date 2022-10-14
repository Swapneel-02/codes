#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low;
    for (int i = low; i <= mid; i++)
    {
        if (arr[i] < 0)
        {
            aux[k++] = arr[i];
        }
    }
    for (int j = mid + 1; j <= high; j++)
    {
        if (arr[j] < 0)
        {
            aux[k++] = arr[j];
        }
    }
    for (int i = low; i <= mid; i++)
    {
        if (arr[i] >= 0)
        {
            aux[k++] = arr[i];
        }
    }

    for (int j = mid + 1; j <= high; j++)
    {
        if (arr[j] >= 0)
        {
            aux[k++] = arr[j];
        }
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = aux[i];
    }
}

void partition(int arr[], int aux[], int low, int high)
{

    if (high <= low)
    {
        return;
    }

    int mid = (low + ((high - low) >> 1));

    partition(arr, aux, low, mid);
    partition(arr, aux, mid + 1, high);

    merge(arr, aux, low, mid, high);
}

int main()
{
    int arr[] = {14, 17, -22, -3, 4, 6, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int aux[n];
    for (int i = 0; i < n; i++)
    {
        aux[i] = arr[i];
    }

    partition(arr, aux, 0, n - 1);
    cout<<"{";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}";

    return 0;
}
