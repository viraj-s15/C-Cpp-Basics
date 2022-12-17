#include <iostream>
#include <list>
// The typedef keyword in cpp can be used to define certain typing and give that particular data structure a custom name
// below is an example as to creating a list of strings using typedef

typedef std::list<std::string> sList;

int main() {
    sList list;
    list.push_back("one");
    list.push_back("two");
    for (auto &i : list) {
       std::cout << i << " " ;
    }
    return 0;
}
