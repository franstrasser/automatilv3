#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;
int h = 1;
map<string, int> iden;
map<string, int> sep;
map<string, int> kljuc;
map<string, int> oper;
map<string, int> kom;
void wordSeparation(string str) {
    int n;
    string word = "";
    for (auto x : str) {
        if (x == ' ') {
            if (word == "func") {
                if (!kljuc.count("func")) {
                    kljuc.insert(pair<string, int>("func",1));
                }
                else {
                    n = kljuc["func"] + 1;
                    kljuc["func"] = n;
                }
                cout << "('func', kljucna rijec)"<<endl;
            }
            else if (word == "if") {
                if (!kljuc.count("if")) {
                    kljuc.insert(pair<string, int>("if", 1));
                }
                else {
                    n = kljuc["if"] + 1;
                    kljuc["if"] = n;
                }
                cout << "('if', kljucna rijec)" << endl;
            }
            else if (word == "else") {
                if (!kljuc.count("else")) {
                    kljuc.insert(pair<string, int>("else", 1));
                }
                else {
                    n = kljuc["else"] + 1;
                    kljuc["else"] = n;
                }
                cout << "('else', kljucna rijec)" << endl;
            }
            else if (word == "elsif") {
                if (!kljuc.count("elsif")) {
                    kljuc.insert(pair<string, int>("elsif", 1));
                }
                else {
                    n = kljuc["elsif"] + 1;
                    kljuc["elsif"] = n;
                }
                cout << "('elsif', kljucna rijec)" << endl;
            }
            else if (word == "for") {
                if (!kljuc.count("for")) {
                    kljuc.insert(pair<string, int>("for", 1));
                }
                else {
                    n = kljuc["for"] + 1;
                    kljuc["for"] = n;
                }
                cout << "('for', kljucna rijec)" << endl;
            }
            else if (word == "while") {
                if (!kljuc.count("while")) {
                    kljuc.insert(pair<string, int>("while", 1));
                }
                else {
                    n = kljuc["while"] + 1;
                    kljuc["while"] = n;
                }
                cout << "('while', kljucna rijec)" << endl;
            }
            else if (word == "break") {
                if (!kljuc.count("break")) {
                    kljuc.insert(pair<string, int>("break", 1));
                }
                else {
                    n = kljuc["break"] + 1;
                    kljuc["break"] = n;
                }
                cout << "('break', kljucna rijec)" << endl;
            }
            else if (word == "printData") {
                if (!kljuc.count("printData")) {
                    kljuc.insert(pair<string, int>("printData", 1));
                }
                else {
                    n = kljuc["printData"] + 1;
                    kljuc["printData"] = n;
                }
                cout << "('printData', kljucna rijec)" << endl;
            }
            else if (word == "readData") {
                if (!kljuc.count("readData")) {
                    kljuc.insert(pair<string, int>("readData", 1));
                }
                else {
                    n = kljuc["readData"] + 1;
                    kljuc["readData"] = n;
                }
                cout << "('readData', kljucna rijec)" << endl;
            }
            else if (word == "var") {
                if (!kljuc.count("var")) {
                    kljuc.insert(pair<string, int>("var", 1));
                }
                else {
                    n = kljuc["var"] + 1;
                    kljuc["var"] = n;
                }
                cout << "('var', kljucna rijec)" << endl;
            }
            else if (word == "val") {
                if (!kljuc.count("val")) {
                    kljuc.insert(pair<string, int>("val", 1));
                }
                else {
                    n = kljuc["val"] + 1;
                    kljuc["val"] = n;
                }
                cout << "('val', kljucna rijec)" << endl;
            }
            else if (word == "return") {
                if (!kljuc.count("return")) {
                    kljuc.insert(pair<string, int>("return", 1));
                   }
                else {
                    n = kljuc["return"] + 1;
                    kljuc["return"] = n;
                }
                cout << "('return', kljucna rijec)" << endl;
            }
            else if (word == ";") {
                if (!sep.count(";")) {
                    sep.insert(pair<string, int>(";", 1));
                }
                else {
                    n = sep[";"] + 1;
                    sep[";"] = n;
                }
                cout << "(';', separator)" << endl;
            }
            else if (word == ":") {
                if (!sep.count(":")) {
                    sep.insert(pair<string, int>(":", 1));
                   }
                else {
                    n = sep[":"] + 1;
                    sep[":"] = n;
                }
                cout << "(':', separator)" << endl;
            }
            else if (word == ",") {
                if (!sep.count(",")) {
                    sep.insert(pair<string, int>(",", 1));
                   }
                else {
                    n = sep[","] + 1;
                    sep[","] = n;
                }
                cout << "(',', separator)" << endl;
            }
            else if (word == "+") {
                if (!oper.count("+")) {
                    oper.insert(pair<string, int>("+", 1));
                }
                else {
                    n = oper["+"] + 1;
                    oper["+"] = n;
                }
                cout << "('+', operator)" << endl;
            }
            else if (word == "-") {
                if (!oper.count("-")) {
                    oper.insert(pair<string, int>("-", 1));
                }
                else {
                    n = oper["-"] + 1;
                    oper["-"] = n;
                }
                cout << "('-', operator)" << endl;
            }
            else if (word == "*") {
                if (!oper.count("*")) {
                    oper.insert(pair<string, int>("*", 1));
                }
                else {
                    n = oper["*"] + 1;
                    oper["*"] = n;
                }
                cout << "('*', operator)" << endl;
            }
            else if (word == "/") {
                if (!oper.count("/")) {
                    oper.insert(pair<string, int>("/", 1));
                }
                else {
                    n = oper["/"] + 1;
                    oper["/"] = n;
                }
                cout << "('/', operator)" << endl;
            }
            else if (word == "%") {
                if (!oper.count("%")) {
                    oper.insert(pair<string, int>("%", 1));
                }
                else {
                    n = oper["%"] + 1;
                    oper["%"] = n;
                }
                cout << "('%', operator)" << endl;
            }
            else if (word == "<") {
                if (!oper.count("<")) {
                    oper.insert(pair<string, int>("<", 1));
                }
                else {
                    n = oper["<"] + 1;
                    oper["<"] = n;
                }
                cout << "('<', operator)" << endl;
            }
            else if (word == ">") {
                if (!oper.count(">")) {
                    oper.insert(pair<string, int>(">", 1));
                }
                else {
                    n = oper[">"] + 1;
                    oper[">"] = n;
                }
                cout << "('>', operator)" << endl;
            }
            else if (word == ">=") {
                if (!oper.count(">=")) {
                    oper.insert(pair<string, int>(">=", 1));
                }
                else {
                    n = oper[">="] + 1;
                    oper[">="] = n;
                }
                cout << "('>=', operator)" << endl;
            }
            else if (word == "<=") {
                if (!oper.count("<=")) {
                    oper.insert(pair<string, int>("<=", 1));
                }
                else {
                    n = oper["<="] + 1;
                    oper["<="] = n;
                }
                cout << "('<=', operator)" << endl;
            }
            else if (word == "!=") {
                if (!oper.count("!=")) {
                    oper.insert(pair<string, int>("!=", 1));
                }
                else {
                    n = oper["!="] + 1;
                    oper["!="] = n;
                }
                cout << "('!=', operator)" << endl;
            }
            else if (word == "==") {
                if (!oper.count("==")) {
                    oper.insert(pair<string, int>("==", 1));
                }
                else {
                    n = oper["=="] + 1;
                    oper["=="] = n;
                }
                cout << "('==', operator)" << endl;
            }
            else if (word == "!") {
                if (!oper.count("!")) {
                    oper.insert(pair<string, int>("!", 1));
                }
                else {
                    n = oper["!"] + 1;
                    oper["!"] = n;
                }
                cout << "('!', operator)" << endl;
            }
            else if (word == "||") {
                if (!oper.count("||")) {
                    oper.insert(pair<string, int>("||", 1));
                }
                else {
                    n = oper["||"] + 1;
                    oper["||"] = n;
                }
                cout << "('||', operator)" << endl;
            }
            else if (word == "&&") {
                if (!oper.count("&&")) {
                    oper.insert(pair<string, int>("&&", 1));
                }
                else {
                    n = oper["&&"] + 1;
                    oper["&&"] = n;
                }
                cout << "('&&', operator)" << endl;
            }
            else if (word == "=") {
                if (!oper.count("=")) {
                    oper.insert(pair<string, int>("=", 1));
                }
                else {
                    n = oper["="] + 1;
                    oper["="] = n;
                }
                cout << "('=', operator)" << endl;
            }
            else if (word == "@") {
                if (!kom.count("@")) {
                    kom.insert(pair<string, int>("@", 1));
                }
                else {
                    n = kom["@"] + 1;
                    kom["@"] = n;
                }
                cout << "('@', jednolinijski komentar)" << endl;
            }
            else if (word == "{") {
                if (!sep.count("{")) {
                    sep.insert(pair<string, int>("{", 1));
                }
                else {
                    n = sep["{"] + 1;
                    sep["{"] = n;
                }
                cout << "('{', separator)" << endl;
            }
            else if (word == "}") {
                if (!sep.count("}")) {
                    sep.insert(pair<string, int>("}", 1));
                }
                else {
                    n = sep["}"] + 1;
                    sep["}"] = n;
                }
                cout << "('}', separator)" << endl;
            }
            else if (word == "(") {
                if (!sep.count("(")) {
                    sep.insert(pair<string, int>("(", 1));
                }
                else {
                    n = sep["("] + 1;
                    sep["("] = n;
                }
                cout << "('(', separator)" << endl;
            }
            else if (word == ")") {
                if (!sep.count(")")) {
                    sep.insert(pair<string, int>(")", 1));
                }
                else {
                    n = sep[")"] + 1;
                    sep[")"] = n;
                }
                cout << "(')', separator)" << endl;
            }
            else {
                if (!iden.count(word)) {
                    iden.insert(pair<string, int>(word, 1));
                }
                else {
                    n = iden[word] + 1;
                    iden[word] = n;
                }
                cout << "('"<<word<<"', identifikator)" << endl;
            }
            word = "";
            if (!sep.count(" ")) {
                sep.insert(pair<string, int>(" ", 1));
            }
            else {
                n = sep[" "] + 1;
                sep[" "] = n;
            }
            cout << "(' ', separator)" << endl;
        }
        else {
            word = word + x;
        }
    }
}


