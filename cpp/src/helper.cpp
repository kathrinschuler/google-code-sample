#include "helper.h"

#include <iostream>
#include <sstream>
#include <vector>

std::string trim(std::string toTrim) {
  size_t trimPos = toTrim.find_first_not_of(" \t");
  toTrim.erase(0, trimPos);
  trimPos = toTrim.find_last_not_of(" \t");
  if (std::string::npos != trimPos) {
    toTrim.erase(trimPos + 1);
  }
  return toTrim;
}
