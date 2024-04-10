#include <iostream>
using namespace std;

class BubbleSort
{
    private:
    int arr[10];
    int len;

    public:
    BubbleSort(int x[], int size)
    {
        // int size= sizeof(x)/sizeof(x[0]);
        for(int i=0; i<size; i++)
        {
            arr[i]=x[i];
            len = size;
        }
    }

    void beforesort()
    {
        for(int i=0; i<len; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }

    void bubble()
    {
    // int len = sizeof(arr) / sizeof(arr[0]);
        bool swapped;
        for (int i = 0; i < len - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < len - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }

    void afterSort()
    {
        for(int i=0; i<len; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = sizeof(arr) / sizeof(arr[0]);
    BubbleSort obj(arr, len);
    cout<<"Before Sort: "<<endl;
    obj.beforesort();
    cout<<"\nAfter Soert : "<<endl;
    obj.bubble();
    obj.afterSort();


    return 0;
}