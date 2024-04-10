#include <iostream>
using namespace std;

class student
{
private:
    /* data */
    int *arr, per, sum = 0;

public:
    void setsubMark(int s[], int x)
    {

        for(int i=0; i<x; i++)
        {
            arr[i]=s[i];
        }
    }

    void calculatePer()
    {
        for (int i = 0; i < 6; i++)
        {
            sum += arr[i];
        }
        // cout<<sum<<endl;
        per = sum % 100;
        // cout<<per;
    }

    void checkGrades()
    {
        for (int i = 0; i < 6; i++)
        {
            if (per > 75 && per <= 100)
            {
                cout << "\nstudent in distinction";
                break;
            }
            else if (per > 60 && per <= 75)
            {
                cout << "\nfirst division";
                break;
            }
            else if (per >= 50 && per <= 60)
            {
                cout << "\nsecond division";
                break;
            }
            else if (per > 40 && per <= 50)
            {
                cout << "\nthird division";
                break;
            }
            else if (per < 40)
            {
                cout << "\nstudent failed";
                break;
            }
        }
    }
};

int main()
{
    student s;
    string sub[] = {"english", "marathi", "Maths", "Science", "Physics", "CS"};

    int mark[6];
    cout<<"Enter the subject marks : \n";
    for (int i = 0; i < 6; i++)
    {
        cout << sub[i] << " = ";
        cin >> mark[i];
    }

    s.setsubMark(mark, 6);
    s.calculatePer();
    s.checkGrades();

    return 0;
}