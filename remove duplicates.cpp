#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = -1;  
            }
        }
    }

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
