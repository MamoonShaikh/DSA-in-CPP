#include <iostream>
using namespace std;
// Function to print alternate array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        // cout<<endl;
    }
}
// Function to swap alternate array
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {2, 3, 5, 4, 6, 8, 11, 10};//even array
    int odd[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};//odd array


// swap and print even array
    swapalternate(even, 8);
    print(even, 8);
    cout << endl;//change new line
    //print and swap odd array
    swapalternate(odd, 9);
    print(odd, 9);

    return 0;
}