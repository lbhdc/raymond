#include <iostream>
#include "material/color.h"
#include "material/ray.h"
#include "math/vector.h"

int main() {
  auto nx = 200;
  auto ny = 100;
  std::cout << "P3\n" << nx << " " << ny << "\n255\n";

  auto lowerLeftCorner = math::Vector{-2.0, -1.0, -1.0};
  auto horizontal = math::Vector{4.0, 0.0, 0.0};
  auto vertical = math::Vector{0.0, 2.0, 0.0};
  auto origin = math::Vector{0.0, 0.0, 0.0};

  for (int j=ny-1; j>=0; --j) {
    for (int i=0; i<nx; ++i) {
      auto u = double(i) / double(nx);
      auto v = double(j) / double(ny);
      auto ray = material::Ray{
        origin,
        lowerLeftCorner + u * horizontal + v * vertical
      };

      auto white = material::Color{1.0, 1.0, 1.0};
      auto blue = material::Color{0.5, 0.7, 1.0};
      auto [r, g, b] = material::rgbColor(
        material::linearInterpolation(ray, white, blue)
      );

      // FIXME: overflow somewhere
      std::cout << r << " " << g << " " << b << "\n";
    }
  }
}
