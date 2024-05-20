#include <iostream>
using namespace std;

int main() {
    int n;

    // Step 1: Read the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Validate the input size
    if (n <= 0 || n > 100) {  // Assuming 100 is a reasonable max size
        cout << "Invalid number of elements. Please enter a value between 1 and 100." << endl;
        return 1;  
    }

    int arr[100];  // Declare an array with a fixed size
    

    // Step 2: Read the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Step 3: Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Step 4: Output the sum
    cout << "The sum of the elements is: " << sum << endl;

    return 0;
}
