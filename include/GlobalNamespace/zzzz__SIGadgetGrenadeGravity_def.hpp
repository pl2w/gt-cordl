#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetGrenadeGravity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetGrenadeGravity_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetGrenadeGravity)
namespace GlobalNamespace {
struct SIGadgetGrenadeGravity_State;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetGrenadeGravity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetGrenadeGravity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetGrenadeGravity*, "", "SIGadgetGrenadeGravity");
// Dependencies SIGadgetGrenade, SIGadgetGrenadeGravity::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetGrenadeGravity
class CORDL_TYPE SIGadgetGrenadeGravity : public ::GlobalNamespace::SIGadgetGrenade {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetGrenadeGravity_State;

/// @brief Field activatedMat, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activatedMat, put=__cordl_internal_set_activatedMat)) ::UnityW<::UnityEngine::Material>  activatedMat;

/// @brief Field attractorStrength, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_attractorStrength, put=__cordl_internal_set_attractorStrength)) float_t  attractorStrength;

/// @brief Field counterDuration, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_counterDuration, put=__cordl_internal_set_counterDuration)) float_t  counterDuration;

/// @brief Field freezePositionOnTrigger, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_freezePositionOnTrigger, put=__cordl_internal_set_freezePositionOnTrigger)) bool  freezePositionOnTrigger;

/// @brief Field gravityField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityField, put=__cordl_internal_set_gravityField)) ::UnityW<::UnityEngine::GameObject>  gravityField;

/// @brief Field idleMat, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleMat, put=__cordl_internal_set_idleMat)) ::UnityW<::UnityEngine::Material>  idleMat;

/// @brief Field isLocalPlayerInEffect, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocalPlayerInEffect, put=__cordl_internal_set_isLocalPlayerInEffect)) bool  isLocalPlayerInEffect;

/// @brief Field mesh, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::MeshRenderer>  mesh;

/// @brief Field standardGravityMultiplier, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_standardGravityMultiplier, put=__cordl_internal_set_standardGravityMultiplier)) float_t  standardGravityMultiplier;

/// @brief Field state, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetGrenadeGravity_State  state;

/// @brief Field stateRemainingDuration, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateRemainingDuration, put=__cordl_internal_set_stateRemainingDuration)) float_t  stateRemainingDuration;

/// @brief Field triggerDuration, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerDuration, put=__cordl_internal_set_triggerDuration)) float_t  triggerDuration;

/// @brief Field triggeredMat, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggeredMat, put=__cordl_internal_set_triggeredMat)) ::UnityW<::UnityEngine::Material>  triggeredMat;

/// @brief Method ActivateGravityEffect, addr 0x58df1fc, size 0xa0, virtual false, abstract: false, final false
inline void ActivateGravityEffect() ;

/// @brief Method CanChangeState, addr 0x58df0b8, size 0xc, virtual false, abstract: false, final false
inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method CheckReenabledFreezePosition, addr 0x58def0c, size 0xb8, virtual false, abstract: false, final false
inline void CheckReenabledFreezePosition() ;

/// @brief Method DeactivateGravityEffect, addr 0x58df0c4, size 0x138, virtual false, abstract: false, final false
inline void DeactivateGravityEffect() ;

/// @brief Method GravityOverrideFunction, addr 0x58df530, size 0x24c, virtual false, abstract: false, final false
inline void GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

/// @brief Method HandleActivated, addr 0x58dee54, size 0x1c, virtual true, abstract: false, final false
inline void HandleActivated() ;

/// @brief Method HandleHitSurface, addr 0x58deeac, size 0x4, virtual true, abstract: false, final false
inline void HandleHitSurface() ;

/// @brief Method HandleThrown, addr 0x58deea8, size 0x4, virtual true, abstract: false, final false
inline void HandleThrown() ;

static inline ::GlobalNamespace::SIGadgetGrenadeGravity* New_ctor() ;

/// @brief Method OnEnable, addr 0x58dee1c, size 0x38, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x58df29c, size 0x170, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnTriggerExit, addr 0x58df40c, size 0x124, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdateAuthority, addr 0x58deeb0, size 0x5c, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58defc4, size 0x48, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58df00c, size 0xac, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetGrenadeGravity_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58dee70, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetGrenadeGravity_State  newState) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_activatedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_activatedMat() ;

constexpr float_t const& __cordl_internal_get_attractorStrength() const;

constexpr float_t& __cordl_internal_get_attractorStrength() ;

constexpr float_t const& __cordl_internal_get_counterDuration() const;

constexpr float_t& __cordl_internal_get_counterDuration() ;

constexpr bool const& __cordl_internal_get_freezePositionOnTrigger() const;

constexpr bool& __cordl_internal_get_freezePositionOnTrigger() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gravityField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gravityField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_idleMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_idleMat() ;

constexpr bool const& __cordl_internal_get_isLocalPlayerInEffect() const;

constexpr bool& __cordl_internal_get_isLocalPlayerInEffect() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_mesh() ;

constexpr float_t const& __cordl_internal_get_standardGravityMultiplier() const;

constexpr float_t& __cordl_internal_get_standardGravityMultiplier() ;

constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetGrenadeGravity_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stateRemainingDuration() const;

constexpr float_t& __cordl_internal_get_stateRemainingDuration() ;

constexpr float_t const& __cordl_internal_get_triggerDuration() const;

constexpr float_t& __cordl_internal_get_triggerDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_triggeredMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_triggeredMat() ;

constexpr void __cordl_internal_set_activatedMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_attractorStrength(float_t  value) ;

constexpr void __cordl_internal_set_counterDuration(float_t  value) ;

constexpr void __cordl_internal_set_freezePositionOnTrigger(bool  value) ;

constexpr void __cordl_internal_set_gravityField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_idleMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_isLocalPlayerInEffect(bool  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_standardGravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetGrenadeGravity_State  value) ;

constexpr void __cordl_internal_set_stateRemainingDuration(float_t  value) ;

constexpr void __cordl_internal_set_triggerDuration(float_t  value) ;

constexpr void __cordl_internal_set_triggeredMat(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x58df77c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetGrenadeGravity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeGravity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetGrenadeGravity(SIGadgetGrenadeGravity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetGrenadeGravity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetGrenadeGravity(SIGadgetGrenadeGravity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{264};

/// [Header("Activation")]
/// [SerializeField]
/// @brief Field counterDuration, offset: 0xa0, size: 0x4, def value: None
 float_t  ___counterDuration;

/// [Header("Gravity Effect")]
/// [SerializeField]
/// @brief Field gravityField, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gravityField;

/// [SerializeField]
/// @brief Field freezePositionOnTrigger, offset: 0xb0, size: 0x1, def value: None
 bool  ___freezePositionOnTrigger;

/// [SerializeField]
/// @brief Field triggerDuration, offset: 0xb4, size: 0x4, def value: None
 float_t  ___triggerDuration;

/// [SerializeField]
/// @brief Field standardGravityMultiplier, offset: 0xb8, size: 0x4, def value: None
 float_t  ___standardGravityMultiplier;

/// [SerializeField]
/// @brief Field attractorStrength, offset: 0xbc, size: 0x4, def value: None
 float_t  ___attractorStrength;

/// [Header("FX")]
/// [SerializeField]
/// @brief Field mesh, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___mesh;

/// [SerializeField]
/// @brief Field idleMat, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___idleMat;

/// [SerializeField]
/// @brief Field activatedMat, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___activatedMat;

/// [SerializeField]
/// @brief Field triggeredMat, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___triggeredMat;

/// @brief Field state, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetGrenadeGravity_State  ___state;

/// @brief Field stateRemainingDuration, offset: 0xe4, size: 0x4, def value: None
 float_t  ___stateRemainingDuration;

/// @brief Field isLocalPlayerInEffect, offset: 0xe8, size: 0x1, def value: None
 bool  ___isLocalPlayerInEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___counterDuration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___gravityField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___freezePositionOnTrigger) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___triggerDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___standardGravityMultiplier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___attractorStrength) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___mesh) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___idleMat) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___activatedMat) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___triggeredMat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___state) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___stateRemainingDuration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetGrenadeGravity, ___isLocalPlayerInEffect) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetGrenadeGravity) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
