#pragma once
// IWYU pragma private; include "GlobalNamespace/WizardStaffHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WizardStaffHoldable)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WizardStaffHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WizardStaffHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WizardStaffHoldable*, "", "WizardStaffHoldable");
// Dependencies TransferrableObject, UnityEngine.LayerMask, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: WizardStaffHoldable
class CORDL_TYPE WizardStaffHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field cooldown, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field cooldownRemaining, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownRemaining, put=__cordl_internal_set_cooldownRemaining)) float_t  cooldownRemaining;

/// @brief Field effectsGameObject, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsGameObject, put=__cordl_internal_set_effectsGameObject)) ::UnityW<::UnityEngine::GameObject>  effectsGameObject;

/// @brief Field effectsHaveBeenPlayed, offset 0x379, size 0x1 
 __declspec(property(get=__cordl_internal_get_effectsHaveBeenPlayed, put=__cordl_internal_set_effectsHaveBeenPlayed)) bool  effectsHaveBeenPlayed;

/// @brief Field hasEffectsGameObject, offset 0x378, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasEffectsGameObject, put=__cordl_internal_set_hasEffectsGameObject)) bool  hasEffectsGameObject;

/// @brief Field hitLastFrame, offset 0x368, size 0x1 
 __declspec(property(get=__cordl_internal_get_hitLastFrame, put=__cordl_internal_set_hitLastFrame)) bool  hitLastFrame;

/// @brief Field minSlamAngle, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSlamAngle, put=__cordl_internal_set_minSlamAngle)) float_t  minSlamAngle;

/// @brief Field minSlamVelocity, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSlamVelocity, put=__cordl_internal_set_minSlamVelocity)) float_t  minSlamVelocity;

/// @brief Field tipCollisionLayerMask, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tipCollisionLayerMask, put=__cordl_internal_set_tipCollisionLayerMask)) ::UnityEngine::LayerMask  tipCollisionLayerMask;

/// @brief Field tipCollisionRadius, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_tipCollisionRadius, put=__cordl_internal_set_tipCollisionRadius)) float_t  tipCollisionRadius;

/// @brief Field tipTargetLocalPosition, offset 0x36c, size 0xc 
 __declspec(property(get=__cordl_internal_get_tipTargetLocalPosition, put=__cordl_internal_set_tipTargetLocalPosition)) ::UnityEngine::Vector3  tipTargetLocalPosition;

/// @brief Field tipTransform, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_tipTransform, put=__cordl_internal_set_tipTransform)) ::UnityW<::UnityEngine::Transform>  tipTransform;

/// @brief Field velocityEstimator, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method InitToDefault, addr 0x5e06a70, size 0x40, virtual false, abstract: false, final false
inline void InitToDefault() ;

/// @brief Method LateUpdateLocal, addr 0x5e06acc, size 0x160, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5e06e24, size 0x34, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5e06c2c, size 0x1f8, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::WizardStaffHoldable* New_ctor() ;

/// @brief Method OnEnable, addr 0x5e06a54, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x5e069b0, size 0xa4, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ResetToDefaultState, addr 0x5e06ab0, size 0x1c, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_cooldownRemaining() const;

constexpr float_t& __cordl_internal_get_cooldownRemaining() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectsGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectsGameObject() ;

constexpr bool const& __cordl_internal_get_effectsHaveBeenPlayed() const;

constexpr bool& __cordl_internal_get_effectsHaveBeenPlayed() ;

constexpr bool const& __cordl_internal_get_hasEffectsGameObject() const;

constexpr bool& __cordl_internal_get_hasEffectsGameObject() ;

constexpr bool const& __cordl_internal_get_hitLastFrame() const;

constexpr bool& __cordl_internal_get_hitLastFrame() ;

constexpr float_t const& __cordl_internal_get_minSlamAngle() const;

constexpr float_t& __cordl_internal_get_minSlamAngle() ;

