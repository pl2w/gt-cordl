#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabFreeTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__GrabFreeTransformer_GrabPointDelta_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GrabFreeTransformer)
namespace GlobalNamespace {
struct GrabFreeTransformer_GrabPointDelta;
}
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
class TransformerUtils_PositionConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_RotationConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_ScaleConstraints;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace Oculus::Interaction {
class GrabFreeTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabFreeTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabFreeTransformer*, "Oculus.Interaction", "GrabFreeTransformer");
// Dependencies Oculus.Interaction.GrabFreeTransformer::GrabPointDelta, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.GrabFreeTransformer
class CORDL_TYPE GrabFreeTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GrabPointDelta = ::GlobalNamespace::GrabFreeTransformer_GrabPointDelta;

/// @brief Field _deltas, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltas, put=__cordl_internal_set__deltas)) ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  _deltas;

/// @brief Field _grabDeltaInLocalSpace, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__grabDeltaInLocalSpace, put=__cordl_internal_set__grabDeltaInLocalSpace)) ::UnityEngine::Pose  _grabDeltaInLocalSpace;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _lastRotation, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastRotation, put=__cordl_internal_set__lastRotation)) ::UnityEngine::Quaternion  _lastRotation;

/// @brief Field _lastScale, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastScale, put=__cordl_internal_set__lastScale)) ::UnityEngine::Vector3  _lastScale;

/// @brief Field _positionConstraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionConstraints, put=__cordl_internal_set__positionConstraints)) ::Oculus::Interaction::TransformerUtils_PositionConstraints*  _positionConstraints;

/// @brief Field _relativePositionConstraints, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativePositionConstraints, put=__cordl_internal_set__relativePositionConstraints)) ::Oculus::Interaction::TransformerUtils_PositionConstraints*  _relativePositionConstraints;

/// @brief Field _relativeScaleConstraints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeScaleConstraints, put=__cordl_internal_set__relativeScaleConstraints)) ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  _relativeScaleConstraints;

/// @brief Field _resetScaleResponsivenessOnConstraintOvershoot, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__resetScaleResponsivenessOnConstraintOvershoot, put=__cordl_internal_set__resetScaleResponsivenessOnConstraintOvershoot)) bool  _resetScaleResponsivenessOnConstraintOvershoot;

/// @brief Field _rotationConstraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationConstraints, put=__cordl_internal_set__rotationConstraints)) ::Oculus::Interaction::TransformerUtils_RotationConstraints*  _rotationConstraints;

/// @brief Field _scaleConstraints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleConstraints, put=__cordl_internal_set__scaleConstraints)) ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  _scaleConstraints;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa4482ac, size 0x3d0, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa448b08, size 0xfc, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method GetCentroid, addr 0xa4470d4, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCentroid(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses) ;

/// @brief Method GetCentroidOffset, addr 0xa448c04, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetCentroidOffset(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  centre) ;

/// @brief Method Initialize, addr 0xa448128, size 0x184, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InitializeDeltas, addr 0xa446f9c, size 0x138, virtual false, abstract: false, final false
static inline void InitializeDeltas(int32_t  count, ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>  deltas) ;

/// @brief Method InjectOptionalPositionConstraints, addr 0xa448cd0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPositionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  constraints) ;

/// @brief Method InjectOptionalRotationConstraints, addr 0xa448cd8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  constraints) ;

/// @brief Method InjectOptionalScaleConstraints, addr 0xa448ce0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalScaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  constraints) ;

static inline ::Oculus::Interaction::GrabFreeTransformer* New_ctor() ;

/// @brief Method UpdateRotation, addr 0xa4475f8, size 0x574, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion UpdateRotation(int32_t  count, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  deltas) ;

/// @brief Method UpdateScale, addr 0xa448a5c, size 0xac, virtual false, abstract: false, final false
static inline float_t UpdateScale(int32_t  count, ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  deltas) ;

