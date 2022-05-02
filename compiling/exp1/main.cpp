/**
 * @author: Woog
 * @date: 2022/4/28
 * @description:
 *     编译原理实验一：词法分析器
 */

// 1.
// 关键字：if、int、for、while、do、return、break、continue；单词种别码为1。 2.
// 标识符；单词种别码为2。 3.	常数为无符号整形数；单词种别码为3。 4.
// 运算符包括：+、-、*、/、=、 、<、 =、<=、!= ；单词种别码为4。 5.
// 分隔符包括：,、;、{、}、(、)； 单词种别码为5。

#include <string.h>

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

struct Token {
    int type;
    string value;
};

bool isKeyword(const char* word)
{
    if (strcmp(word, "if") == 0) {
        return true;
    } else if (strcmp(word, "int") == 0) {
        return true;
    } else if (strcmp(word, "for") == 0) {
        return true;
    } else if (strcmp(word, "while") == 0) {
        return true;
    } else if (strcmp(word, "do") == 0) {
        return true;
    } else if (strcmp(word, "return") == 0) {
        return true;
    } else if (strcmp(word, "break") == 0) {
        return true;
    } else if (strcmp(word, "continue") == 0) {
        return true;
    } else {
        return false;
    }
}

bool isSeparator(const char c)
{
    if (c == ',') {
        return true;
    } else if (c == ';') {
        return true;
    } else if (c == '{') {
        return true;
    } else if (c == '}') {
        return true;
    } else if (c == '(') {
        return true;
    } else if (c == ')') {
        return true;
    } else if (c == '"') {
        return true;
    } else if (c == '\'') {
        return true;
    } else {
        return false;
    }
}

bool isOperator(const char c)
{
    if (c == '+') {
        return true;
    } else if (c == '-') {
        return true;
    } else if (c == '*') {
        return true;
    } else if (c == '/') {
        return true;
    } else if (c == '=') {
        return true;
    } else if (c == '<') {
        return true;
    } else if (c == '>') {
        return true;
    } else if (c == '!') {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char const* argv[])
{
    vector<Token> tokens;

    // read from file ./input.txt
    ifstream fin;
    fin.open("./input.txt");
    // print all the content of the file
    // string line;
    // while (getline(fin, line)) {
    //     cout << line << endl;
    // }
    if (!fin.is_open()) {
        cout << "open file failed" << endl;
        return -1;
    }
    char c;
    while ((c = fin.get()) != EOF) {
        // cout << fin.tellg() << endl;
        if (c == ' ' || c == '\n' || c == '\t') {
            continue;
        } else if (isSeparator(c)) {
            tokens.push_back({ 5, string(1, c) });
            cout << "separator: " << c << endl;
        } else if (isOperator(c)) {
            tokens.push_back({ 4, string(1, c) });
            cout << "operator: " << c << endl;
        } else if (isdigit(c)) {
            string num;
            num += c;
            while (1) {
                c = fin.peek();
                if (isdigit(c)) {
                    num += c;
                    fin.get();
                } else if (isSeparator(c) || isOperator(c) || c == ' ' || c == '\n' || c == '\t') {
                    tokens.push_back({ 3, num });
                    break;
                } else {
                    num += c;
                    fin.get();
                    tokens.push_back({ 0, num });
                }
            }
            cout << "number: " << num << endl;
        } else if (isalpha(c) || c == '_') {
            string word;
            word += c;
            while (1) {
                c = fin.peek();
                if (isalpha(c) || isdigit(c) || c == '_') {
                    word += c;
                    fin.get();
                } else if (isSeparator(c) || isOperator(c) || c == ' ' || c == '\n' || c == '\t') {
                    if (isKeyword(word.c_str())) {
                        tokens.push_back({ 1, word });
                    } else {
                        tokens.push_back({ 2, word });
                    }
                    break;
                } else {
                    word += c;
                    fin.get();
                    tokens.push_back({ 0, word });
                }
            }
        } else {
            tokens.push_back({ 0, string(1, c) });
            cout << "error" << endl;
        }
    }
    fin.close();
    // output to file ./output.txt
    ofstream fout;
    fout.open("./output.txt");
    if (!fout.is_open()) {
        cout << "open file failed" << endl;
        return -1;
    }
    for (auto& token : tokens) {
        if (token.type == 0) {
            fout << token.type << " Error : Can't identify the character(s) '" << token.value << "'." << endl;
        } else {
            fout << token.type << " " << token.value << endl;
        }
    }
    fout.close();
    return 0;
}
