#ifndef CUT_WHITESPACE_H
#define CUT_WHITESPACE_H
#include <string>
template <class T>
std::string cutWhitespace(T inputData)
{
    std::string toReturn(inputData);
    unsigned int countFirstWhiteSpace = 0;
    while (isspace(toReturn[countFirstWhiteSpace]))
        countFirstWhiteSpace++;
    toReturn.erase(0, countFirstWhiteSpace);
    unsigned int countLastWhiteSpace = toReturn.size() - 1;
    while (isspace(toReturn[countLastWhiteSpace]))
        countLastWhiteSpace--;
    toReturn.erase(countLastWhiteSpace + 1, toReturn.size() - 1);

    return toReturn;
}

#endif