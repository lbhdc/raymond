#ifndef RAYMOND_VECTOR_H
#define RAYMOND_VECTOR_H

#include <cmath>
#include <istream>
#include <ostream>

namespace math {
  struct Vector {
    double x;
    double y;
    double z;

    double length();

    friend inline std::istream& operator>>(std::istream &is, Vector &v) {
      return is >> v.x >> v.y >> v.z;
    }

    friend inline std::ostream& operator<<(std::ostream &os, const Vector &v) {
      return os << v.x << v.y << v.z;
    }

    [[nodiscard]] friend constexpr auto operator+(const Vector &a, const Vector &b) {
      return Vector{a.x + b.x, a.y + b.y, a.z + b.z};
    }

    [[nodiscard]] friend constexpr auto operator-(const Vector &a, const Vector &b) {
      return Vector{a.x - b.x, a.y - b.y, a.z - b.z};
    }

    [[nodiscard]] friend constexpr auto operator*(const Vector &a, const Vector &b) {
      return Vector{a.x * b.x, a.y * b.y, a.z * b.z};
    }

    [[nodiscard]] friend constexpr auto operator/(const Vector &a, const Vector &b) {
      return Vector{a.x / b.x, a.y / b.y, a.z / b.z};
    }

    [[nodiscard]] friend constexpr auto operator*(const Vector &vector, double scaler) {
      return Vector{vector.x * scaler, vector.y * scaler, vector.z * scaler};
    }

    [[nodiscard]] friend constexpr auto operator*(double scaler, const Vector &vector) {
      return Vector{vector.x * scaler, vector.y * scaler, vector.z * scaler};
    }

    [[nodiscard]] friend constexpr auto operator/(const Vector &vector, double scaler) {
      return Vector{vector.x / scaler, vector.y / scaler, vector.z / scaler};
    }

    [[nodiscard]] friend constexpr auto operator/(double scaler, const Vector &vector) {
      return Vector{vector.x / scaler, vector.y / scaler, vector.z / scaler};
    }

    [[nodiscard]] friend constexpr auto operator+=(const Vector &v1, const Vector &v2) {
      return Vector{v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
    }

    [[nodiscard]] friend constexpr auto operator-=(const Vector &v1, const Vector &v2) {
      return Vector{v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
    }
  };
}

#endif
