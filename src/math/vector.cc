#include <cmath>
#include "vector.h"
#include "ops.h"

namespace math {
  double Vector::length() {
    return sqrt(dot(*this, *this));
  }
}

