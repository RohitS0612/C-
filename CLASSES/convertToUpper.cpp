#include <iostream>
using namespace std;

class convertToUpper
{
private:
    char *c;
    int i = 0;

public:
    void setCharecter(char ch[])
    {
        // here accept the character array and store in instance variable in character array
        c = ch;
    }

    void convertToUpperCase()
    {
        // here we need to write the manual logics for converting lower case array
        while (c[i] != '\0')
        {
            if (c[i] >= 'a' && c[i] <= 'z')
            {
                c[i] = c[i] - 32;
            }
            i++;
        }
    }
};
int main()
{
    convertToUpper u;
    char s[] = "rohit";
    cout << s << " <-- Converted in Upper Case -->";
    u.setCharecter(s);
    u.convertToUpperCase();
    cout << s;
    return 0;
}