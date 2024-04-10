#include <iostream>
using namespace std;

class ArrayOperations
{
public:
    virtual void performOperation(int x[], int size) = 0;
};

class Sorting : public ArrayOperations
{

public:
    void performOperation(int x[], int size)
    {
        // selection sort
        //  Length calculation
        // int len = sizeof(x) / sizeof(x[0]);
        for (int i = 0; i < len - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < len; j++)
            {
                if (a[j] < a[min])
                {
                    min = j;
                }
                if (min != i)
                {
                    int temp = a[i];
                    a[i] = a[min];
                    a[min] = temp;
                }
            }
        }

        for (int i = 0; i < len; i++)
        {
            cout << x[i] << " ";
        }
    }
};

class Isertion : public ArrayOperations
{

protected:
    int index;
    int value;
    int len;

public:
    void setValue(int n, int v)
    {
        index = n;
        value = v;
    }
    void performOperation(int x[], int size)
    {
        // int len = sizeof(x) / sizeof(x[0]);
        len = size;

        for (int i = (len - 1); i >= index; i--)
        {
            x[i + 1] = x[i];
        }
        x[index] = value;

        for (int i = 0; i < len; i++)
        {
            cout << x[i] << " ";
        }
    }
};

class Deletion : public ArrayOperations
{
protected:
    int index;
    int len;

public:
    void setIndex(int ind)
    {
        index = ind;
    }

    void performOperation(int x[], int size)
    {
        // int len = sizeof(x) / sizeof(x[0]);
            len = size;
        for (int i = index; i < len; i++)
        {
            x[i] = x[i + 1];
        }
        len--;
        for (int i = 0; i < len; i++)
        {
            cout << x[i] << " ";
        }
    }
};

class Reverse : public ArrayOperations
{
    protected:
    int len;
public:
    void performOperation(int x[], int size)
    {
        len = size;
        // int len = sizeof(x) / sizeof(x[0]);
        int end = len - 1;
        int mid = len / 2;
        for (int i = 0; i < mid; i++)
        {
            int temp = x[i];
            x[i] = x[end];
            x[end] = temp;
            end--;
        }

        for (int i = 0; i < len; i++)
        {
            cout << x[i] << " ";
        }
    }
};

int main()
{

    Sorting s;
    Isertion i;
    Deletion d;
    Reverse r;
    int arr[] = {2, 6, 8, 4, 6, 2, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "1)Sorting \n 2)Insertion \n 3)Deletion 4)Reverse \nEnter Your Choice : ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        s.performOperation(arr, len);
        break;

    case 2:
        int index, value;
        cout << "Enter Index : ";
        cin >> index;
        cout << "Enter value : ";
        cin >> value;
        i.setValue(index, value);
        i.performOperation(arr, len);
        break;

    case 3:
        int index;
        cout << "Enter delete index : ";

        d.setIndex(index);
        d.performOperation(arr, len);
        break;

    case 4:
        r.performOperation(arr, len);
        break;

    default:
        break;
    }

    return 0;
}