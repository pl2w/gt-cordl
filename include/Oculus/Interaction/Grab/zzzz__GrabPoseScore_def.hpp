#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabPoseScore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GrabPoseScore)
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Grab::GrabPoseScore);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabPoseScore, "Oculus.Interaction.Grab", "GrabPoseScore");
// Dependencies Oculus.Interaction.Grab.PoseMeasureParameters
namespace Oculus::Interaction::Grab {
// Is value type: true
// CS Name: Oculus.Interaction.Grab.GrabPoseScore
struct CORDL_TYPE GrabPoseScore {
public:
// Declarations
/// @brief Field Max, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Max, put=setStaticF_Max)) ::Oculus::Interaction::Grab::GrabPoseScore  Max;

/// @brief Method IsBetterThan, addr 0xa4e08e8, size 0xf8, virtual false, abstract: false, final false
inline bool IsBetterThan(::Oculus::Interaction::Grab::GrabPoseScore  referenceScore) ;

/// @brief Method IsValid, addr 0xa4dc0c0, size 0x30, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method Lerp, addr 0xa4dd8f8, size 0xc4, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabPoseScore Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  to, float_t  t) ;

/// @brief Method PositionalScore, addr 0xa4e674c, size 0x2c, virtual false, abstract: false, final false
static inline float_t PositionalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  to) ;

/// @brief Method RotationalScore, addr 0xa4e6778, size 0x200, virtual false, abstract: false, final false
static inline float_t RotationalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  to) ;

/// @brief Method Score, addr 0xa4e6978, size 0x94, virtual false, abstract: false, final false
inline float_t Score(float_t  maxDistance) ;

/// @brief Method .ctor, addr 0xa4e64b0, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  fromPoint, ::UnityEngine::Vector3  toPoint, bool  isInside) ;

/// @brief Method .ctor, addr 0xa4e1c54, size 0x114, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseA, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseB, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Grab::PoseMeasureParameters  measureParameters) ;

/// @brief Method .ctor, addr 0xa4e6740, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  translationScore, float_t  rotationScore, ::Oculus::Interaction::Grab::PoseMeasureParameters  measureParameters) ;

static inline ::Oculus::Interaction::Grab::GrabPoseScore getStaticF_Max() ;

static inline void setStaticF_Max(::Oculus::Interaction::Grab::GrabPoseScore  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseScore() ;

// Ctor Parameters [CppParam { name: "_translationScore", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rotationScore", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_measureParameters", ty: "::Oculus::Interaction::Grab::PoseMeasureParameters", modifiers: "", def_value: None, comment: None }]
constexpr GrabPoseScore(float_t  _translationScore, float_t  _rotationScore, ::Oculus::Interaction::Grab::PoseMeasureParameters  _measureParameters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field _translationScore, offset: 0x0, size: 0x4, def value: None
 float_t  _translationScore;

/// @brief Field _rotationScore, offset: 0x4, size: 0x4, def value: None
 float_t  _rotationScore;

/// @brief Field _measureParameters, offset: 0x8, size: 0x4, def value: None
 ::Oculus::Interaction::Grab::PoseMeasureParameters  _measureParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::GrabPoseScore, _translationScore) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabPoseScore, _rotationScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Grab::GrabPoseScore, _measureParameters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::GrabPoseScore) == 0xc, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab
