#include <iostream>
using namespace std;
void printArray(int Arr[], int size)
{
    cout << "print the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << endl;
    }
    cout << "printing end" << endl;
}
int main()
{
    int first[10] = {};
    int n = 10;
    printArray(first, 10);
    cout << endl;
    int second[15];
    n = 15;
    printArray(second, 15);
    cout << endl;
    int third[20] = {2, 4, 3, 2};
    n = 20;
    printArray(third, 20);
    cout << endl;
    int fourth[5] = {4, 3, 5, 2, 1};
    n = 5;
    printArray(fourth, 5);

    //     int arr[5]={5,3,1,4,5};
    //     for(int i=0; i<5; i++){

    //     cout<<"array vlues"<< arr[i]<< endl<<endl;
    //     }
    //     return 0;
    // }

    // store single value in array

    // for (int i = 0; i < 10; i++)
    // {
    //     // myarr[i] = 4 ;
    //     // cout << myarr[i] << endl;
    //     myarr[i] = i * 2;
    //     cout << myarr[i] << endl;
    // }

    return 0;
}
