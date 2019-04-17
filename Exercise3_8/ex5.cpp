#include <iostream>
#include <queue>
#include <memory>
#include <string>

using namespace std;
using PString = shared_ptr<string>;


int main()
{
    priority_queue<PString> prqueue {};
    
    string input;
    while(cin >> input)
    {
        if (cin.eof())
            break;
            
        prqueue.push(make_shared<string>(input));
    }
    
    while(!prqueue.empty()) 
    {
        cout << *prqueue.top() << endl;
        prqueue.pop();
    }
    
    return 0;
}
