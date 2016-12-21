#pragma once

#include "modules/meta/base.hpp"

POLYBAR_NS

namespace modules {
  template <class Impl>
  class static_module : public module<Impl> {
   public:
    using module<Impl>::module;

    void start() {
      CAST_MOD(Impl)->broadcast();
    }

    bool build(builder*, string) const {
      return true;
    }
  };
}

POLYBAR_NS_END
