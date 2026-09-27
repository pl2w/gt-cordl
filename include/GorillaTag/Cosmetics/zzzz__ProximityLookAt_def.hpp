#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ProximityLookAt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ProximityLookAt_LocalAxis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProximityLookAt)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct ProximityLookAt_LocalAxis;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ProximityLookAt;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ProximityLookAt*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ProximityLookAt*, "GorillaTag.Cosmetics", "ProximityLookAt");
// Dependencies GorillaTag.Cosmetics.ProximityLookAt::LocalAxis, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ProximityLookAt
class CORDL_TYPE ProximityLookAt : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LocalAxis = ::GlobalNamespace::ProximityLookAt_LocalAxis;

/// @brief Field cosAngle, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosAngle, put=__cordl_internal_set_cosAngle)) float_t  cosAngle;

/// @brief Field includeOwner, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeOwner, put=__cordl_internal_set_includeOwner)) bool  includeOwner;

/// @brief Field lastTargetSwitchTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTargetSwitchTime, put=__cordl_internal_set_lastTargetSwitchTime)) float_t  lastTargetSwitchTime;

/// @brief Field localForward, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_localForward, put=__cordl_internal_set_localForward)) ::GlobalNamespace::ProximityLookAt_LocalAxis  localForward;

/// @brief Field lookAtAngleDegreeMax, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtAngleDegreeMax, put=__cordl_internal_set_lookAtAngleDegreeMax)) float_t  lookAtAngleDegreeMax;

/// @brief Field lookRadius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookRadius, put=__cordl_internal_set_lookRadius)) float_t  lookRadius;

/// @brief Field lookTarget, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookTarget, put=__cordl_internal_set_lookTarget)) ::UnityW<::UnityEngine::Transform>  lookTarget;

/// @brief Field lookTransforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookTransforms, put=__cordl_internal_set_lookTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  lookTransforms;

/// @brief Field maxPivotY, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPivotY, put=__cordl_internal_set_maxPivotY)) float_t  maxPivotY;

/// @brief Field minPivotY, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_minPivotY, put=__cordl_internal_set_minPivotY)) float_t  minPivotY;

/// @brief Field normalizedLocalForward, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_normalizedLocalForward, put=__cordl_internal_set_normalizedLocalForward)) ::UnityEngine::Vector3  normalizedLocalForward;

/// @brief Field ownerRig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field pivotConstraint, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivotConstraint, put=__cordl_internal_set_pivotConstraint)) ::UnityW<::UnityEngine::Transform>  pivotConstraint;

/// @brief Field rotSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeed, put=__cordl_internal_set_rotSpeed)) float_t  rotSpeed;

/// @brief Field sqrRadius, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_sqrRadius, put=__cordl_internal_set_sqrRadius)) float_t  sqrRadius;

/// @brief Field targetSearchAngleDegrees, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSearchAngleDegrees, put=__cordl_internal_set_targetSearchAngleDegrees)) float_t  targetSearchAngleDegrees;

/// @brief Field targetSwitchCooldown, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetSwitchCooldown, put=__cordl_internal_set_targetSwitchCooldown)) float_t  targetSwitchCooldown;

/// @brief Field transferableParent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferableParent, put=__cordl_internal_set_transferableParent)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferableParent;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method CacheSettings, addr 0x5d75a78, size 0x44, virtual false, abstract: false, final false
inline void CacheSettings() ;

/// @brief Method FindTarget, addr 0x5d75db8, size 0x614, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindTarget() ;

/// @brief Method LateUpdate, addr 0x5d763cc, size 0x4b0, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LocalAxisToVector, addr 0x5d75b34, size 0x1c8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LocalAxisToVector(::GlobalNamespace::ProximityLookAt_LocalAxis  axis) ;

static inline ::GorillaTag::Cosmetics::ProximityLookAt* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d75abc, size 0x34, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d758b0, size 0x1c8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x5d75af0, size 0x44, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SliceUpdate, addr 0x5d75cfc, size 0xbc, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr float_t const& __cordl_internal_get_cosAngle() const;

constexpr float_t& __cordl_internal_get_cosAngle() ;

constexpr bool const& __cordl_internal_get_includeOwner() const;

constexpr bool& __cordl_internal_get_includeOwner() ;

constexpr float_t const& __cordl_internal_get_lastTargetSwitchTime() const;

constexpr float_t& __cordl_internal_get_lastTargetSwitchTime() ;

constexpr ::GlobalNamespace::ProximityLookAt_LocalAxis const& __cordl_internal_get_localForward() const;

constexpr ::GlobalNamespace::ProximityLookAt_LocalAxis& __cordl_internal_get_localForward() ;

constexpr float_t const& __cordl_internal_get_lookAtAngleDegreeMax() const;

constexpr float_t& __cordl_internal_get_lookAtAngleDegreeMax() ;

constexpr float_t const& __cordl_internal_get_lookRadius() const;

constexpr float_t& __cordl_internal_get_lookRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookTarget() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_lookTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_lookTransforms() ;

constexpr float_t const& __cordl_internal_get_maxPivotY() const;

constexpr float_t& __cordl_internal_get_maxPivotY() ;

