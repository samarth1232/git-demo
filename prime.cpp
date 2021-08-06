#include<iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a num to check wether it is prime or not =>";
    cin>>num;

    cout<<isPrime(num);
    return 0;
}