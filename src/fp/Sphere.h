#pragma once

#include "math/Hit.h"
#include "math/Ray.h"
#include "math/Vec3.h"

#include <optional>

namespace fp {

class Sphere {
  Vec3 centre_;
  double radius_;

public:
  constexpr Sphere(const Vec3 &centre, double radius) noexcept
      : centre_(centre), radius_(radius) {}

  [[nodiscard]] constexpr const Vec3 &centre() const noexcept {
    return centre_;
  }
  [[nodiscard]] constexpr double radius() const noexcept { return radius_; }

  [[nodiscard]] std::optional<Hit> intersect(const Ray &ray) const noexcept;
};

}