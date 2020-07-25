#include <cmath>
#include "vector.h"
#include "ops.h"

namespace math {
  double Vector::length() {
    return sqrt(dot(*this, *this));
  }

  Vector unit_vector(Vector &v) {
    return v / v.length();
  }
}