constexpr float_t const& __cordl_internal_get_minPivotY() const;

constexpr float_t& __cordl_internal_get_minPivotY() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_normalizedLocalForward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_normalizedLocalForward() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivotConstraint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivotConstraint() ;

constexpr float_t const& __cordl_internal_get_rotSpeed() const;

constexpr float_t& __cordl_internal_get_rotSpeed() ;

constexpr float_t const& __cordl_internal_get_sqrRadius() const;

constexpr float_t& __cordl_internal_get_sqrRadius() ;

constexpr float_t const& __cordl_internal_get_targetSearchAngleDegrees() const;

constexpr float_t& __cordl_internal_get_targetSearchAngleDegrees() ;

constexpr float_t const& __cordl_internal_get_targetSwitchCooldown() const;

constexpr float_t& __cordl_internal_get_targetSwitchCooldown() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferableParent() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferableParent() ;

constexpr void __cordl_internal_set_cosAngle(float_t  value) ;

constexpr void __cordl_internal_set_includeOwner(bool  value) ;

constexpr void __cordl_internal_set_lastTargetSwitchTime(float_t  value) ;

constexpr void __cordl_internal_set_localForward(::GlobalNamespace::ProximityLookAt_LocalAxis  value) ;

constexpr void __cordl_internal_set_lookAtAngleDegreeMax(float_t  value) ;

constexpr void __cordl_internal_set_lookRadius(float_t  value) ;

constexpr void __cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lookTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_maxPivotY(float_t  value) ;

constexpr void __cordl_internal_set_minPivotY(float_t  value) ;

constexpr void __cordl_internal_set_normalizedLocalForward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_pivotConstraint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rotSpeed(float_t  value) ;

constexpr void __cordl_internal_set_sqrRadius(float_t  value) ;

constexpr void __cordl_internal_set_targetSearchAngleDegrees(float_t  value) ;

constexpr void __cordl_internal_set_targetSwitchCooldown(float_t  value) ;

constexpr void __cordl_internal_set_transferableParent(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d7687c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityLookAt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityLookAt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityLookAt(ProximityLookAt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityLookAt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityLookAt(ProximityLookAt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4860};

/// [Header("Settings")]
/// [SerializeField]
/// @brief Field lookTransforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___lookTransforms;

/// [Tooltip("The local axis that points \'forward\' on this transform.")]
/// [SerializeField]
/// @brief Field localForward, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ProximityLookAt_LocalAxis  ___localForward;

/// [SerializeField]
/// @brief Field lookRadius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___lookRadius;

/// [Tooltip("The cone angle in degrees used to detect nearby players.Only players within this angle of the forward direction are considered as targets.")]
/// [SerializeField]
/// @brief Field targetSearchAngleDegrees, offset: 0x30, size: 0x4, def value: None
 float_t  ___targetSearchAngleDegrees;

/// [Tooltip("How far in degrees the transform can physically rotate from its rest position.Should be less than or equal to targetSearchAngleDegrees")]
/// [SerializeField]
/// @brief Field lookAtAngleDegreeMax, offset: 0x34, size: 0x4, def value: None
 float_t  ___lookAtAngleDegreeMax;

/// [SerializeField]
/// @brief Field rotSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___rotSpeed;

/// [Tooltip("Seconds to hold the current target before switching to a new one")]
/// [SerializeField]
/// @brief Field targetSwitchCooldown, offset: 0x3c, size: 0x4, def value: None
 float_t  ___targetSwitchCooldown;

/// [Tooltip("Whether the cosmetic owner can be considered as a look target.")]
/// [SerializeField]
/// @brief Field includeOwner, offset: 0x40, size: 0x1, def value: None
 bool  ___includeOwner;

/// [Header("Pivot Clamping (Optional)")]
/// [Tooltip("Assign a pivot transform to constrain rotation relative to it. Leave empty to skip clamping.")]
/// [SerializeField]
/// @brief Field pivotConstraint, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pivotConstraint;

/// [SerializeField]
/// @brief Field minPivotY, offset: 0x50, size: 0x4, def value: None
 float_t  ___minPivotY;

/// [SerializeField]
/// @brief Field maxPivotY, offset: 0x54, size: 0x4, def value: None
 float_t  ___maxPivotY;

/// @brief Field transferableParent, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferableParent;

/// @brief Field ownerRig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field lookTarget, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookTarget;

/// @brief Field normalizedLocalForward, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___normalizedLocalForward;

/// @brief Field cosAngle, offset: 0x7c, size: 0x4, def value: None
 float_t  ___cosAngle;

/// @brief Field sqrRadius, offset: 0x80, size: 0x4, def value: None
 float_t  ___sqrRadius;

/// @brief Field lastTargetSwitchTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___lastTargetSwitchTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___lookTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___localForward) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___lookRadius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___targetSearchAngleDegrees) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___lookAtAngleDegreeMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___rotSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___targetSwitchCooldown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___includeOwner) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___pivotConstraint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___minPivotY) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___maxPivotY) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___transferableParent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___ownerRig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___lookTarget) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___normalizedLocalForward) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___cosAngle) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___sqrRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ProximityLookAt, ___lastTargetSwitchTime) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ProximityLookAt) == 0x88, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
