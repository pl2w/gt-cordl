#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityVectorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityVectorExtensions)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class UnityVectorExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::UnityVectorExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::UnityVectorExtensions*, "Unity.Cinemachine", "UnityVectorExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.UnityVectorExtensions
class CORDL_TYPE UnityVectorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Abs, addr 0xaec0444, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 Abs(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method Abs, addr 0xaec0450, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method AlmostZero, addr 0xaebe5cc, size 0x28, virtual false, abstract: false, final false
static inline bool AlmostZero(::UnityEngine::Vector3  v) ;

/// @brief Method Angle, addr 0xaec0688, size 0x23c, virtual false, abstract: false, final false
static inline float_t Angle(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2) ;

/// [Extension]
/// @brief Method ClosestPointOnSegment, addr 0xaec0098, size 0x60, virtual false, abstract: false, final false
static inline float_t ClosestPointOnSegment(::UnityEngine::Vector2  p, ::UnityEngine::Vector2  s0, ::UnityEngine::Vector2  s1) ;

/// [Extension]
/// @brief Method ClosestPointOnSegment, addr 0xaec0018, size 0x80, virtual false, abstract: false, final false
static inline float_t ClosestPointOnSegment(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  s0, ::UnityEngine::Vector3  s1) ;

/// [Extension]
/// @brief Method ConservativeSetPositionAndRotation, addr 0xaec0570, size 0x118, virtual false, abstract: false, final false
static inline void ConservativeSetPositionAndRotation(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// [Extension]
/// @brief Method Cross, addr 0xaec0434, size 0x10, virtual false, abstract: false, final false
static inline float_t Cross(::UnityEngine::Vector2  v1, ::UnityEngine::Vector2  v2) ;

/// @brief Method FindIntersection, addr 0xaec0194, size 0x2a0, virtual false, abstract: false, final false
static inline int32_t FindIntersection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  p1, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  p2, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  q1, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  q2, ::by_ref<::UnityEngine::Vector2>  intersection) ;

/// [Extension]
/// @brief Method IsNaN, addr 0xaebffb4, size 0x24, virtual false, abstract: false, final false
static inline bool IsNaN(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method IsNaN, addr 0xaebffd8, size 0x40, virtual false, abstract: false, final false
static inline bool IsNaN(::UnityEngine::Vector3  v) ;

/// [Extension]
/// @brief Method IsUniform, addr 0xaec0460, size 0x70, virtual false, abstract: false, final false
static inline bool IsUniform(::UnityEngine::Vector2  v) ;

/// [Extension]
/// @brief Method IsUniform, addr 0xaec04d0, size 0xa0, virtual false, abstract: false, final false
static inline bool IsUniform(::UnityEngine::Vector3  v) ;

/// @brief Method NormalizeAngle, addr 0xaec1510, size 0x34, virtual false, abstract: false, final false
static inline float_t NormalizeAngle(float_t  angle) ;

/// [Extension]
/// @brief Method ProjectOntoPlane, addr 0xaec00f8, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ProjectOntoPlane(::UnityEngine::Vector3  vector, ::UnityEngine::Vector3  planeNormal) ;

/// @brief Method SafeFromToRotation, addr 0xaec0964, size 0x4a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion SafeFromToRotation(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::UnityEngine::Vector3  up) ;

/// @brief Method SignedAngle, addr 0xaec08c4, size 0xa0, virtual false, abstract: false, final false
static inline float_t SignedAngle(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::UnityEngine::Vector3  up) ;

/// @brief Method SlerpWithReferenceUp, addr 0xaec0e04, size 0x274, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SlerpWithReferenceUp(::UnityEngine::Vector3  vA, ::UnityEngine::Vector3  vB, float_t  t, ::UnityEngine::Vector3  up) ;

/// [Extension]
/// @brief Method SquareNormalize, addr 0xaec0128, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 SquareNormalize(::UnityEngine::Vector2  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityVectorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityVectorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityVectorExtensions(UnityVectorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityVectorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityVectorExtensions(UnityVectorExtensions const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::UnityVectorExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
