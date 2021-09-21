#include <iostream>

using namespace std;

int main()
{
    int arr[1000], i, a[1000], b[1000];
    char c = ' ';
    int locate = 0;
    for (i = 0; i < 500; i++)
    {
    	cin >> arr[i];
	}
	for (i = 0; i < 500; i++)
	{
		if (arr[i] == 0)
		{
			locate = i + 1;
			break;
		}
	}
    int count1 = 0, count2 = 0;
    for (i = 0; i < locate; i++)
    {
        if (arr[i]%2 == 0)
        {
            a[count1] = arr[i];
            count1++;
        }
        else
        {
            a[count2] = arr[i];
            count2++;
        }
    }
    int j;
    for (i = 0; i < count1 - 1; i++)
    {
        for (j = i + 1; j < count1; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }   
    }
    for (i = 0; i < count2 - 1; i++)
    {
        for (j = i + 1; j < count2; j++)
        {
            if (b[i] < b[j])
            {
                int tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }   
    }
    for (i = 0; i < count1; i++)
    {
        cout << a[i] << ' ';
    }
    for (i = 0; i < count2; i++)
    {
        cout << b[i] << ' ';
    }
    return 0;
}
