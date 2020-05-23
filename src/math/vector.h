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

  inline std::istream& operator>>(std::istream &is, Vector &p) {
    is >> p.x >> p.y >> p.z;
    return is;
  }

  inline std::ostream& operator<<(std::ostream &os, const Vector &p) {
    os << p.x << p.y << p.z;
    return os;
  }

  inline Vector operator+(const Vector &p1, const Vector &p2) {
    return Vector{p1.x + p2.x, p1.y + p2.y, p1.z + p2.z};
  }

  inline Vector operator-(const Vector &p1, const Vector &p2) {
    return Vector{p1.x - p2.x, p1.y - p2.y, p1.z - p2.z};
  }

  inline Vector operator*(const Vector &p1, const Vector &p2) {
    return Vector{p1.x * p2.x, p1.y * p2.y, p1.z * p2.z};
  }

  inline Vector operator/(const Vector &p1, const Vector &p2) {
    return Vector{p1.x / p2.x, p1.y / p2.y, p1.z / p2.z};
  }

  inline Vector operator*(const Vector &p, double s) {
    return Vector{p.x * s, p.y * s, p.z * s};
  }

  inline Vector operator*(double s, const Vector &p) {
    return Vector{p.x * s, p.y * s, p.z * s};
  }

  inline Vector operator/(const Vector &p, double s) {
    return Vector{p.x / s, p.y / s, p.z / s};
  }

  inline Vector operator/(double s, const Vector &p) {
    return Vector{p.x / s, p.y / s, p.z / s};
  }

  inline Vector operator+=(const Vector&p, const Vector &v) {
    return Vector{p.x + v.x, p.y + v.y, p.z + v.z};
  }

  inline Vector operator-=(const Vector&p, const Vector &v) {
    return Vector{p.x - v.x, p.y - v.y, p.z - v.z};
  }

  inline Vector unit_vector(Vector p) {
    return p / p.length();
  }
}

#endif //RAYMOND_VECTOR_H
