// Assignments No.1
// _______________________________________________________
// void sort(int a[]): this function accept integer array and perform sorting on it.
// void sort(char[]): this function can accept character array and perform sorting on it.

#include <iostream>
#include <cstring>
using namespace std;

void sort(int arr[], int arrSize)
{
    // int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << "\t";
    }
}

void sort(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << str;
}

int main()
{

    int arr[]={9,8,7,6,5,4,3,2,1};
    sort(arr, 9);
    cout<<endl;
    char str[]="rohit";
    sort(str);
    return 0;
}