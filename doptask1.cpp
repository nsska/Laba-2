#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int arr[] = { 2, 5, -6, 0, -1, 7, -9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    
    for(int i = 0; i < pos; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