/// @brief Method UpdateTransform, addr 0xa44867c, size 0x3e0, virtual true, abstract: false, final true
inline void UpdateTransform() ;

/// @brief Method UpdateTransformerPointData, addr 0xa4474c4, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 UpdateTransformerPointData(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  poses, ::by_ref<::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>>  deltas) ;

constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta> const& __cordl_internal_get__deltas() const;

constexpr ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>& __cordl_internal_get__deltas() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__grabDeltaInLocalSpace() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__grabDeltaInLocalSpace() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastScale() ;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& __cordl_internal_get__positionConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& __cordl_internal_get__positionConstraints() ;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& __cordl_internal_get__relativePositionConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& __cordl_internal_get__relativePositionConstraints() ;

constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints* const& __cordl_internal_get__relativeScaleConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints*& __cordl_internal_get__relativeScaleConstraints() ;

constexpr bool const& __cordl_internal_get__resetScaleResponsivenessOnConstraintOvershoot() const;

constexpr bool& __cordl_internal_get__resetScaleResponsivenessOnConstraintOvershoot() ;

constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints* const& __cordl_internal_get__rotationConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints*& __cordl_internal_get__rotationConstraints() ;

constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints* const& __cordl_internal_get__scaleConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_ScaleConstraints*& __cordl_internal_get__scaleConstraints() ;

constexpr void __cordl_internal_set__deltas(::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  value) ;

constexpr void __cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__lastScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__positionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value) ;

constexpr void __cordl_internal_set__relativePositionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value) ;

constexpr void __cordl_internal_set__relativeScaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  value) ;

constexpr void __cordl_internal_set__resetScaleResponsivenessOnConstraintOvershoot(bool  value) ;

constexpr void __cordl_internal_set__rotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  value) ;

constexpr void __cordl_internal_set__scaleConstraints(::Oculus::Interaction::TransformerUtils_ScaleConstraints*  value) ;

/// @brief Method .ctor, addr 0xa448ce8, size 0x1b8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabFreeTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabFreeTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabFreeTransformer(GrabFreeTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabFreeTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabFreeTransformer(GrabFreeTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15815};

/// [SerializeField]
/// [Tooltip("Constrains the position of the object along different axes. Units are meters.")]
/// @brief Field _positionConstraints, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_PositionConstraints*  ____positionConstraints;

/// [SerializeField]
/// [Tooltip("Constrains the rotation of the object along different axes. Units are degrees.")]
/// @brief Field _rotationConstraints, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_RotationConstraints*  ____rotationConstraints;

/// [SerializeField]
/// [Tooltip("Constrains the local scale of the object along different axes. Expressed as a scale factor.")]
/// @brief Field _scaleConstraints, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  ____scaleConstraints;

/// [SerializeField]
/// [Tooltip("If enabled, breaks the \"grab point\" when scale is constrained so that reversing the scale motion immediately scales rather than waiting for the grabs to \"catch up\" to the original grab point.")]
/// @brief Field _resetScaleResponsivenessOnConstraintOvershoot, offset: 0x38, size: 0x1, def value: None
 bool  ____resetScaleResponsivenessOnConstraintOvershoot;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _grabDeltaInLocalSpace, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____grabDeltaInLocalSpace;

/// @brief Field _relativePositionConstraints, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_PositionConstraints*  ____relativePositionConstraints;

/// @brief Field _relativeScaleConstraints, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_ScaleConstraints*  ____relativeScaleConstraints;

/// @brief Field _lastRotation, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastRotation;

/// @brief Field _lastScale, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastScale;

/// @brief Field _deltas, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GrabFreeTransformer_GrabPointDelta>  ____deltas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____positionConstraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____rotationConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____scaleConstraints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____resetScaleResponsivenessOnConstraintOvershoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____grabDeltaInLocalSpace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____relativePositionConstraints) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____relativeScaleConstraints) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____lastRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____lastScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::GrabFreeTransformer, ____deltas) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabFreeTransformer) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction
