#include <iostream>
#include <string.h>
using namespace std;

class Encrypt
{
private:
    char str[100];
    int count;
    int len;

public:
    Encrypt(char str[])
    {
        strcpy(this->str, str);

        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            count = 1;
            for (int j = i + 1; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    str[j] = ' ';
                    count++;
                }
            }
            if (str[i] != ' ')
                cout << str[i] << count << " ";
        }
    }
};

int main()
{
    char stri[] = "abcdabcdccddaabb";
    Encrypt e(stri);
    // e.afterEncrypt();

    return 0;
}