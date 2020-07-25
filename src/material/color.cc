#include "color.h"

namespace material {
  Color linearInterpolation(Ray &r, const Color &from, const Color &to) {
    auto uv = math::unitVector(r.direction);
    auto t = 0.5 * (uv.y + 1.0);
    return (1.0-t)*from  + t*to;
  }

  std::tuple<long, long, long> rgbColor(const Color &c) {
    return {long(255.99*c.x), long(255.99*c.y), long(255.99*c.z)};
  };
}