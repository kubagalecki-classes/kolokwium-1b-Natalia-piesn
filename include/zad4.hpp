#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
using namespace std;
vector<Artysta> stworzZespol(int a, const string& str)
{
  if (str.size() != a)
  {
    throw logic_error("ups");
  }
  else
  {
    vector<Artysta> vec;
    for (int i=0; i<a; i++)
    {
      vec.push_back("str", i+1);
    }
    return vec;
  }
}