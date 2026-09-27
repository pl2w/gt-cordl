#pragma once
// IWYU pragma private; include "GlobalNamespace/FloppyFold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloppyFold_Axis_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloppyFold)
namespace GlobalNamespace {
struct FloppyFold_Axis;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FloppyFold;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloppyFold*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloppyFold*, "", "FloppyFold");
// Dependencies FloppyFold::Axis, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloppyFold
class CORDL_TYPE FloppyFold : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::FloppyFold_Axis;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

/// @brief Field IgnorePlayerMovement, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnorePlayerMovement, put=__cordl_internal_set_IgnorePlayerMovement)) bool  IgnorePlayerMovement;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field LocalCenterOfMass, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_LocalCenterOfMass, put=__cordl_internal_set_LocalCenterOfMass)) ::UnityEngine::Vector3  LocalCenterOfMass;

/// @brief Field LocalRotationAxis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalRotationAxis, put=__cordl_internal_set_LocalRotationAxis)) ::GlobalNamespace::FloppyFold_Axis  LocalRotationAxis;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field angle, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field drag, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) float_t  drag;

/// @brief Field freeMaxAngle, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_freeMaxAngle, put=__cordl_internal_set_freeMaxAngle)) float_t  freeMaxAngle;

/// @brief Field freeMinAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_freeMinAngle, put=__cordl_internal_set_freeMinAngle)) float_t  freeMinAngle;

/// @brief Field gravity, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) float_t  gravity;

/// @brief Field lastRigLocalPosition, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRigLocalPosition, put=__cordl_internal_set_lastRigLocalPosition)) ::UnityEngine::Vector3  lastRigLocalPosition;

/// @brief Field lastRigLocalVelocity, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRigLocalVelocity, put=__cordl_internal_set_lastRigLocalVelocity)) ::UnityEngine::Vector3  lastRigLocalVelocity;

/// @brief Field lastWorldPosition, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastWorldPosition, put=__cordl_internal_set_lastWorldPosition)) ::UnityEngine::Vector3  lastWorldPosition;

/// @brief Field localFriction, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_localFriction, put=__cordl_internal_set_localFriction)) float_t  localFriction;

/// @brief Field maxAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAngle, put=__cordl_internal_set_maxAngle)) float_t  maxAngle;

/// @brief Field minAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAngle, put=__cordl_internal_set_minAngle)) float_t  minAngle;

/// @brief Field rigRoot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigRoot, put=__cordl_internal_set_rigRoot)) ::UnityW<::UnityEngine::Transform>  rigRoot;

/// @brief Field springStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_springStrength, put=__cordl_internal_set_springStrength)) float_t  springStrength;

/// @brief Field velocity, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method AxisVector, addr 0x564e2d4, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 AxisVector(::GlobalNamespace::FloppyFold_Axis  axis) ;

static inline ::GlobalNamespace::FloppyFold* New_ctor() ;

/// @brief Method OnDespawn, addr 0x564e4dc, size 0xc, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnSpawn, addr 0x564e43c, size 0xa0, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Reanchor, addr 0x564e3b4, size 0x88, virtual false, abstract: false, final false
inline void Reanchor() ;

/// @brief Method RememberInRigSpace, addr 0x564e4e8, size 0xac, virtual false, abstract: false, final false
inline void RememberInRigSpace() ;

/// @brief Method Start, addr 0x564e120, size 0x1b4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x564e594, size 0x53c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_IgnorePlayerMovement() const;

constexpr bool& __cordl_internal_get_IgnorePlayerMovement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_LocalCenterOfMass() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_LocalCenterOfMass() ;

constexpr ::GlobalNamespace::FloppyFold_Axis const& __cordl_internal_get_LocalRotationAxis() const;

constexpr ::GlobalNamespace::FloppyFold_Axis& __cordl_internal_get_LocalRotationAxis() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr float_t const& __cordl_internal_get_drag() const;

constexpr float_t& __cordl_internal_get_drag() ;

