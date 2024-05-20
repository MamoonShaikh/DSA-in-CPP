#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element"<<endl;
    cin>>n;

    if(n<=0|| n >100){
        cout<<"Invalid number of element please enter valid number";
        return 1;
    } 

    int arr[100];
    cout<<"Enter the element of array";
    for(int i=0; i<n; ++i){
        cin>>arr[i];
}
int sum=0;
for(int i=0; i<n;++i){
    sum +=arr[i];
}
cout<<"the sum of the element is"<<sum<<endl;
return 0;


}