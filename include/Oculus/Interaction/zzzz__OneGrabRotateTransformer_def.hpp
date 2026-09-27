#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabRotateTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__OneGrabRotateTransformer_Axis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OneGrabRotateTransformer)
namespace GlobalNamespace {
struct OneGrabRotateTransformer_Axis;
}
namespace Oculus::Interaction {
class FloatConstraint;
}
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
class OneGrabRotateTransformer_OneGrabRotateConstraints;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class OneGrabRotateTransformer;
}
namespace Oculus::Interaction {
class OneGrabRotateTransformer_OneGrabRotateConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OneGrabRotateTransformer*);
MARK_REF_T(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabRotateTransformer*, "Oculus.Interaction", "OneGrabRotateTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*, "Oculus.Interaction", "OneGrabRotateTransformer/OneGrabRotateConstraints");
// Dependencies Oculus.Interaction.OneGrabRotateTransformer::Axis, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabRotateTransformer
class CORDL_TYPE OneGrabRotateTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::OneGrabRotateTransformer_Axis;

using OneGrabRotateConstraints = ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints;

 __declspec(property(get=get_Constraints, put=set_Constraints)) ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  Constraints;

 __declspec(property(get=get_Pivot)) ::UnityW<::UnityEngine::Transform>  Pivot;

 __declspec(property(get=get_RotationAxis)) ::GlobalNamespace::OneGrabRotateTransformer_Axis  RotationAxis;

/// @brief Field _constrainedRelativeAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__constrainedRelativeAngle, put=__cordl_internal_set__constrainedRelativeAngle)) float_t  _constrainedRelativeAngle;

/// @brief Field _constraints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  _constraints;

/// @brief Field _grabPositionInPivotSpace, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__grabPositionInPivotSpace, put=__cordl_internal_set__grabPositionInPivotSpace)) ::UnityEngine::Vector3  _grabPositionInPivotSpace;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _localRotation, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__localRotation, put=__cordl_internal_set__localRotation)) ::UnityEngine::Quaternion  _localRotation;

/// @brief Field _pivotTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pivotTransform, put=__cordl_internal_set__pivotTransform)) ::UnityW<::UnityEngine::Transform>  _pivotTransform;

/// @brief Field _previousVectorInPivotSpace, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get__previousVectorInPivotSpace, put=__cordl_internal_set__previousVectorInPivotSpace)) ::UnityEngine::Vector3  _previousVectorInPivotSpace;

/// @brief Field _relativeAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeAngle, put=__cordl_internal_set__relativeAngle)) float_t  _relativeAngle;

/// @brief Field _rotationAxis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationAxis, put=__cordl_internal_set__rotationAxis)) ::GlobalNamespace::OneGrabRotateTransformer_Axis  _rotationAxis;

/// @brief Field _startAngle, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__startAngle, put=__cordl_internal_set__startAngle)) float_t  _startAngle;

/// @brief Field _transformPoseInPivotSpace, offset 0x54, size 0x1c 
 __declspec(property(get=__cordl_internal_get__transformPoseInPivotSpace, put=__cordl_internal_set__transformPoseInPivotSpace)) ::UnityEngine::Pose  _transformPoseInPivotSpace;

/// @brief Field _worldPivotPose, offset 0x70, size 0x1c 
 __declspec(property(get=__cordl_internal_get__worldPivotPose, put=__cordl_internal_set__worldPivotPose)) ::UnityEngine::Pose  _worldPivotPose;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44ab9c, size 0x6a8, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method ComputeWorldPivotPose, addr 0xa44a940, size 0x25c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose ComputeWorldPivotPose() ;

/// @brief Method EndTransform, addr 0xa44b8f8, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa44a938, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalConstraints, addr 0xa44b90c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalConstraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  constraints) ;

/// @brief Method InjectOptionalPivotTransform, addr 0xa44b8fc, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPivotTransform(::UnityEngine::Transform*  pivotTransform) ;

/// @brief Method InjectOptionalRotationAxis, addr 0xa44b904, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRotationAxis(::GlobalNamespace::OneGrabRotateTransformer_Axis  rotationAxis) ;

static inline ::Oculus::Interaction::OneGrabRotateTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa44b244, size 0x6b4, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr float_t const& __cordl_internal_get__constrainedRelativeAngle() const;

constexpr float_t& __cordl_internal_get__constrainedRelativeAngle() ;

constexpr ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*& __cordl_internal_get__constraints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__grabPositionInPivotSpace() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__grabPositionInPivotSpace() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__localRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__localRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pivotTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pivotTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previousVectorInPivotSpace() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__previousVectorInPivotSpace() ;

constexpr float_t const& __cordl_internal_get__relativeAngle() const;

constexpr float_t& __cordl_internal_get__relativeAngle() ;

constexpr ::GlobalNamespace::OneGrabRotateTransformer_Axis const& __cordl_internal_get__rotationAxis() const;

constexpr ::GlobalNamespace::OneGrabRotateTransformer_Axis& __cordl_internal_get__rotationAxis() ;

constexpr float_t const& __cordl_internal_get__startAngle() const;

constexpr float_t& __cordl_internal_get__startAngle() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__transformPoseInPivotSpace() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__transformPoseInPivotSpace() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__worldPivotPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__worldPivotPose() ;

constexpr void __cordl_internal_set__constrainedRelativeAngle(float_t  value) ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  value) ;

