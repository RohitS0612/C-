#include<iostream>
using namespace std;

class SelectionSort
{
    private:
    int arr[10];
    int size;
    public:
    SelectionSort(int a[], int len)
    {
        for(int i=0; i<size; i++)
        {
            arr[i]=a[i];
            size=len;
        }
    }

    void BeforeSort()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }

    void selection()
    {
        for(int i=0; i<size-1; i++)
        {
            int min= i;
            for(int j=i+1; j<size; j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
                if(min!=i)
                {
                    swap(arr, i, min);
                }
            }
        }
    }

    void swap(int arr[], int first, int second)
    {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }

    void AfterSort()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};
int main()
{
    int arr[]={7,4,10,8,3,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    SelectionSort obj(arr, len);
    cout<<"Before Sort : "<<endl;
    obj.BeforeSort();
    cout<<"\nAfter Sort : "<<endl;  
    obj.selection();
    obj.AfterSort();

    return 0;
}