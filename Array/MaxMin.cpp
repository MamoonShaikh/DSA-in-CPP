#include <iostream>
using namespace std;
// Function to get the minimum value in an array
int getMin(int num[], int n)
{
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
// Function to get the maximum value in an array
int getMax(int num[], int n)
{
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max value" << getMax(num, size) << endl;
    cout << "Min value" << getMin(num, size) << endl;
}