constexpr void __cordl_internal_set__grabPositionInPivotSpace(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__localRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__pivotTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__previousVectorInPivotSpace(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__relativeAngle(float_t  value) ;

constexpr void __cordl_internal_set__rotationAxis(::GlobalNamespace::OneGrabRotateTransformer_Axis  value) ;

constexpr void __cordl_internal_set__startAngle(float_t  value) ;

constexpr void __cordl_internal_set__transformPoseInPivotSpace(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__worldPivotPose(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa44b914, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Constraints, addr 0xa44a928, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* get_Constraints() ;

/// @brief Method get_Pivot, addr 0xa44a8a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Pivot() ;

/// @brief Method get_RotationAxis, addr 0xa44a920, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OneGrabRotateTransformer_Axis get_RotationAxis() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_Constraints, addr 0xa44a930, size 0x8, virtual false, abstract: false, final false
inline void set_Constraints(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabRotateTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabRotateTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabRotateTransformer(OneGrabRotateTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabRotateTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabRotateTransformer(OneGrabRotateTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15823};

/// [SerializeField]
/// [Optional]
/// @brief Field _pivotTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pivotTransform;

/// [SerializeField]
/// @brief Field _rotationAxis, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OneGrabRotateTransformer_Axis  ____rotationAxis;

/// [SerializeField]
/// @brief Field _constraints, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints*  ____constraints;

/// @brief Field _relativeAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ____relativeAngle;

/// @brief Field _constrainedRelativeAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ____constrainedRelativeAngle;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _grabPositionInPivotSpace, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____grabPositionInPivotSpace;

/// @brief Field _transformPoseInPivotSpace, offset: 0x54, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____transformPoseInPivotSpace;

/// @brief Field _worldPivotPose, offset: 0x70, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____worldPivotPose;

/// @brief Field _previousVectorInPivotSpace, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____previousVectorInPivotSpace;

/// @brief Field _localRotation, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____localRotation;

/// @brief Field _startAngle, offset: 0xa8, size: 0x4, def value: None
 float_t  ____startAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____pivotTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____rotationAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____constraints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____relativeAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____constrainedRelativeAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____grabPositionInPivotSpace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____transformPoseInPivotSpace) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____worldPivotPose) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____previousVectorInPivotSpace) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____localRotation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer, ____startAngle) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabRotateTransformer) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints
class CORDL_TYPE OneGrabRotateTransformer_OneGrabRotateConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field MaxAngle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxAngle, put=__cordl_internal_set_MaxAngle)) ::Oculus::Interaction::FloatConstraint*  MaxAngle;

/// @brief Field MinAngle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinAngle, put=__cordl_internal_set_MinAngle)) ::Oculus::Interaction::FloatConstraint*  MinAngle;

static inline ::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints* New_ctor() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxAngle() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxAngle() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinAngle() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinAngle() ;

constexpr void __cordl_internal_set_MaxAngle(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinAngle(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa44b9f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabRotateTransformer_OneGrabRotateConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabRotateTransformer_OneGrabRotateConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabRotateTransformer_OneGrabRotateConstraints(OneGrabRotateTransformer_OneGrabRotateConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabRotateTransformer_OneGrabRotateConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabRotateTransformer_OneGrabRotateConstraints(OneGrabRotateTransformer_OneGrabRotateConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15822};

/// @brief Field MinAngle, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinAngle;

/// @brief Field MaxAngle, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints, ___MinAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints, ___MaxAngle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabRotateTransformer_OneGrabRotateConstraints) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
