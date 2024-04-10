#include <iostream>
using namespace std;
class InsertionSort
{
private:
    int arr[10];
    int size;

public:
    InsertionSort(int a[], int len)
    {
        // int len = sizeof(a) / sizeof(a[0]);
        for (int i = 0; i < len; i++)
        {
            arr[i] = a[i];
        size=len;

        }
    }

    void beforesort()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }

    void Insertion()
    {
        // int size = sizeof(arr) / sizeof(arr[0]);
        for (int i = 1; i < size; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }

    void afterSort()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};
int main()
{
    int arr[] = {5, 5, 10, 1, 6, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    InsertionSort obj(arr, len);
    cout<<"Before sort : "<<endl;
    obj.beforesort();
    obj.Insertion();
    cout<<"\nAfter sort : "<<endl;
    obj.afterSort();

    return 0;
}