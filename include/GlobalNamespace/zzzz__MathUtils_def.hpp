#pragma once
// IWYU pragma private; include "GlobalNamespace/MathUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MathUtils)
namespace System {
struct DateTime;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MathUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MathUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MathUtils*, "", "MathUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MathUtils
class CORDL_TYPE MathUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Approx, addr 0x5b092c8, size 0xcc, virtual false, abstract: false, final false
static inline bool Approx(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx, addr 0x5b0a460, size 0x74, virtual false, abstract: false, final false
static inline bool Approx(float_t  a, float_t  b, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx0, addr 0x5b0a544, size 0x68, virtual false, abstract: false, final false
static inline bool Approx0(float_t  a, float_t  epsilon) ;

/// [Extension]
/// @brief Method Approx1, addr 0x5b0a4d4, size 0x70, virtual false, abstract: false, final false
static inline bool Approx1(float_t  a, float_t  epsilon) ;

/// @brief Method BoxCorners, addr 0x5b09394, size 0x164, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> BoxCorners(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method BoxCornersNonAlloc, addr 0x5b094f8, size 0x164, virtual false, abstract: false, final false
static inline void BoxCornersNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size, ::ArrayW<::UnityEngine::Vector3>  array, int32_t  index) ;

/// @brief Method CalculateAgeFromDateTime, addr 0x5b0a980, size 0xd0, virtual false, abstract: false, final false
static inline int32_t CalculateAgeFromDateTime(::System::DateTime  Dob) ;

/// @brief Method Clamp, addr 0x5b0a034, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Clamp(::by_ref<::UnityEngine::Vector3>  v, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max) ;

/// [Extension]
/// @brief Method ClampApprox, addr 0x5b0a394, size 0xcc, virtual false, abstract: false, final false
static inline float_t ClampApprox(float_t  f, float_t  min, float_t  max, float_t  epsilon) ;

/// [Extension]
/// @brief Method ClampToReal, addr 0x5b0a290, size 0x104, virtual false, abstract: false, final false
static inline float_t ClampToReal(float_t  f, float_t  min, float_t  max, float_t  epsilon) ;

/// @brief Method GetCircleValue, addr 0x5b0a694, size 0x78, virtual false, abstract: false, final false
static inline float_t GetCircleValue(float_t  degrees) ;

/// @brief Method GetScaledRadius, addr 0x5b0a5ac, size 0xa0, virtual false, abstract: false, final false
static inline float_t GetScaledRadius(float_t  radius, ::UnityEngine::Vector3  scale) ;

/// @brief Method Linear, addr 0x5b0a64c, size 0x2c, virtual false, abstract: false, final false
static inline float_t Linear(float_t  value, float_t  min, float_t  max, float_t  newMin, float_t  newMax) ;

/// @brief Method LinearUnclamped, addr 0x5b0a678, size 0x1c, virtual false, abstract: false, final false
static inline float_t LinearUnclamped(float_t  value, float_t  min, float_t  max, float_t  newMin, float_t  newMax) ;

/// @brief Method MatchMagnitudeInDirection, addr 0x5b0a890, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 MatchMagnitudeInDirection(::UnityEngine::Vector3  input, ::UnityEngine::Vector3  target, float_t  eps) ;

/// @brief Method OrientedBoxContains, addr 0x5b09b4c, size 0x238, virtual false, abstract: false, final false
static inline bool OrientedBoxContains(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  boxCenter, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Quaternion  boxAngles) ;

/// @brief Method OrientedBoxCorners, addr 0x5b0965c, size 0x260, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> OrientedBoxCorners(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  angles) ;

/// @brief Method OrientedBoxCornersNonAlloc, addr 0x5b098bc, size 0x290, virtual false, abstract: false, final false
static inline void OrientedBoxCornersNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  angles, ::ArrayW<::UnityEngine::Vector3>  array, int32_t  index) ;

/// @brief Method OrientedBoxSphereOverlap, addr 0x5b09d84, size 0x2b0, virtual false, abstract: false, final false
static inline int32_t OrientedBoxSphereOverlap(::UnityEngine::Vector3  center, float_t  radius, ::UnityEngine::Vector3  boxCenter, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Quaternion  boxAngles) ;

/// [Extension]
/// @brief Method PositiveModulo, addr 0x5b0aa64, size 0x40, virtual false, abstract: false, final false
static inline float_t PositiveModulo(float_t  x, float_t  m) ;

/// [Extension]
/// @brief Method PositiveModulo, addr 0x5b0aa50, size 0x14, virtual false, abstract: false, final false
static inline int32_t PositiveModulo(int32_t  x, int32_t  m) ;

/// [Extension]
/// @brief Method Quantize, addr 0x5b091f0, size 0xd8, virtual false, abstract: false, final false
static inline float_t Quantize(float_t  f, float_t  step) ;

/// [Extension]
/// @brief Method SafeDivide, addr 0x5b08fc8, size 0x164, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SafeDivide(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  d) ;

/// [Extension]
/// @brief Method SafeDivide, addr 0x5b08e74, size 0x154, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SafeDivide(::UnityEngine::Vector3  v, float_t  d) ;

/// [Extension]
/// @brief Method SafeDivide, addr 0x5b08de4, size 0x90, virtual false, abstract: false, final false
static inline float_t SafeDivide(float_t  f, float_t  d, float_t  eps) ;

/// [Extension]
/// @brief Method Saturate, addr 0x5b0912c, size 0x78, virtual false, abstract: false, final false
static inline float_t Saturate(float_t  f, float_t  eps) ;

/// [Extension]
/// @brief Method Sin, addr 0x5b091a4, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Sin(::UnityEngine::Vector3  v) ;

/// @brief Method Subdivide, addr 0x5b0a074, size 0x21c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Bounds> Subdivide(::UnityEngine::Bounds  b, int32_t  x, int32_t  y, int32_t  z) ;

/// @brief Method WeightedMaxVector, addr 0x5b0a70c, size 0x184, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 WeightedMaxVector(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  eps) ;

/// @brief Method Xlerp, addr 0x5b08d88, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Xlerp(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  dt, float_t  decay) ;

/// @brief Method Xlerp, addr 0x5b08d54, size 0x34, virtual false, abstract: false, final false
static inline float_t Xlerp(float_t  a, float_t  b, float_t  dt, float_t  decay) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathUtils(MathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathUtils(MathUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3515};

/// @brief Field kDecay offset 0xffffffff size 0x4
static constexpr float_t  kDecay{static_cast<float_t>(16.0f)};

/// @brief Field kFloatEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kFloatEpsilon{static_cast<float_t>(1e-6f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MathUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
