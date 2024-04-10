#include<iostream>
using namespace std;

int first(int num)
{
    int first;
     while(num !=0 )
    {
        int rem = num%10;
        first = rem;
        num = num /10;
    }
    return first;
}

int last(int num)
{
    return num%10;
}
int main()
{
    int num ;
    cout<<"enter the Number : ";
    cin>>num;
    
    cout<<"first = "<<first(num)<<endl;    
    cout<<"last = "<<last(num);

 return 0;   
} 
