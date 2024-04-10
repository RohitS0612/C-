// 10.	Write a C program to count number of digits in a number. 
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int i=1;
    int count = 0;
    while(num!=0)
    {
        int rem = num%10;
        num = num /10;
        i++;
        count++;
    }

    cout<<"Count = "<<count;

    return 0;
}