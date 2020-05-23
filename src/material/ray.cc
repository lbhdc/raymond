#include "ray.h"

namespace Material {
  Math::Vector color(const Ray &r) {
    auto uv = Math::unit_vector(r.direction());
    auto t = 0.5 * (uv.y + 1.0);
    return (1.0-t)*Math::Vector{1.0, 1.0, 1.0}  + t*Math::Vector{0.5, 0.7, 1.0};
  }
}