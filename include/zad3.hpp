#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
using namespace std;

template <typename T>
class ArtystaPlusInstrument
{
private:
  Artysta a;
  T i;
public:
  ArtystaPlusInstrument(const Artysta& ar, const T& ti) : a(ar), i(ti){}
  unsigned koncert()
  {
    return i.liczbaUczestnikow(a);
  }
};