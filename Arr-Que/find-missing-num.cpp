#include <iostream>
using namespace std;
int findMissingnum(int arr[], int n)
{
    int totalsum = ((n + 1) * (n + 2)) / 2;
    int arrsum = 0;
    for (int i = 0; i < n; i++)
    {
        arrsum += arr[i];
    }
    return totalsum - arrsum;
}
int main()
{
    int arr[] = {1, 2,3, 4, 5, 6,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingnum = findMissingnum(arr, n);
    cout << "the missing number is " << " " << missingnum << endl;
    return 0;
}