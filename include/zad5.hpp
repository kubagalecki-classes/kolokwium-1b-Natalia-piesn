#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
using namespace std;
template <class T>
int liczPopularnych(T it_b, T it_e)
{
  return count_if(it_b, it_e, [](T a){return a.getSluchacze()>1000;});
}