constexpr float_t const& __cordl_internal_get_minSlamVelocity() const;

constexpr float_t& __cordl_internal_get_minSlamVelocity() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_tipCollisionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_tipCollisionLayerMask() ;

constexpr float_t const& __cordl_internal_get_tipCollisionRadius() const;

constexpr float_t& __cordl_internal_get_tipCollisionRadius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_tipTargetLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_tipTargetLocalPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tipTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tipTransform() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_cooldownRemaining(float_t  value) ;

constexpr void __cordl_internal_set_effectsGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_effectsHaveBeenPlayed(bool  value) ;

constexpr void __cordl_internal_set_hasEffectsGameObject(bool  value) ;

constexpr void __cordl_internal_set_hitLastFrame(bool  value) ;

constexpr void __cordl_internal_set_minSlamAngle(float_t  value) ;

constexpr void __cordl_internal_set_minSlamVelocity(float_t  value) ;

constexpr void __cordl_internal_set_tipCollisionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_tipCollisionRadius(float_t  value) ;

constexpr void __cordl_internal_set_tipTargetLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tipTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5e06e58, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WizardStaffHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WizardStaffHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WizardStaffHoldable(WizardStaffHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WizardStaffHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WizardStaffHoldable(WizardStaffHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{531};

/// [Tooltip("This GameObject will activate when the staff hits the ground with enough force.")]
/// @brief Field effectsGameObject, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectsGameObject;

/// [Tooltip("The Transform of the staff\'s tip which will be used to determine if the staff is being slammed. Up axis (Y) should point along the length of the staff.")]
/// @brief Field tipTransform, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tipTransform;

/// @brief Field tipCollisionRadius, offset: 0x348, size: 0x4, def value: None
 float_t  ___tipCollisionRadius;

/// @brief Field tipCollisionLayerMask, offset: 0x34c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___tipCollisionLayerMask;

/// [Tooltip("Used to calculate velocity of the staff.")]
/// @brief Field velocityEstimator, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field cooldown, offset: 0x358, size: 0x4, def value: None
 float_t  ___cooldown;

/// [Tooltip("The velocity of the staff\'s tip must be greater than this value to activate the effect.")]
/// @brief Field minSlamVelocity, offset: 0x35c, size: 0x4, def value: None
 float_t  ___minSlamVelocity;

/// [Tooltip("The angle (in degrees) between the staff\'s tip and the ground must be less than this value to activate the effect.")]
/// @brief Field minSlamAngle, offset: 0x360, size: 0x4, def value: None
 float_t  ___minSlamAngle;

/// [DebugReadout]
/// @brief Field cooldownRemaining, offset: 0x364, size: 0x4, def value: None
 float_t  ___cooldownRemaining;

/// [DebugReadout]
/// @brief Field hitLastFrame, offset: 0x368, size: 0x1, def value: None
 bool  ___hitLastFrame;

/// @brief Field tipTargetLocalPosition, offset: 0x36c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___tipTargetLocalPosition;

/// @brief Field hasEffectsGameObject, offset: 0x378, size: 0x1, def value: None
 bool  ___hasEffectsGameObject;

/// @brief Field effectsHaveBeenPlayed, offset: 0x379, size: 0x1, def value: None
 bool  ___effectsHaveBeenPlayed;

/// @brief Size padding 0x3b0 - 0x380 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___effectsGameObject) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___tipTransform) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___tipCollisionRadius) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___tipCollisionLayerMask) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___velocityEstimator) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___cooldown) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___minSlamVelocity) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___minSlamAngle) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___cooldownRemaining) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___hitLastFrame) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___tipTargetLocalPosition) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___hasEffectsGameObject) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WizardStaffHoldable, ___effectsHaveBeenPlayed) == 0x379, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WizardStaffHoldable) == 0x3b0, "Size mismatch!");

} // namespace end def GlobalNamespace
