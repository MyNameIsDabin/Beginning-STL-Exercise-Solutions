#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    list<string> cities;
    string input;
    while(getline(cin, input))
        cities.push_back(input);

    cities.sort(less<string>());
    
    size_t width = max_element(begin(cities), end(cities), [](const auto& lv, const auto& rv) {
        return lv.size() > rv.size();
    })->size();
    
    for(const auto& city : cities) {
        cout << setw(width) << city << endl;
    }
    return 0;
}