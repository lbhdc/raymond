#ifndef RAYMOND_COLOR_H
#define RAYMOND_COLOR_H

#include "ray.h"
#include "../math/vector.h"

namespace material {
  using Color = math::Vector;
  Color linearInterpolation(Ray &r, const Color &from, const Color &to);
  std::tuple<long, long, long>rgbColor(const Color &c);
}

#endif
