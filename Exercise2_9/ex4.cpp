#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <deque>

using namespace std;

int main()
{
    list<string> cities;
    string input;
    while(getline(cin, input))
        cities.push_back(input);

    deque<string> cities_copy;
    copy(begin(cities), end(cities), front_inserter(cities_copy));
    sort(begin(cities_copy), end(cities_copy), less<string>());
    copy(begin(cities_copy), end(cities_copy), ostream_iterator<string>(cout, " "));
    return 0;
}