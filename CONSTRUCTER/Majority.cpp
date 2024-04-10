// Q.3 WAP to Create a class name as Majority with a parameterised constructor and one function int getMajority( ).

// Majority(int [ ])
// {
// // this constructor can accept the array.
// }

// int getMajority()
// {
// //this function can use if it's yes then return 1 otherwise return 0.
// }

#include <iostream>
using namespace std;

class Majority
{
private:
    int arr[10];
    int len;
public:
    Majority(int arr[],  int size)
    {
        this->arr[10]=arr[10];
        len = size;

    }

    int getMajority()
    {
        int count = 0;
        int MaxCount = 0;
        int mid = len/2;
        for(int i=0; i<len; i++)
        {
            count = 0;
            for(int j=i+1; j<len; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                if(count > mid)
                {
                   MaxCount= count; 
                }
            }
        }

        if(MaxCount>mid)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{

    int arr[]={1,2,1,1,1,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    Majority obj(arr, len);
    cout<<obj.getMajority();
    return 0;
}