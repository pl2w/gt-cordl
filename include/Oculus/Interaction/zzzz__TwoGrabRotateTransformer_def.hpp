#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabRotateTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TwoGrabRotateTransformer_Axis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwoGrabRotateTransformer)
namespace GlobalNamespace {
struct TwoGrabRotateTransformer_Axis;
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
class TwoGrabRotateTransformer_TwoGrabRotateConstraints;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TwoGrabRotateTransformer;
}
namespace Oculus::Interaction {
class TwoGrabRotateTransformer_TwoGrabRotateConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TwoGrabRotateTransformer*);
MARK_REF_T(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabRotateTransformer*, "Oculus.Interaction", "TwoGrabRotateTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*, "Oculus.Interaction", "TwoGrabRotateTransformer/TwoGrabRotateConstraints");
// Dependencies Oculus.Interaction.TwoGrabRotateTransformer::Axis, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabRotateTransformer
class CORDL_TYPE TwoGrabRotateTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::TwoGrabRotateTransformer_Axis;

using TwoGrabRotateConstraints = ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints;

 __declspec(property(get=get_PivotTransform)) ::UnityW<::UnityEngine::Transform>  PivotTransform;

/// @brief Field _constrainedRelativeAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__constrainedRelativeAngle, put=__cordl_internal_set__constrainedRelativeAngle)) float_t  _constrainedRelativeAngle;

/// @brief Field _constraints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  _constraints;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _pivotTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pivotTransform, put=__cordl_internal_set__pivotTransform)) ::UnityW<::UnityEngine::Transform>  _pivotTransform;

/// @brief Field _previousHandsVectorOnPlane, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__previousHandsVectorOnPlane, put=__cordl_internal_set__previousHandsVectorOnPlane)) ::UnityEngine::Vector3  _previousHandsVectorOnPlane;

/// @brief Field _relativeAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeAngle, put=__cordl_internal_set__relativeAngle)) float_t  _relativeAngle;

/// @brief Field _rotationAxis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationAxis, put=__cordl_internal_set__rotationAxis)) ::GlobalNamespace::TwoGrabRotateTransformer_Axis  _rotationAxis;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44f10c, size 0x2c, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method CalculateHandsVectorOnPlane, addr 0xa44f234, size 0x2ec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateHandsVectorOnPlane(::UnityEngine::Vector3  planeNormal) ;

/// @brief Method CalculateRotationAxisInWorldSpace, addr 0xa44f138, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateRotationAxisInWorldSpace() ;

/// @brief Method EndTransform, addr 0xa44f6d4, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa44f104, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalConstraints, addr 0xa44f6e8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalConstraints(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  constraints) ;

/// @brief Method InjectOptionalPivotTransform, addr 0xa44f6d8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPivotTransform(::UnityEngine::Transform*  pivotTransform) ;

/// @brief Method InjectOptionalRotationAxis, addr 0xa44f6e0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRotationAxis(::GlobalNamespace::TwoGrabRotateTransformer_Axis  rotationAxis) ;

static inline ::Oculus::Interaction::TwoGrabRotateTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa44f520, size 0x1b4, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr float_t const& __cordl_internal_get__constrainedRelativeAngle() const;

constexpr float_t& __cordl_internal_get__constrainedRelativeAngle() ;

constexpr ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*& __cordl_internal_get__constraints() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pivotTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pivotTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__previousHandsVectorOnPlane() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__previousHandsVectorOnPlane() ;

constexpr float_t const& __cordl_internal_get__relativeAngle() const;

constexpr float_t& __cordl_internal_get__relativeAngle() ;

constexpr ::GlobalNamespace::TwoGrabRotateTransformer_Axis const& __cordl_internal_get__rotationAxis() const;

constexpr ::GlobalNamespace::TwoGrabRotateTransformer_Axis& __cordl_internal_get__rotationAxis() ;

constexpr void __cordl_internal_set__constrainedRelativeAngle(float_t  value) ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__pivotTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__previousHandsVectorOnPlane(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__relativeAngle(float_t  value) ;

constexpr void __cordl_internal_set__rotationAxis(::GlobalNamespace::TwoGrabRotateTransformer_Axis  value) ;

/// @brief Method .ctor, addr 0xa44f6f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PivotTransform, addr 0xa44f014, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_PivotTransform() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabRotateTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabRotateTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabRotateTransformer(TwoGrabRotateTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabRotateTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabRotateTransformer(TwoGrabRotateTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15835};

/// [SerializeField]
/// [Optional]
/// @brief Field _pivotTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pivotTransform;

/// [SerializeField]
/// @brief Field _rotationAxis, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::TwoGrabRotateTransformer_Axis  ____rotationAxis;

/// [SerializeField]
/// @brief Field _constraints, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints*  ____constraints;

/// @brief Field _relativeAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ____relativeAngle;

/// @brief Field _constrainedRelativeAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ____constrainedRelativeAngle;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _previousHandsVectorOnPlane, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____previousHandsVectorOnPlane;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____pivotTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____rotationAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____constraints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____relativeAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____constrainedRelativeAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer, ____previousHandsVectorOnPlane) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabRotateTransformer) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabRotateTransformer/TwoGrabRotateConstraints
class CORDL_TYPE TwoGrabRotateTransformer_TwoGrabRotateConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field MaxAngle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxAngle, put=__cordl_internal_set_MaxAngle)) ::Oculus::Interaction::FloatConstraint*  MaxAngle;

/// @brief Field MinAngle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinAngle, put=__cordl_internal_set_MinAngle)) ::Oculus::Interaction::FloatConstraint*  MinAngle;

static inline ::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints* New_ctor() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxAngle() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxAngle() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinAngle() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinAngle() ;

constexpr void __cordl_internal_set_MaxAngle(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinAngle(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa44f700, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabRotateTransformer_TwoGrabRotateConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabRotateTransformer_TwoGrabRotateConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabRotateTransformer_TwoGrabRotateConstraints(TwoGrabRotateTransformer_TwoGrabRotateConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabRotateTransformer_TwoGrabRotateConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabRotateTransformer_TwoGrabRotateConstraints(TwoGrabRotateTransformer_TwoGrabRotateConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15834};

/// @brief Field MinAngle, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinAngle;

/// @brief Field MaxAngle, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints, ___MinAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints, ___MaxAngle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabRotateTransformer_TwoGrabRotateConstraints) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
