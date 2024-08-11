#pragma once

#include<string>

namespace zlt::ilisp {
  /// b-tree
  struct StrPool {
    size_t valuec;
    std::string values[2];
    StrPool *children[3];
  };

  StrPool *strPoolAdd(StrPool *&root, std::string &&value);
}
