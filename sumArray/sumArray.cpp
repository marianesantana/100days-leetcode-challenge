#include <iostream>
#include<string.h>
#include<vector>
#include<charconv>
#include<stack>

using std::string;
using std::vector;
using std::ostream;
using namespace std;

vector<int> sumArray(vector<int> array, int targetNum) {
        for(int i = 0; i<array.size() -1; i++){
            int numOne = array[i];
            for(int prox = 0; prox<array.size(); prox++){
                int numTwo = array[prox];
                if(numOne + numTwo == targetNum){
                    return vector<int>{numOne, numTwo};
                }
            }
        }
        return {};

    }

int main()
{
    vector<int> result = sumArray({3, 5, -4, 8, 11, 1, -1, 6}, 10);
    return 0;
}