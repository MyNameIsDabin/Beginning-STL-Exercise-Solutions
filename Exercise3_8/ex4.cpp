#include <deque>
#include <list>
#include <iostream>
#include <algorithm>
#include <memory>
#include <string>
#include <utility>

using namespace std;
using PString = shared_ptr<string>;

int main()
{
    deque<PString> deqstr {};
    string input;
    while(cin >> input) 
    {
        if (cin.eof()) 
            break;
        
        deqstr.push_back(make_shared<string>(input));
    }
    
    list<PString> liststr {begin(deqstr), end(deqstr)};
    liststr.sort([](const auto& lv, const auto& rv){ return *lv < *rv; });
    
    for(const auto& str : liststr)
        cout << *str << " ";
    cout << endl;

    return 0;
}
