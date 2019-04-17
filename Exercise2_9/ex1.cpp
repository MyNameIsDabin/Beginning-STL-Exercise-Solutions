#include <iostream>
#include <array>

using namespace std;

template<typename T>
void printArray(T arr, const size_t perLine)
{
    size_t i=0;
    for(const auto& elem : arr)
    {
        cout << elem << " ";
        if (++i%perLine == 0)
            cout << endl;
    }
}


int main()
{
    array<long, 50> arr {0, 1};
    for(size_t i=2; i<arr.size(); i++)
        arr[i] = arr[i-2] + arr[i-1];
    
    printArray(arr, 8);
    return 0;
}
