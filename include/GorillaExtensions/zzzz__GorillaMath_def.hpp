#pragma once
// IWYU pragma private; include "GorillaExtensions/GorillaMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaMath)
namespace GlobalNamespace {
struct GorillaMath_FloatIntUnion;
}
namespace GlobalNamespace {
struct GorillaMath_RemapFloatInfo;
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
namespace GorillaExtensions {
class GorillaMath;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GorillaMath*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GorillaMath*, "GorillaExtensions", "GorillaMath");
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GorillaMath
class CORDL_TYPE GorillaMath : public ::System::Object {
public:
// Declarations
using FloatIntUnion = ::GlobalNamespace::GorillaMath_FloatIntUnion;

using RemapFloatInfo = ::GlobalNamespace::GorillaMath_RemapFloatInfo;

/// @brief Method Dot2, addr 0x5cf7a58, size 0x20, virtual false, abstract: false, final false
static inline float_t Dot2(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method FastInvSqrt, addr 0x5cf7a10, size 0x48, virtual false, abstract: false, final false
static inline float_t FastInvSqrt(float_t  z) ;

/// @brief Method GetAngularVelocity, addr 0x5cf785c, size 0x1b4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetAngularVelocity(::UnityEngine::Quaternion  oldRotation, ::UnityEngine::Quaternion  newRotation) ;

/// @brief Method LineSegClosestPoints, addr 0x5cf7e94, size 0x180, virtual false, abstract: false, final false
static inline void LineSegClosestPoints(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  u, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  lineAPoint, ::by_ref<::UnityEngine::Vector3>  lineBPoint) ;

/// @brief Method RaycastToCappedCone, addr 0x5cf7a78, size 0x41c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 RaycastToCappedCone(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rayOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rayDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  coneTip, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  coneBase, /* [IsReadOnly] */ ::by_ref<float_t>  coneTipRadius, /* [IsReadOnly] */ ::by_ref<float_t>  coneBaseRadius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMath(GorillaMath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMath(GorillaMath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4566};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GorillaMath) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
