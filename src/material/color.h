//
// Created by monolith on 5/24/20.
//

#ifndef RAYMOND_COLOR_H
#define RAYMOND_COLOR_H

#include "ray.h"
#include "../math/vector.h"

namespace Material {
  using Color = Math::Vector;

  Color linear_interpolation(const Ray &r, const Color &from, const Color &to);
  std::tuple<int, int, int>rgbColor(const Color &c);
}

#endif //RAYMOND_COLOR_H
