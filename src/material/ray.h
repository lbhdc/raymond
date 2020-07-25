#ifndef RAYMOND_RAY_H
#define RAYMOND_RAY_H

#include <tuple>
#include "../math/vector.h"

namespace material {
  struct Ray {
    math::Vector origin;
    math::Vector direction;

    [[nodiscard]] constexpr math::Vector pointAtParameter(double scaler) const {
      return origin + direction * scaler;
    }
  };
}

#endif