// 1.	Write a C program to print all natural numbers from 1 to n. - using while loop 

#include<iostream>
using namespace std;
int main()
{
    int num = 100;

    int i = 1;
    while(i<=num)
    {
        if(i%2==0)
        {
            cout<<i<<"\t";
        }
        i++;
    }
    return 0;
}