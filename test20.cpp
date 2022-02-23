#include <iostream>
#include <string>
#include <list>

int main(void)
{
    std::list<std::string> dnaSeq;

    dnaSeq.push_back("AAAAA");
    dnaSeq.push_back("CCCCC");
    dnaSeq.push_front("GGGGG");
    dnaSeq.push_front("TTTTT");
    dnaSeq.push_front("CGCGC");

    std::list<std::string>::iterator itr;

    for (itr = dnaSeq.begin(); itr != dnaSeq.end(); itr++)
    {
        std::cout << *itr << std::endl;
    }
    // AAAAA
    // CCCCC
    // GGGGG
    // TTTTT
    // CGCGC

    itr = dnaSeq.begin();
    itr++;
    itr++;
    dnaSeq.erase(itr);

    itr = dnaSeq.begin();
    itr++;
    itr++;
    itr++;
    dnaSeq.insert(itr, "ATATA");

    for (itr = dnaSeq.begin(); itr != dnaSeq.end(); itr++)
    {
        std::cout << *itr << std::endl;
    }
    // AAAAA
    // CCCCC
    // TTTTT
    // ATATA
    // CGCGC

    return 0;
}