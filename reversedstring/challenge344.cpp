#include <iostream>
#include<string.h>
#include<vector>
#include<charconv>
#include<stack>

using std::string;
using std::vector;
using namespace std;

void reverseString(vector<char>& s) {
    //o(n2)
        // stack<char> st;
        // for(int i = 0; i<s.size(); i++){
        //     st.push(s[i]);
        // }
        // for(int i = 0; i<s.size(); i++){
        //     s[i] = st.top();
        //     st.pop();
        //     std::cout<<s[i];
        // }

        //o(1) 

        int beginString = 0;
        int finalString = s.size() -1;

        while(beginString <= finalString){
            swap(s[beginString], s[finalString]);
            beginString++;
            finalString--;
        }
    }

int main()
{
    vector<char> word = {'h','e','l','l','o'};
    reverseString(word);
    
    return 0;
}