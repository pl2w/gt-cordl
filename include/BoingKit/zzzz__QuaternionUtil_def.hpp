#pragma once
// IWYU pragma private; include "BoingKit/QuaternionUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuaternionUtil)
namespace GlobalNamespace {
struct QuaternionUtil_SterpMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace BoingKit {
class QuaternionUtil;
}
// Write type traits
MARK_REF_T(::BoingKit::QuaternionUtil*);
DEFINE_IL2CPP_CLASS(::BoingKit::QuaternionUtil*, "BoingKit", "QuaternionUtil");
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.QuaternionUtil
class CORDL_TYPE QuaternionUtil : public ::System::Object {
public:
// Declarations
using SterpMode = ::GlobalNamespace::QuaternionUtil_SterpMode;

/// @brief Method AxisAngle, addr 0x5e2bff4, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion AxisAngle(::UnityEngine::Vector3  axis, float_t  angle) ;

/// @brief Method DecomposeSwingTwist, addr 0x5e2c354, size 0x42c, virtual false, abstract: false, final false
static inline void DecomposeSwingTwist(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  twistAxis, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist) ;

/// @brief Method FromAngularVector, addr 0x5e2616c, size 0x138, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromAngularVector(::UnityEngine::Vector3  v) ;

/// @brief Method FromVector4, addr 0x5e20fbc, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromVector4(::UnityEngine::Vector4  v, bool  normalize) ;

/// @brief Method GetAngle, addr 0x5e2c158, size 0x2c, virtual false, abstract: false, final false
static inline float_t GetAngle(::UnityEngine::Quaternion  q) ;

/// @brief Method GetAxis, addr 0x5e2c04c, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAxis(::UnityEngine::Quaternion  q) ;

/// @brief Method Integrate, addr 0x5e2c298, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Vector3  omega, float_t  dt) ;

/// @brief Method Integrate, addr 0x5e2c1e0, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Integrate(::UnityEngine::Quaternion  q, ::UnityEngine::Quaternion  v, float_t  dt) ;

/// @brief Method Magnitude, addr 0x5e2bf74, size 0x24, virtual false, abstract: false, final false
static inline float_t Magnitude(::UnityEngine::Quaternion  q) ;

/// @brief Method MagnitudeSqr, addr 0x5e2bf98, size 0x20, virtual false, abstract: false, final false
static inline float_t MagnitudeSqr(::UnityEngine::Quaternion  q) ;

static inline ::BoingKit::QuaternionUtil* New_ctor() ;

/// @brief Method Normalize, addr 0x5e2bfb8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion  q) ;

/// @brief Method Pow, addr 0x5e210c8, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Pow(::UnityEngine::Quaternion  q, float_t  exp) ;

/// @brief Method Sterp, addr 0x5e2c780, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::GlobalNamespace::QuaternionUtil_SterpMode  mode) ;

/// @brief Method Sterp, addr 0x5e2c7c8, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  t, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode) ;

/// @brief Method Sterp, addr 0x5e2cacc, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode) ;

/// @brief Method Sterp, addr 0x5e2c7fc, size 0x2d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion Sterp(::UnityEngine::Quaternion  a, ::UnityEngine::Quaternion  b, ::UnityEngine::Vector3  twistAxis, float_t  tSwing, float_t  tTwist, ::by_ref<::UnityEngine::Quaternion>  swing, ::by_ref<::UnityEngine::Quaternion>  twist, ::GlobalNamespace::QuaternionUtil_SterpMode  mode) ;

/// @brief Method ToAngularVector, addr 0x5e2c184, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToAngularVector(::UnityEngine::Quaternion  q) ;

/// @brief Method ToVector4, addr 0x5e25ca0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ToVector4(::UnityEngine::Quaternion  q) ;

/// @brief Method .ctor, addr 0x5e2cb18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuaternionUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuaternionUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QuaternionUtil(QuaternionUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuaternionUtil(QuaternionUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::QuaternionUtil) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
