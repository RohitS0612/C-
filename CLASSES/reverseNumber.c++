// reverse number
#include <iostream>
using namespace std;
class reverse
{
private:
    int no;

public:
    void setValue(int x)
    {
        no = x;
    }

    int Rev()
    {
        int r = 0;
        while (no != 0)
        {
            int rem = no%10;
            no = no / 10;
            r = r * 10+rem;
        }
        return r;
    }
};

int main()
{
    reverse r;
    int no;
    cout<<" Enter the Number : ";
    cin>>no;
    r.setValue(no);
   int result = r.Rev();
    cout<<no<<" <------reversed------> "<<result;

}