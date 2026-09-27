#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PoseUtils)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Space;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class PoseUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseUtils*, "Oculus.Interaction", "PoseUtils");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PoseUtils
class CORDL_TYPE PoseUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CopyFrom, addr 0xa48c198, size 0x1c, virtual false, abstract: false, final false
static inline void CopyFrom(::by_ref<::UnityEngine::Pose>  to, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from) ;

/// [Extension]
/// @brief Method Delta, addr 0xa48c1b4, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Delta(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// [Extension]
/// @brief Method Delta, addr 0xa48c2f8, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Delta(::UnityEngine::Transform*  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method Delta, addr 0xa474c70, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Delta(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to) ;

/// @brief Method Delta, addr 0xa48c2a4, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Delta(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Quaternion  fromRotation, ::UnityEngine::Vector3  toPosition, ::UnityEngine::Quaternion  toRotation) ;

/// [Extension]
/// @brief Method Delta, addr 0xa48c3cc, size 0xb8, virtual false, abstract: false, final false
static inline void Delta(::UnityEngine::Transform*  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method Delta, addr 0xa48c484, size 0x12c, virtual false, abstract: false, final false
static inline void Delta(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Quaternion  fromRotation, ::UnityEngine::Vector3  toPosition, ::UnityEngine::Quaternion  toRotation, ::by_ref<::UnityEngine::Pose>  result) ;

/// @brief Method DeltaScaled, addr 0xa48c6e4, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose DeltaScaled(::UnityEngine::Transform*  from, ::UnityEngine::Pose  to) ;

/// @brief Method DeltaScaled, addr 0xa48c5b0, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose DeltaScaled(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to) ;

/// [Extension]
/// @brief Method GetPose, addr 0xa477d08, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetPose(::UnityEngine::Transform*  transform, ::UnityEngine::Space  space) ;

/// [Extension]
/// @brief Method GlobalPose, addr 0xa48c7cc, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GlobalPose(::UnityEngine::Transform*  reference, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset) ;

/// @brief Method GlobalPoseScaled, addr 0xa48c8f0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GlobalPoseScaled(::UnityEngine::Transform*  relativeTo, ::UnityEngine::Pose  offset) ;

/// @brief Method Inverse, addr 0xa48c138, size 0x58, virtual false, abstract: false, final false
static inline void Inverse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, ::by_ref<::UnityEngine::Pose>  result) ;

/// [Extension]
/// @brief Method Invert, addr 0xa48c190, size 0x8, virtual false, abstract: false, final false
static inline void Invert(::by_ref<::UnityEngine::Pose>  a) ;

/// [Extension]
/// @brief Method Lerp, addr 0xa47e130, size 0x8, virtual false, abstract: false, final false
static inline void Lerp(::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, float_t  t) ;

/// @brief Method Lerp, addr 0xa48c0c8, size 0x70, virtual false, abstract: false, final false
static inline void Lerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to, float_t  t, ::by_ref<::UnityEngine::Pose>  result) ;

/// [Extension]
/// [Obsolete("Use HandMirroring.Reflect instead.")]
/// @brief Method MirrorPoseRotation, addr 0xa48c9d0, size 0x320, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose MirrorPoseRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  tangent) ;

/// @brief Method Multiply, addr 0xa48c084, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose Multiply(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b) ;

/// @brief Method Multiply, addr 0xa474ce0, size 0xec, virtual false, abstract: false, final false
static inline void Multiply(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b, ::by_ref<::UnityEngine::Pose>  result) ;

/// [Extension]
/// @brief Method Postmultiply, addr 0xa47a644, size 0x10, virtual false, abstract: false, final false
static inline void Postmultiply(::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b) ;

/// [Extension]
/// @brief Method Premultiply, addr 0xa48c0c0, size 0x8, virtual false, abstract: false, final false
static inline void Premultiply(::by_ref<::UnityEngine::Pose>  a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  b) ;

/// [Extension]
/// @brief Method SetPose, addr 0xa47a654, size 0x74, virtual false, abstract: false, final false
static inline void SetPose(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Space  space) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseUtils(PoseUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseUtils(PoseUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
