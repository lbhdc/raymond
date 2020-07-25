#ifndef RAYMOND_OPS_H
#define RAYMOND_OPS_H

#include "vector.h"

namespace math {
  [[nodiscard]] constexpr auto dot(Vector &a, Vector &b) {
    return a.x*b.x + a.y*b.y + a.z+b.z;
  }
}


#endif
