#include<iostream>
using namespace std;

void countFrequency(int arr[], int len )
{
    //count even and odd Number in array
    // int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nEven = \n";
    
    for(int i=0; i<len; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"\t";
        }
    }


    cout<<"\nodd=\n";
    for(int i=0; i<len; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"\t";
        }
    }

}

void countFrequency(char s[])
{
    // count digit , alphabet, special syambol, charecter in string
    int count =0, alpha =0, digit=0, words=0, schar=0;

	for(int i=0; s[i]; i++)
	{
		if(s[i] ==' ' && s[i+1]!= ' ')
		{
			words++;
		}
		if(s[i]!='\0')
		{
			count++;
			
		}
		if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 90 && s[i] <= 122))
		{
			alpha++;
			
		}
		else if(s[i] >= 48 && s[i] <= 57)
		{
			digit++;
		}
		else if(s[i]!=' ') 
		{
			schar++;
		}
	}
	printf("\n Words = %d ", words+1);
	printf("\n cahrecter = %d",count);
	printf("\n alphabet = %d",alpha);
	printf("\n digit = %d",digit);
	printf("\n Special Charecter = %d", schar);
}


int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char str[] = "Email shetakerohit2@gmail.com";
    cout<<"Array:"<<endl;
    countFrequency(arr, 10);
    cout<<endl<<"charecter: "<<str<<endl;
    countFrequency(str);

    return 0;
}