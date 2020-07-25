//
// Created by monolith on 5/24/20.
//

#ifndef RAYMOND_SPHERE_H
#define RAYMOND_SPHERE_H

#include "ray.h"
#include "../math/vector.h"

namespace material {
  struct Sphere {
    math::Vector origin;
    double radius;

    inline double volume() const {
      return radius*radius;
    }

    bool hit(const Ray &r);
  };
}

#endif //RAYMOND_SPHERE_H
