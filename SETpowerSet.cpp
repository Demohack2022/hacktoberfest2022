#include <bits/stdc++.h>

using namespace ::std;

void powerSet(int arr[], int size)
{
    int num = pow(2, size);
    for (int i = 0; i < num; i++)
    {
        cout << "(";
        for (int j = 0; j < size; j++)
        {

            if (i & 1 << j)
            {
                cout << arr[j] << " ";
            }
        }
        cout << ")";
        cout << endl;
    }
}

int main()
{
    cout << "Enter the number of elements in the set(no duplicates): ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    powerSet(arr, size);

    return 0;
}