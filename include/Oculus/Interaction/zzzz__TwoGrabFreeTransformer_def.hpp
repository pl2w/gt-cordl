#pragma once
// IWYU pragma private; include "Oculus/Interaction/TwoGrabFreeTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwoGrabFreeTransformer)
namespace GlobalNamespace {
struct TwoGrabFreeTransformer_TwoGrabFreeState;
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
class TwoGrabFreeTransformer_TwoGrabFreeConstraints;
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
class TwoGrabFreeTransformer;
}
namespace Oculus::Interaction {
class TwoGrabFreeTransformer_TwoGrabFreeConstraints;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TwoGrabFreeTransformer*);
MARK_REF_T(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabFreeTransformer*, "Oculus.Interaction", "TwoGrabFreeTransformer");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*, "Oculus.Interaction", "TwoGrabFreeTransformer/TwoGrabFreeConstraints");
// [Obsolete("Use GrabFreeTransformer instead")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabFreeTransformer
class CORDL_TYPE TwoGrabFreeTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TwoGrabFreeState = ::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState;

using TwoGrabFreeConstraints = ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints;

 __declspec(property(get=get_Constraints, put=set_Constraints)) ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  Constraints;

/// @brief Field _baseScale, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__baseScale, put=__cordl_internal_set__baseScale)) ::UnityEngine::Vector3  _baseScale;

/// @brief Field _constraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__constraints, put=__cordl_internal_set__constraints)) ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  _constraints;

/// @brief Field _grabbable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _localMagnitudeToTarget, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__localMagnitudeToTarget, put=__cordl_internal_set__localMagnitudeToTarget)) float_t  _localMagnitudeToTarget;

/// @brief Field _localToTarget, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localToTarget, put=__cordl_internal_set__localToTarget)) ::UnityEngine::Pose  _localToTarget;

/// @brief Field _prevGrabA, offset 0x5c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__prevGrabA, put=__cordl_internal_set__prevGrabA)) ::UnityEngine::Pose  _prevGrabA;

/// @brief Field _prevGrabB, offset 0x78, size 0x1c 
 __declspec(property(get=__cordl_internal_get__prevGrabB, put=__cordl_internal_set__prevGrabB)) ::UnityEngine::Pose  _prevGrabB;

/// @brief Field _prevGrabRotation, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get__prevGrabRotation, put=__cordl_internal_set__prevGrabRotation)) ::UnityEngine::Quaternion  _prevGrabRotation;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa44d144, size 0x2f8, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method ConstrainScale, addr 0xa44e198, size 0x1c4, virtual false, abstract: false, final false
inline float_t ConstrainScale(float_t  targetScale) ;

/// @brief Method EndTransform, addr 0xa44e418, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa44d070, size 0xd4, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

/// @brief Method InjectOptionalConstraints, addr 0xa44e41c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalConstraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  constraints) ;

/// @brief Method MarkAsBaseScale, addr 0xa44e35c, size 0xbc, virtual false, abstract: false, final false
inline void MarkAsBaseScale() ;

static inline ::Oculus::Interaction::TwoGrabFreeTransformer* New_ctor() ;

/// @brief Method TwoGrabFree, addr 0xa44da4c, size 0x74c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState TwoGrabFree(::UnityEngine::Quaternion  initialRotation, ::UnityEngine::Pose  prevA, ::UnityEngine::Pose  prevB, ::UnityEngine::Pose  newA, ::UnityEngine::Pose  newB) ;

/// @brief Method TwoGrabFreeInit, addr 0xa44d43c, size 0x1f4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TwoGrabFreeTransformer_TwoGrabFreeState TwoGrabFreeInit(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method UpdateTransform, addr 0xa44d630, size 0x41c, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__baseScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__baseScale() ;

constexpr ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* const& __cordl_internal_get__constraints() const;

constexpr ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*& __cordl_internal_get__constraints() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr float_t const& __cordl_internal_get__localMagnitudeToTarget() const;

constexpr float_t& __cordl_internal_get__localMagnitudeToTarget() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localToTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localToTarget() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__prevGrabA() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__prevGrabA() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__prevGrabB() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__prevGrabB() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__prevGrabRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__prevGrabRotation() ;

constexpr void __cordl_internal_set__baseScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__constraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__localMagnitudeToTarget(float_t  value) ;

