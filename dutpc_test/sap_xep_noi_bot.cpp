#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],i,tb;
    cin>>n;
    for (i = 0; i < n; i++)cin>>arr[i];
    int j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    if (n%2 == 1) 
    {
        cout << arr[(n - 1)/2];
    }
    else
    {
        int locate = n/2;
        cout << arr[locate - 1] << " " << arr[locate] << "\n";
        cout << float((arr[locate - 1] + arr[locate])/2);
    }
    return 0;
}
