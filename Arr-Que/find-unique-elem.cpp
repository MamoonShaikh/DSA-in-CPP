#include <iostream>
using namespace std;

// Function to find the unique element in the array
int findUnique(int arr[], int n)
{
    int uniqueElement = 0;
    for (int i = 0; i < n; i++)
    {
        uniqueElement ^= arr[i]; // XOR each element with uniqueElement
    }
    return uniqueElement; 
}

int main()
{
    
    int arr[] = {3, 4, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
   

    // Find and print the unique element
    int unique = findUnique(arr,n);
    cout << "The unique element is: " << unique << endl;

    return 0;
}
