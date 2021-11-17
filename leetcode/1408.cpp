#include <iostream>
#include <vector>
#include <regex>
#include <string>
using namespace std;
vector<string> stringMatching(vector<string>& words);

 
int main() {
    vector<string> word;
    word.push_back("mass");
    word.push_back("as");
    word.push_back("hero");
    word.push_back("superhero");
    vector<string> res = stringMatching(word);
    for (int i = 0; i < res.size(); i++) {
        cout << res.at(i) << ' ';
    }
    
}

vector<string> stringMatching(vector<string>& words) {
    vector<string> result;
    for (int i = 0; i < words.size(); i++) {
        string temp = words.at(i);
        regex reg(".+" + temp + ".+|.+" + temp + "|" + temp + ".+");
        for (int i = 0; i < words.size(); i++) {
            if (regex_match(words.at(i), reg)) {
                result.push_back(temp);
                break;
            }
        }
    }
    return result;
}