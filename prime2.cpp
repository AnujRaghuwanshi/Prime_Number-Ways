#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter natural number: ";
    cin>>number;

    int count=0;
    for(int i=2;i<number;i++){
        if(number%i==0) {
            count++;
            break;
        }
    }
    if(count==1) cout<<number<<" is not prime";
    else
    cout<<number<<" is prime";
   
    return 0;
}
/*In this program we are checking whether a number is prime or not by
using for loop from i=2 to i<number.
If number is divisible by i increase the count by 1.
If after loop count=1 number is prime else not prime.
*/