constexpr float_t const& __cordl_internal_get_freeMaxAngle() const;

constexpr float_t& __cordl_internal_get_freeMaxAngle() ;

constexpr float_t const& __cordl_internal_get_freeMinAngle() const;

constexpr float_t& __cordl_internal_get_freeMinAngle() ;

constexpr float_t const& __cordl_internal_get_gravity() const;

constexpr float_t& __cordl_internal_get_gravity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRigLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRigLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRigLocalVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRigLocalVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastWorldPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastWorldPosition() ;

constexpr float_t const& __cordl_internal_get_localFriction() const;

constexpr float_t& __cordl_internal_get_localFriction() ;

constexpr float_t const& __cordl_internal_get_maxAngle() const;

constexpr float_t& __cordl_internal_get_maxAngle() ;

constexpr float_t const& __cordl_internal_get_minAngle() const;

constexpr float_t& __cordl_internal_get_minAngle() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rigRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rigRoot() ;

constexpr float_t const& __cordl_internal_get_springStrength() const;

constexpr float_t& __cordl_internal_get_springStrength() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_IgnorePlayerMovement(bool  value) ;

constexpr void __cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_LocalRotationAxis(::GlobalNamespace::FloppyFold_Axis  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_drag(float_t  value) ;

constexpr void __cordl_internal_set_freeMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_freeMinAngle(float_t  value) ;

constexpr void __cordl_internal_set_gravity(float_t  value) ;

constexpr void __cordl_internal_set_lastRigLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRigLocalVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastWorldPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localFriction(float_t  value) ;

constexpr void __cordl_internal_set_maxAngle(float_t  value) ;

constexpr void __cordl_internal_set_minAngle(float_t  value) ;

constexpr void __cordl_internal_set_rigRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_springStrength(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x564ead0, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x564e110, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x564e100, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x564e118, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x564e108, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloppyFold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloppyFold", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloppyFold(FloppyFold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloppyFold", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloppyFold(FloppyFold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{715};

/// [SerializeField]
/// @brief Field LocalRotationAxis, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::FloppyFold_Axis  ___LocalRotationAxis;

/// [SerializeField]
/// @brief Field LocalCenterOfMass, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___LocalCenterOfMass;

/// [SerializeField]
/// @brief Field minAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___minAngle;

/// [SerializeField]
/// @brief Field maxAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxAngle;

/// [SerializeField]
/// @brief Field freeMinAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ___freeMinAngle;

/// [SerializeField]
/// @brief Field freeMaxAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  ___freeMaxAngle;

/// [SerializeField]
/// @brief Field springStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___springStrength;

/// [SerializeField]
/// @brief Field drag, offset: 0x44, size: 0x4, def value: None
 float_t  ___drag;

/// [SerializeField]
/// @brief Field gravity, offset: 0x48, size: 0x4, def value: None
 float_t  ___gravity;

/// [SerializeField]
/// @brief Field localFriction, offset: 0x4c, size: 0x4, def value: None
 float_t  ___localFriction;

/// [SerializeField]
/// @brief Field IgnorePlayerMovement, offset: 0x50, size: 0x1, def value: None
 bool  ___IgnorePlayerMovement;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x51, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

/// @brief Field rigRoot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rigRoot;

/// @brief Field angle, offset: 0x60, size: 0x4, def value: None
 float_t  ___angle;

/// @brief Field lastWorldPosition, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastWorldPosition;

/// @brief Field velocity, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field lastRigLocalPosition, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRigLocalPosition;

/// @brief Field lastRigLocalVelocity, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRigLocalVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloppyFold, ___LocalRotationAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___LocalCenterOfMass) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___minAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___maxAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___freeMinAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___freeMaxAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___springStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___drag) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___gravity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___localFriction) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___IgnorePlayerMovement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ____IsSpawned_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ____CosmeticSelectedSide_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___rigRoot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___angle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___lastWorldPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___velocity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___lastRigLocalPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloppyFold, ___lastRigLocalVelocity) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloppyFold) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
