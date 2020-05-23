#ifndef RAYMOND_RAY_H
#define RAYMOND_RAY_H

#include <tuple>
#include "../math/vector.h"

namespace Material {
  using Color = Math::Vector;

  struct Ray {
    Math::Vector origin;
    Math::Vector direction;

    Math::Vector pointAtParameter(double scaler) const {
      return origin + direction * scaler;
    }
  };

  Color linear_interpolation(const Ray &r, const Color &from, const Color &to);
  std::tuple<int, int, int>rgbColor(const Color &c);
}

#endif //RAYMOND_RAY_H
