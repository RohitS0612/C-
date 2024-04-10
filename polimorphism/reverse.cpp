#include<iostream>
using namespace std;

int reverse(int arr[], int x)
{
    int mid = x / 2;
    int end = x - 1;
    for(int i=0; i<mid; i++)
    {
        int temp = arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        end--;
    }


}

int reverse(char* name, int x)
{
    int mid = x/2;
    int end = x-1;
    for(int i=0; i<mid; i++)
    {
        int temp = name[i];
        name[i]=name[end];
        name[end]=temp;
        end--;

    }
}
int main()
{

    int arr[] = {1,2,3,4,5};
    cout<<reverse(arr, 5);
    string arr = "Rohit";
    cout<<reverse(arr, 5);
    return 0;
}