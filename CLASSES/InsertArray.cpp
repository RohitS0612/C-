#include <iostream>
using namespace std;

class InsertArray
{
private:
    int *arr;
    int index, value;
    int len = 6;

public:
    void setIntArray(int array[])
    {
        arr = array;
        // here accept the integer array and store in instance variable in integer array
        
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << "\t";
        }
    }

    void InsertValueOnIndex()
    {
        // here we need to write the manual logics for inserting value on specified index in arr.
        cout << "\nEnter the Index : ";
        cin >> index;
        cout << "Enter the Value : ";
        cin >> value;
        for (int i = (len - 2); i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
    }

    void show()
    {
        for (int i = 0; i < len; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{
    InsertArray a;
    int arr[6];
    a.setIntArray(arr);
    a.InsertValueOnIndex();
    a.show();
    return 0;
}