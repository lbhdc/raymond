#include "ray.h"

namespace Material {
  Color linear_interpolation(const Ray &r, const Color &from, const Color &to) {
    auto uv = Math::unit_vector(r.direction);
    auto t = 0.5 * (uv.y + 1.0);
    return (1.0-t)*from  + t*to;
  }

  std::tuple<int, int, int>rgbColor(const Color &c) {
    return {int(255.99*c.x), int(255.99*c.y), int(255.99*c.z)};
  };
}