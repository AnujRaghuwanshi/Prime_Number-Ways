#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter natural number: ";
    cin>>number;

    if(number==2 || number==3) cout<<number<<" is a prime";

    else if(number>3){
    int num = number*number;
    if((num-1)%24==0 || (num+1)%24==0){
        cout<<number<<" is Prime number";
    }
    else 
    cout<<number<<" is Not Prime number";
    }
   
    return 0;
}
/*In this program we are checking whether a number is prime or not by
squaring the number and if subtracting or adding 1 to square of the number
makes it divisible by 24 then it is a prime number.....

There is one condition the number should be greater than 3.
*/