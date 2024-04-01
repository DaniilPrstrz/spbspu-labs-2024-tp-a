#ifndef VALUEI_H
#define VALUEI_H

#include <iostream>

namespace chernikova
{
  struct DelimiterI
  {
    const char expected;
    bool variability = false;
  };

  struct DoubleI
  {
    double& ref;
  };

  struct UnsignedllI
  {
    unsigned long long& ref;
  };

  struct StringI
  {
    const char* ref;
  };

  std::istream& operator>>(std::istream& in, chernikova::DelimiterI&& 
exp);
  std::istream& operator>>(std::istream& in, chernikova::DoubleI&& exp);
  std::istream& operator>>(std::istream& in, chernikova::UnsignedllI&& 
exp);
  std::istream& operator>>(std::istream& in, chernikova::StringI&& dest);
}

#endif

