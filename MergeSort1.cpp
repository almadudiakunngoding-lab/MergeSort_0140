#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array (maks 20): ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20!" << endl;
        }
    }

    cout << "\nInputkan Isi elemen array" << endl;
    cout << "---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke-" << i << ": ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high) // step 1
        return; 

    int mid = (low + high) / 2; // step 2

    mergeSort(low, mid); // step 3.a
    mergeSort(mid + 1, high); // step 3.b

    