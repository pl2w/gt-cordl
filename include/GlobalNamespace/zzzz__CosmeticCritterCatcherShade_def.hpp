#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterCatcherShade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterCatcherShade)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct CosmeticCritterAction;
}
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace GlobalNamespace {
class ShadeRevealer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterCatcherShade;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterCatcherShade*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterCatcherShade*, "", "CosmeticCritterCatcherShade");
// Dependencies CosmeticCritterCatcher, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterCatcherShade
class CORDL_TYPE CosmeticCritterCatcherShade : public ::GlobalNamespace::CosmeticCritterCatcher {
public:
// Declarations
 __declspec(property(get=get_LastTargetPosition, put=set_LastTargetPosition)) ::UnityEngine::Vector3  LastTargetPosition;

/// @brief Field <LastTargetPosition>k__BackingField, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get__LastTargetPosition_k__BackingField, put=__cordl_internal_set__LastTargetPosition_k__BackingField)) ::UnityEngine::Vector3  _LastTargetPosition_k__BackingField;

/// @brief Field catchOrigin, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchOrigin, put=__cordl_internal_set_catchOrigin)) ::UnityW<::UnityEngine::Transform>  catchOrigin;

/// @brief Field catchRadius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchRadius, put=__cordl_internal_set_catchRadius)) float_t  catchRadius;

/// @brief Field currentTarget, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTarget, put=__cordl_internal_set_currentTarget)) ::UnityW<::GlobalNamespace::CosmeticCritter>  currentTarget;

/// @brief Field heartbeatCooldown, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heartbeatCooldown, put=__cordl_internal_set_heartbeatCooldown)) float_t  heartbeatCooldown;

/// @brief Field maxHoldTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHoldTime, put=__cordl_internal_set_maxHoldTime)) float_t  maxHoldTime;

/// @brief Field minSecondsLockedToCatch, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSecondsLockedToCatch, put=__cordl_internal_set_minSecondsLockedToCatch)) float_t  minSecondsLockedToCatch;

/// @brief Field secondsToReveal, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsToReveal, put=__cordl_internal_set_secondsToReveal)) float_t  secondsToReveal;

/// @brief Field shadeRevealer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_shadeRevealer, put=__cordl_internal_set_shadeRevealer)) ::UnityW<::GlobalNamespace::ShadeRevealer>  shadeRevealer;

/// @brief Field targetHoldTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetHoldTime, put=__cordl_internal_set_targetHoldTime)) float_t  targetHoldTime;

/// @brief Field vacuumSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_vacuumSpeed, put=__cordl_internal_set_vacuumSpeed)) float_t  vacuumSpeed;

/// @brief Method Awake, addr 0x57f2b48, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateCallLimiter, addr 0x57f2468, size 0x60, virtual true, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* CreateCallLimiter() ;

/// @brief Method GetActionTimeFrac, addr 0x57f245c, size 0xc, virtual false, abstract: false, final false
inline float_t GetActionTimeFrac() ;

/// @brief Method GetLocalCatchAction, addr 0x57f24c8, size 0x220, virtual true, abstract: false, final false
inline ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter*  critter) ;

/// @brief Method LateUpdate, addr 0x57f2c28, size 0x348, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::CosmeticCritterCatcherShade* New_ctor() ;

/// @brief Method OnCatch, addr 0x57f28f0, size 0x1f0, virtual true, abstract: false, final false
inline void OnCatch(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

/// @brief Method OnDisable, addr 0x57f2fb8, size 0x34, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f2f84, size 0x34, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ValidateRemoteCatchAction, addr 0x57f2704, size 0x1ec, virtual true, abstract: false, final false
inline bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter*  critter, ::GlobalNamespace::CosmeticCritterAction  catchAction, double_t  serverTime) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LastTargetPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LastTargetPosition_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_catchOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_catchOrigin() ;

constexpr float_t const& __cordl_internal_get_catchRadius() const;

constexpr float_t& __cordl_internal_get_catchRadius() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritter> const& __cordl_internal_get_currentTarget() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritter>& __cordl_internal_get_currentTarget() ;

