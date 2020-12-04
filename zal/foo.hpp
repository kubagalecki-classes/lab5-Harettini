#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector< char > ny(people.size());
  int j=0;
  for (std::list< Human >::iterator it = people.end(); it != people.begin();)
  { --it;
it->birthday();
 if(it->isMonster()==true)
ny[j]='n';
else
ny[j]='y';
j++;}

    // Twoja implementacja tutaj
    return ny;
}
