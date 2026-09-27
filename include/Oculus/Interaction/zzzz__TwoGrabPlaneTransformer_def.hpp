#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabPlaneTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwoGrabPlaneTransformer)
namespace GlobalNamespace {
struct TwoGrabPlaneTransformer_TwoGrabPlaneState;
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
class TwoGrabPlaneTransformer_TwoGrabPlaneConstraints;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TwoGrabPlaneTransformer;
}
namespace Oculus::Interaction {
class TwoGrabPlaneTransformer_TwoGrabPlaneConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TwoGrabPlaneTransformer*);
MARK_REF_T(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabPlaneTransformer*, "Oculus.Interaction", "TwoGrabPlaneTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*, "Oculus.Interaction", "TwoGrabPlaneTransformer/TwoGrabPlaneConstraints");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabPlaneTransformer
class CORDL_TYPE TwoGrabPlaneTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TwoGrabPlaneState = ::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState;

using TwoGrabPlaneConstraints = ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints;

 __declspec(property(get=get_Constraints, put=set_Constraints)) ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  Constraints;

/// @brief Field _constraints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  _constraints;

/// @brief Field _grabbable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _localMagnitudeToTarget, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__localMagnitudeToTarget, put=__cordl_internal_set__localMagnitudeToTarget)) float_t  _localMagnitudeToTarget;

/// @brief Field _localPlaneNormal, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPlaneNormal, put=__cordl_internal_set__localPlaneNormal)) ::UnityEngine::Vector3  _localPlaneNormal;

/// @brief Field _localToTarget, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localToTarget, put=__cordl_internal_set__localToTarget)) ::UnityEngine::Pose  _localToTarget;

/// @brief Field _planeTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__planeTransform, put=__cordl_internal_set__planeTransform)) ::UnityW<::UnityEngine::Transform>  _planeTransform;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44e618, size 0x2d4, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa44efe0, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa44e44c, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalConstraints, addr 0xa44efec, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalConstraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  constraints) ;

/// @brief Method InjectOptionalPlaneTransform, addr 0xa44efe4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPlaneTransform(::UnityEngine::Transform*  planeTransform) ;

static inline ::Oculus::Interaction::TwoGrabPlaneTransformer* New_ctor() ;

/// @brief Method TwoGrabPlane, addr 0xa44e8ec, size 0x248, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TwoGrabPlaneTransformer_TwoGrabPlaneState TwoGrabPlane(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  planeNormal) ;

/// @brief Method UpdateTransform, addr 0xa44eb34, size 0x4ac, virtual true, abstract: false, final true
inline void UpdateTransform() ;

/// @brief Method WorldPlaneNormal, addr 0xa44e454, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldPlaneNormal() ;

constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*& __cordl_internal_get__constraints() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr float_t const& __cordl_internal_get__localMagnitudeToTarget() const;

constexpr float_t& __cordl_internal_get__localMagnitudeToTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPlaneNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPlaneNormal() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localToTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localToTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__planeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__planeTransform() ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__localMagnitudeToTarget(float_t  value) ;

constexpr void __cordl_internal_set__localPlaneNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localToTarget(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__planeTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa44eff4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Constraints, addr 0xa44e43c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* get_Constraints() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_Constraints, addr 0xa44e444, size 0x8, virtual false, abstract: false, final false
inline void set_Constraints(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabPlaneTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabPlaneTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabPlaneTransformer(TwoGrabPlaneTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabPlaneTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabPlaneTransformer(TwoGrabPlaneTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15832};

/// [SerializeField]
/// [Optional]
/// @brief Field _planeTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____planeTransform;

/// [SerializeField]
/// [Optional]
/// @brief Field _localPlaneNormal, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPlaneNormal;

/// [SerializeField]
/// @brief Field _constraints, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints*  ____constraints;

/// @brief Field _grabbable, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _localToTarget, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localToTarget;

/// @brief Field _localMagnitudeToTarget, offset: 0x64, size: 0x4, def value: None
 float_t  ____localMagnitudeToTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____planeTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____localPlaneNormal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____constraints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____grabbable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____localToTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer, ____localMagnitudeToTarget) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabPlaneTransformer) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabPlaneTransformer/TwoGrabPlaneConstraints
class CORDL_TYPE TwoGrabPlaneTransformer_TwoGrabPlaneConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field MaxScale, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxScale, put=__cordl_internal_set_MaxScale)) ::Oculus::Interaction::FloatConstraint*  MaxScale;

/// @brief Field MaxY, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxY, put=__cordl_internal_set_MaxY)) ::Oculus::Interaction::FloatConstraint*  MaxY;

/// @brief Field MinScale, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinScale, put=__cordl_internal_set_MinScale)) ::Oculus::Interaction::FloatConstraint*  MinScale;

/// @brief Field MinY, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinY, put=__cordl_internal_set_MinY)) ::Oculus::Interaction::FloatConstraint*  MinY;

static inline ::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints* New_ctor() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxScale() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxScale() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxY() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxY() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinScale() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinScale() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinY() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinY() ;

constexpr void __cordl_internal_set_MaxScale(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MaxY(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinScale(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinY(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa44f00c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabPlaneTransformer_TwoGrabPlaneConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabPlaneTransformer_TwoGrabPlaneConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabPlaneTransformer_TwoGrabPlaneConstraints(TwoGrabPlaneTransformer_TwoGrabPlaneConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabPlaneTransformer_TwoGrabPlaneConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabPlaneTransformer_TwoGrabPlaneConstraints(TwoGrabPlaneTransformer_TwoGrabPlaneConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15830};

/// @brief Field MaxScale, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxScale;

/// @brief Field MinScale, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinScale;

/// @brief Field MaxY, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxY;

/// @brief Field MinY, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints, ___MaxScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints, ___MinScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints, ___MaxY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints, ___MinY) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabPlaneTransformer_TwoGrabPlaneConstraints) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
