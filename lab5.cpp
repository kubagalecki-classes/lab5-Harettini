#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
int main()
{
    /* std::vector< int > vs;

     vs.push_back(1);
     for (int i = 0; i < 10; i++) {
         std::cout << vs.size() << "\t";
         std::cout << vs.capacity() << "\t";
         std::cout << &vs[0] << "\n";
         vs.emplace_back(i);
     }*/

    /*std::vector< Human > osada;
    std::cout << osada.size() << "\t";
    std::string a;
    while (1) {
        std::cin >> a;
        if (a == "pop")
            osada.pop_back();
        else if (a == "list") {
            for (unsigned int i = 0; i < osada.size(); i++) {
                std::cout << osada[i].getName() << "\t";
            }
        }
        else {
            osada.push_back(Human(std::move(a), 1, 1, 1));
            std::cout << osada.size() << "\t";
        }
    }*/
    std::list< int > li;
    li.push_back(3);
    li.push_back(4);
    std::cout << &li.front() << "\t" << &li.back() << "\n";
    li.push_front(2);
    li.push_front(1);
    for (std::list< int >::iterator it = li.begin(); it != li.end(); it++)
        std::cout << *it << "\t";
    for (std::list< int >::iterator it = li.end(); it != li.begin();)
        std::cout << *--it << "\t";
}
