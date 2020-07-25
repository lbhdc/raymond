#include "ray.h"
#include "sphere.h"
//#include "../math/vector.h"

namespace material {
  bool Sphere::hit(const Ray &r) {
    auto oc = r.origin - this->origin;
//    auto a =


    return false;
  }
}