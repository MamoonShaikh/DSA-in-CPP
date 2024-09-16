/* calculate sum of digits of a number */

#include<iostream>
using namespace std;
int sumofdigits(int num){
int digsum = 0;
while(num>0){
    int lastdig =num %10;
    num /=10;
    digsum +=lastdig;
}
return digsum;
}
int main(){
    int number;
    cin>>number;
    int ans = sumofdigits(number);
    cout<<"sum of digits of a num"<<" "<<ans<<endl;

}