constexpr float_t const& __cordl_internal_get_heartbeatCooldown() const;

constexpr float_t& __cordl_internal_get_heartbeatCooldown() ;

constexpr float_t const& __cordl_internal_get_maxHoldTime() const;

constexpr float_t& __cordl_internal_get_maxHoldTime() ;

constexpr float_t const& __cordl_internal_get_minSecondsLockedToCatch() const;

constexpr float_t& __cordl_internal_get_minSecondsLockedToCatch() ;

constexpr float_t const& __cordl_internal_get_secondsToReveal() const;

constexpr float_t& __cordl_internal_get_secondsToReveal() ;

constexpr ::UnityW<::GlobalNamespace::ShadeRevealer> const& __cordl_internal_get_shadeRevealer() const;

constexpr ::UnityW<::GlobalNamespace::ShadeRevealer>& __cordl_internal_get_shadeRevealer() ;

constexpr float_t const& __cordl_internal_get_targetHoldTime() const;

constexpr float_t& __cordl_internal_get_targetHoldTime() ;

constexpr float_t const& __cordl_internal_get_vacuumSpeed() const;

constexpr float_t& __cordl_internal_get_vacuumSpeed() ;

constexpr void __cordl_internal_set__LastTargetPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_catchOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_catchRadius(float_t  value) ;

constexpr void __cordl_internal_set_currentTarget(::UnityW<::GlobalNamespace::CosmeticCritter>  value) ;

constexpr void __cordl_internal_set_heartbeatCooldown(float_t  value) ;

constexpr void __cordl_internal_set_maxHoldTime(float_t  value) ;

constexpr void __cordl_internal_set_minSecondsLockedToCatch(float_t  value) ;

constexpr void __cordl_internal_set_secondsToReveal(float_t  value) ;

constexpr void __cordl_internal_set_shadeRevealer(::UnityW<::GlobalNamespace::ShadeRevealer>  value) ;

constexpr void __cordl_internal_set_targetHoldTime(float_t  value) ;

constexpr void __cordl_internal_set_vacuumSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x57f2fec, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastTargetPosition, addr 0x57f2444, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastTargetPosition() ;

/// [CompilerGenerated]
/// @brief Method set_LastTargetPosition, addr 0x57f2450, size 0xc, virtual false, abstract: false, final false
inline void set_LastTargetPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterCatcherShade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcherShade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterCatcherShade(CosmeticCritterCatcherShade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterCatcherShade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterCatcherShade(CosmeticCritterCatcherShade const& ) = delete;

/// @brief Field HEARTBEAT_DELAY offset 0xffffffff size 0x4
static constexpr float_t  HEARTBEAT_DELAY{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{197};

/// [SerializeField]
/// @brief Field secondsToReveal, offset: 0x40, size: 0x4, def value: None
 float_t  ___secondsToReveal;

/// [SerializeField]
/// @brief Field minSecondsLockedToCatch, offset: 0x44, size: 0x4, def value: None
 float_t  ___minSecondsLockedToCatch;

/// [SerializeField]
/// @brief Field catchOrigin, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___catchOrigin;

/// [SerializeField]
/// @brief Field catchRadius, offset: 0x50, size: 0x4, def value: None
 float_t  ___catchRadius;

/// [SerializeField]
/// @brief Field vacuumSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___vacuumSpeed;

/// @brief Field shadeRevealer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ShadeRevealer>  ___shadeRevealer;

/// @brief Field currentTarget, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCritter>  ___currentTarget;

/// @brief Field targetHoldTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___targetHoldTime;

/// @brief Field maxHoldTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___maxHoldTime;

/// [CompilerGenerated]
/// @brief Field <LastTargetPosition>k__BackingField, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LastTargetPosition_k__BackingField;

/// @brief Field heartbeatCooldown, offset: 0x7c, size: 0x4, def value: None
 float_t  ___heartbeatCooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___secondsToReveal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___minSecondsLockedToCatch) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___catchOrigin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___catchRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___vacuumSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___shadeRevealer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___currentTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___targetHoldTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___maxHoldTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ____LastTargetPosition_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterCatcherShade, ___heartbeatCooldown) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterCatcherShade) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
