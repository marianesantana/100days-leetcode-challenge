#include <iostream>
#include<string.h>
using std::string;


int lengthOfLastWord(std::string s)
{
        int count = 0;
        int n = s.size();
        int i = 0;
        
        while(i<n){
            if (s[i] != ' '){
                count++;
                i++;
            } else {
                while(i< n && s[i] == ' ') i++;
                
                if (i==n){
                    return count;
                } else {
                    count = 0;
                }
                
            }
        }
        return count;

}

int main()
{
    string word = "hello lenght a ";
    std::cout<<lengthOfLastWord(word)<< std::endl;
  

    return 0;
}
