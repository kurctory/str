#include "remove_space.h"

using namespace std;

void removeSpaces(std::string& str){
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        std::string::iterator begin = it;
        while ((it != str.end()) && (isspace(*it))) it++;
        if (it - begin > 1)
            it = str.erase(begin + 1, it) - 1;
    }
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
        std::cout<<*it;
}

void removeLastWord(std::string& str){
    if (*(str.end()-1) == ' ')
    str.erase(str.end()-1);
    std::string key;
    std::string::iterator it = str.end()-1;
    while (*it != ' ')
    {
        key = *it + key;
        --it;
    }
//    std::cout <<"key: "<< key << " "<< str.find(key) <<endl;
    str = " "+str+" ";
    while(str.find(" "+key+" ") != string::npos){

        str.erase(str.find(" "+key+" "), key.length() + 1);
    }
    cout<<str;
}

void removeLastLetter(std::string& str){
    std::string::iterator it = str.begin();
    while (it != str.end())
    {
        if (*it == ' ')
            str.erase(it - 1);
        else
        ++it;
    }
    cout << "s without last letter:\n" << str;
}