constexpr void __cordl_internal_set__localToTarget(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__prevGrabA(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__prevGrabB(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__prevGrabRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xa44e424, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Constraints, addr 0xa44d060, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* get_Constraints() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

/// @brief Method set_Constraints, addr 0xa44d068, size 0x8, virtual false, abstract: false, final false
inline void set_Constraints(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabFreeTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabFreeTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabFreeTransformer(TwoGrabFreeTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabFreeTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabFreeTransformer(TwoGrabFreeTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15829};

/// [SerializeField]
/// @brief Field _constraints, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints*  ____constraints;

/// @brief Field _grabbable, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _baseScale, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____baseScale;

/// @brief Field _localToTarget, offset: 0x3c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localToTarget;

/// @brief Field _localMagnitudeToTarget, offset: 0x58, size: 0x4, def value: None
 float_t  ____localMagnitudeToTarget;

/// @brief Field _prevGrabA, offset: 0x5c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____prevGrabA;

/// @brief Field _prevGrabB, offset: 0x78, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____prevGrabB;

/// @brief Field _prevGrabRotation, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____prevGrabRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____constraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____grabbable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____baseScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____localToTarget) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____localMagnitudeToTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____prevGrabA) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____prevGrabB) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer, ____prevGrabRotation) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabFreeTransformer) == 0xa8, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TwoGrabFreeTransformer/TwoGrabFreeConstraints
class CORDL_TYPE TwoGrabFreeTransformer_TwoGrabFreeConstraints : public ::System::Object {
public:
// Declarations
/// @brief Field ConstrainXScale, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstrainXScale, put=__cordl_internal_set_ConstrainXScale)) bool  ConstrainXScale;

/// @brief Field ConstrainYScale, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstrainYScale, put=__cordl_internal_set_ConstrainYScale)) bool  ConstrainYScale;

/// @brief Field ConstrainZScale, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstrainZScale, put=__cordl_internal_set_ConstrainZScale)) bool  ConstrainZScale;

/// @brief Field ConstraintsAreRelative, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ConstraintsAreRelative, put=__cordl_internal_set_ConstraintsAreRelative)) bool  ConstraintsAreRelative;

/// @brief Field MaxScale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxScale, put=__cordl_internal_set_MaxScale)) ::Oculus::Interaction::FloatConstraint*  MaxScale;

/// @brief Field MinScale, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MinScale, put=__cordl_internal_set_MinScale)) ::Oculus::Interaction::FloatConstraint*  MinScale;

static inline ::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints* New_ctor() ;

constexpr bool const& __cordl_internal_get_ConstrainXScale() const;

constexpr bool& __cordl_internal_get_ConstrainXScale() ;

constexpr bool const& __cordl_internal_get_ConstrainYScale() const;

constexpr bool& __cordl_internal_get_ConstrainYScale() ;

constexpr bool const& __cordl_internal_get_ConstrainZScale() const;

constexpr bool& __cordl_internal_get_ConstrainZScale() ;

constexpr bool const& __cordl_internal_get_ConstraintsAreRelative() const;

constexpr bool& __cordl_internal_get_ConstraintsAreRelative() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MaxScale() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MaxScale() ;

constexpr ::Oculus::Interaction::FloatConstraint* const& __cordl_internal_get_MinScale() const;

constexpr ::Oculus::Interaction::FloatConstraint*& __cordl_internal_get_MinScale() ;

constexpr void __cordl_internal_set_ConstrainXScale(bool  value) ;

constexpr void __cordl_internal_set_ConstrainYScale(bool  value) ;

constexpr void __cordl_internal_set_ConstrainZScale(bool  value) ;

constexpr void __cordl_internal_set_ConstraintsAreRelative(bool  value) ;

constexpr void __cordl_internal_set_MaxScale(::Oculus::Interaction::FloatConstraint*  value) ;

constexpr void __cordl_internal_set_MinScale(::Oculus::Interaction::FloatConstraint*  value) ;

/// @brief Method .ctor, addr 0xa44e42c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TwoGrabFreeTransformer_TwoGrabFreeConstraints() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabFreeTransformer_TwoGrabFreeConstraints", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoGrabFreeTransformer_TwoGrabFreeConstraints(TwoGrabFreeTransformer_TwoGrabFreeConstraints && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoGrabFreeTransformer_TwoGrabFreeConstraints", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoGrabFreeTransformer_TwoGrabFreeConstraints(TwoGrabFreeTransformer_TwoGrabFreeConstraints const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15827};

/// [Tooltip("If true then the constraints are relative to the initial/base scale of the object if false, constraints are absolute with respect to the object\'s selected axes.")]
/// @brief Field ConstraintsAreRelative, offset: 0x10, size: 0x1, def value: None
 bool  ___ConstraintsAreRelative;

/// @brief Field MinScale, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MinScale;

/// @brief Field MaxScale, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::FloatConstraint*  ___MaxScale;

/// @brief Field ConstrainXScale, offset: 0x28, size: 0x1, def value: None
 bool  ___ConstrainXScale;

/// @brief Field ConstrainYScale, offset: 0x29, size: 0x1, def value: None
 bool  ___ConstrainYScale;

/// @brief Field ConstrainZScale, offset: 0x2a, size: 0x1, def value: None
 bool  ___ConstrainZScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___ConstraintsAreRelative) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___MinScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___MaxScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___ConstrainXScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___ConstrainYScale) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints, ___ConstrainZScale) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TwoGrabFreeTransformer_TwoGrabFreeConstraints) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
