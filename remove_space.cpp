#include "remove_space.h"

using namespace std;

int main()
{
    std::string buf;
    std::cout << "String: ";
    std::getline(std::cin, buf);
    std::cout << "String without spaces: ";
    removeSpaces(buf);
    std::cout <<endl;
    std::cout << "String without last word: ";
    removeLastWord(buf);
    std::cout <<endl;
    std::cout << "String without last letter: ";
    removeLastLetter(buf);
}
