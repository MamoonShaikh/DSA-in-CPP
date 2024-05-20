#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}
int main()
{
    int arr[4] = {5, 3, 7, 1};
    int arr1[8] = {4, 8, 1, 9, 2, 3, 5, 7};
    reverse(arr, 4);
    reverse(arr1, 8);
    printarray(arr, 4);
    printarray(arr1, 8);
    return 0;
}