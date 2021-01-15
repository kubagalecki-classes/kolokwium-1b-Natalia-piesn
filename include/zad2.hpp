#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
using namespace std;
class PopGwiazda : public Artysta
{
  Artysta(const string& s, const unsigned& n)
  void graj(std::ostream& stream) const {
    stream << "Popgwiazda: " << getPseudonim();
  }
};
class RapGwiazda : public Artysta
{
  Artysta(const string& s, const unsigned& n)
  void graj(std::ostream& stream) const {
    stream << "Rapgwiazda: " << getPseudonim();
  }
};

Artysta* stworzArtyste(const string& pseud)
{
  if (pseud.front() == toupper(pseud.front()))
  {
    return new PopGwiazda("BTS", 1234);
  }
  else 
  {
    return new RapGwiazda("Ye", 4321);
  }
}