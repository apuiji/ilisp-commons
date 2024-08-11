#pragma once

#include<concepts>
#include<utility>

namespace zlt {
  template<class ...T>
  struct Types {};

  template<class T, class ...U>
  static inline bool dynamicastable(const T *t, Types<U...>) noexcept {
    return (dynamic_cast<const U *>(t) || ...);
  }

  template<class T, class ...U>
  requires (!std::is_pointer_v<T>)
  static inline bool dynamicastable(const T &t, Types<U...> us) noexcept {
    return dynamicastable(&t, us);
  }

  template<std::invocable DoSth>
  struct Guard {
    DoSth doSth;
    Guard(const DoSth &doSth) noexcept: doSth(doSth) {}
    Guard(DoSth &&doSth) noexcept: doSth(std::move(doSth)) {}
    ~Guard() {
      doSth();
    }
  };

  template<class T>
  static inline constexpr T initialistGet(std::initializer_list<T> ts, size_t i, T elze = T()) noexcept {
    for (T t : ts) {
      if (!i) {
        return t;
      }
      --i;
    }
    return elze;
  }

  template<class T, class U>
  static inline constexpr int initialistIndexOf(std::initializer_list<T> ts, U u) noexcept {
    int i = 0;
    for (T t : ts) {
      if (t == u) {
        return i;
      }
      ++i;
    }
    return -1;
  }
}
