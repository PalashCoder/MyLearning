#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "The sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j] + arr[i];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}

void bSort(int arr[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        count++;
    }
}

void inSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1, current = arr[i];
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The input array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // selSort(arr, n);
    // bSort(arr, n);
    inSort(arr, n);
    print(arr, n);

    return 0;
}