#ifndef RAYMOND_VECTOR_H
#define RAYMOND_VECTOR_H

#include <cmath>
#include <istream>
#include <ostream>

namespace Math {
  struct Vector {
    double x;
    double y;
    double z;

    inline double length() const {
      return sqrt(this->dot(*this));
    }

    inline double dot(const Vector other) const {
      return x*other.x, + y*other.y + z*other.z;
    }
  };

  inline std::istream& operator>>(std::istream &is, Vector &v) {
    is >> v.x >> v.y >> v.z;
    return is;
  }

  inline std::ostream& operator<<(std::ostream &os, const Vector &v) {
    os << v.x << v.y << v.z;
    return os;
  }

  inline Vector operator+(const Vector &a, const Vector &b) {
    return Vector{a.x + b.x, a.y + b.y, a.z + b.z};
  }

  inline Vector operator-(const Vector &a, const Vector &b) {
    return Vector{a.x - b.x, a.y - b.y, a.z - b.z};
  }

  inline Vector operator*(const Vector &a, const Vector &b) {
    return Vector{a.x * b.x, a.y * b.y, a.z * b.z};
  }

  inline Vector operator/(const Vector &a, const Vector &b) {
    return Vector{a.x / b.x, a.y / b.y, a.z / b.z};
  }

  inline Vector operator*(const Vector &vector, double scaler) {
    return Vector{vector.x * scaler, vector.y * scaler, vector.z * scaler};
  }

  inline Vector operator*(double scaler, const Vector &vector) {
    return Vector{vector.x * scaler, vector.y * scaler, vector.z * scaler};
  }

  inline Vector operator/(const Vector &vector, double scaler) {
    return Vector{vector.x / scaler, vector.y / scaler, vector.z / scaler};
  }

  inline Vector operator/(double scaler, const Vector &vector) {
    return Vector{vector.x / scaler, vector.y / scaler, vector.z / scaler};
  }

  inline Vector operator+=(const Vector &v1, const Vector &v2) {
    return Vector{v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
  }

  inline Vector operator-=(const Vector &v1, const Vector &v2) {
    return Vector{v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
  }

  inline Vector unit_vector(Vector vector) {
    return vector / vector.length();
  }
}

#endif //RAYMOND_VECTOR_H
