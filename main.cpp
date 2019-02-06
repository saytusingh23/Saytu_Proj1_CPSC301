#include <iostream>
using namespace std;

int reverseArray(int[], int);    //function called reverseArray

void reverse(int arr[], int count)    //reverse function called
{
    int tmp;
    for(int i = 0; i < count / 2; i++)
    {
        arr[i] = tmp;
        tmp = arr[count-i-1];
        arr[count-i-1] = arr[i];
        arr[i] = tmp;
        cout << tmp << " " << endl;
    }
}

int main()     //here begins the main function
{
    const int size = 4;
    int array [size] = {1, 2, 3, 4};
    reverse(array, size);
    return 0;
}

