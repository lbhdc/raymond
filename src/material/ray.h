#ifndef RAYMOND_RAY_H
#define RAYMOND_RAY_H

#include <tuple>
#include "../math/vector.h"

namespace Material {
  struct Ray {
    Math::Vector origin;
    Math::Vector direction;

    Math::Vector pointAtParameter(double scaler) const {
      return origin + direction * scaler;
    }
  };
}

#endif //RAYMOND_RAY_H
