#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;

template<typename T>
void printStack(stack<T> stk) 
{
    while (!stk.empty()) 
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}

bool isPalindrome(stack<char> stk, string input) 
{
    const auto len = stk.size();
    size_t i = 0;
    while (i < len/2) 
    {
        const char lc = toupper(stk.top());
        const char rv = toupper(input[i]);
        if (lc != rv)
            return false;
        stk.pop();
        i++;
    }
    return true;
}

int main()
{
    stack<char> stack_str;
    string input;
    getline(cin, input);
    
    for(const auto& ch : input) 
        stack_str.push(ch);
    
    //뒤집어서 출력
    printStack(stack_str);

    //회문인지 확인
    cout << boolalpha << isPalindrome(stack_str, input) << endl;

    return 0;
}
