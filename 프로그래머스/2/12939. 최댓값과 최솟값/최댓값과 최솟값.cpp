#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int min,max,num;
    string word;
    istringstream input(s);
    
    getline(input, word, ' ');
    min = stoi(word);
    max = min;
    num = 0;
    
    while(getline(input, word, ' '))
    {
        num = stoi(word);  
        if(min > num)
            min = num;
        if(max < num)
            max = num;
    }
    
    answer+=(to_string(min))+ " " + (to_string(max));
    return answer;
}