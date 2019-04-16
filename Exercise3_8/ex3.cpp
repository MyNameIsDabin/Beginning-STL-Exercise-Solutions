#include <iostream>
#include <queue>
#include <string>

using namespace std;

template<typename T>
void printPriorityQueue(priority_queue<T> prqueue) 
{
    while(!prqueue.empty()) 
    {
        cout << prqueue.top() << endl;
        prqueue.pop();
    }
}

int main()
{
    priority_queue<string> prqueue {};
    
    string input;
    while(cin >> input)
    {
        if (cin.eof())
            break;
            
        prqueue.push(input);
    }
    
    printPriorityQueue(prqueue); //그냥 출력하면 알파벳 역순
       
    return 0;
}