int main() {
    fstream myfile;
    string line;
    myfile.open("example.txt", ios::in);
    if (myfile.is_open())
    {
        while (getline(myfile,line)) {
            cout <<"Line "<<h<<": "<< line << endl;
            wordSeparation(line);
            h++;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
    cout << endl;
    int n = 0;
    for (const auto& elem : sep)
    {
        n+=elem.second;
    }
    cout << "separatori[" << n << "]:";
    for (const auto& elem : sep)
    {
        cout << " '"<<elem.first<<"'[" << elem.second <<"],";
    }
    cout << endl << endl;
    n = 0;
    for (const auto& elem : iden)
    {
        n += elem.second;
    }
    cout << "identifikatori[" << n << "]:";
    for (const auto& elem : iden)
    {
        cout << " '" << elem.first << "'[" << elem.second << "],";
    }
    cout << endl << endl;
    n = 0;
    for (const auto& elem : kljuc)
    {
        n += elem.second;
    }
    cout << "kljucne rijeci[" << n << "]:";
    for (const auto& elem : kljuc)
    {
        cout << " '" << elem.first << "'[" << elem.second << "],";
    }
    cout << endl << endl;
    n = 0;
    for (const auto& elem : oper)
    {
        n += elem.second;
    }
    cout << "operatori[" << n << "]:";
    for (const auto& elem : oper)
    {
        cout << " '" << elem.first << "'[" << elem.second << "],";
    }
    cout << endl << endl;
    return 0;
}


