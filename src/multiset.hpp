#ifndef SRC_MULTISET_HPP_
#define SRC_MULTISET_HPP_

#include <initializer_list>

#include "set.hpp"

namespace s21 {

template <class Key>
class multiset : public set<Key> {
#include "set_using.inc"
  using set<Key>::set;

 public:
  explicit multiset(std::initializer_list<key_type> const &keys)
      : set<Key>::set(keys, false) {}
  std::pair<iterator, bool> insert(const key_type &key) override {
    return std::pair<iterator, bool>(this->tree.insert(key, key), true);
  }
};

}  //  namespace s21

#endif  // SRC_MULTISET_HPP_
