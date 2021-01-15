#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
using namespace std;
class Artysta
{
public:
  Artysta() : pseudonim("Anonim"), sluchacze(0){}
  Artysta(const std::string& ps, unsigned num) : pseudonim(ps), sluchacze(num){}
  void graj(std::ostream& stream) const {
    stream << pseudonim << ": " << sluchacze;
  }
  const std::string& getPseudonim() const { return pseudonim;}
  unsigned getSluchacze() const {return sluchacze;}
private:
  string pseudonim;
  unsigned sluchacze;
};