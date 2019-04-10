#include <deque>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    deque<string> deqstr;
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(deqstr));
    
    list<string> liststr {begin(deqstr), end(deqstr)};
    liststr.sort(less<string>());
    copy(begin(liststr), end(liststr), ostream_iterator<string>{cout, " "});
    return 0;
}
