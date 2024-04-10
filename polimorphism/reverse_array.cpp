#include <iostream>
#include <cstring>
using namespace std;

void reverseArray(int arr[], int x)
{
    int end = x - 1;
    int mid = x / 2;
    for (int i = 0; i < mid; i++)
    {
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << "\t";
    }
}

void reverseArray(char str[])
{
    int x = strlen(str);
    int end = x - 1;
    int mid = x / 2;
    for (int i = 0; i < mid; i++)
    {
        int temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        end--;
    }

    cout << "\n"<<str;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    char str[] = "Rohit";

    reverseArray(arr, 5);
    reverseArray(str);

    return 0;
}