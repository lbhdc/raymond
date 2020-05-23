#ifndef RAYMOND_RAY_H
#define RAYMOND_RAY_H

#include "../math/vector.h"

namespace Material {
  struct Ray {
    Math::Vector a;
    Math::Vector b;

    Math::Vector pointAtParameter(double s) const {
      return a + b * s;
    }

    Math::Vector origin() const { return a; }
    Math::Vector direction() const { return b; }
  };

  // linear interpolation between white and blue
  Math::Vector color(const Ray &r);
}

#endif //RAYMOND_RAY_H
