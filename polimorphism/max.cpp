// Assigment No 4:
// --------------------------------------------------------------------------------------------------
// int getMax(int a[]): this function accept integer array as parameter and find max value return it.
// char getMax(char c[]): this function can accept character array as input and return max character
// Example: adbc
// Output: Max character is d


#include<iostream>
#include<cstring>
using namespace std;

int getMax(int arr[], int x)
{
    int max = arr[0];
    for(int i=0; i<x; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    return max;

}

char getMax(char c[])
{
    int len = strlen(c);
    char Max;
    for(int i=0; i<len; i++)
    {
        if(Max<c[i])
        {
            Max = c[i];
        }
    }

    return Max;
}


 int main()
 {

    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Max elemnt is : "<<getMax(arr, 9);
    cout<<endl;
    char str[] = "God";
    cout<<"Max charecter is : "<<getMax(str);
    return 0;
 }