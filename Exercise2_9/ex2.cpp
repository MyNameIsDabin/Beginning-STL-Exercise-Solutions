#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    vector<string> cities;
    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(cities));

    //오름차순 정렬
    sort(begin(cities), end(cities), less<string>());
    
    //가장 긴 이름에 맞춰 고정폭 너비 구하기
    size_t width = max_element(begin(cities), end(cities), [](const auto& lv, const auto& rv) {
        return lv.size() > rv.size();
    })->size();
    
    for(const auto& city : cities) {
        cout << setw(width) << city << endl;
    }
    return 0;
}