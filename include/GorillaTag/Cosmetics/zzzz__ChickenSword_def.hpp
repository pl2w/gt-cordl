#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ChickenSword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ChickenSword_SwordState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChickenSword)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct ChickenSword_SwordState;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaTag::Cosmetics {
class CosmeticSwapper;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ChickenSword;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ChickenSword*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ChickenSword*, "GorillaTag.Cosmetics", "ChickenSword");
// Dependencies GorillaTag.Cosmetics.ChickenSword::SwordState, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ChickenSword
class CORDL_TYPE ChickenSword : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SwordState = ::GlobalNamespace::ChickenSword_SwordState;

/// @brief Field OnDeflatedLocal, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeflatedLocal, put=__cordl_internal_set_OnDeflatedLocal)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnDeflatedLocal;

/// @brief Field OnDeflatedShared, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeflatedShared, put=__cordl_internal_set_OnDeflatedShared)) ::UnityEngine::Events::UnityEvent*  OnDeflatedShared;

/// @brief Field OnHitTargetLocal, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitTargetLocal, put=__cordl_internal_set_OnHitTargetLocal)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnHitTargetLocal;

/// @brief Field OnHitTargetShared, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitTargetShared, put=__cordl_internal_set_OnHitTargetShared)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  OnHitTargetShared;

/// @brief Field OnReachedLastTransformationStepShared, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReachedLastTransformationStepShared, put=__cordl_internal_set_OnReachedLastTransformationStepShared)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  OnReachedLastTransformationStepShared;

/// @brief Field OnRechargedLocal, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRechargedLocal, put=__cordl_internal_set_OnRechargedLocal)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnRechargedLocal;

/// @brief Field OnRechargedShared, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRechargedShared, put=__cordl_internal_set_OnRechargedShared)) ::UnityEngine::Events::UnityEvent*  OnRechargedShared;

/// @brief Field _events, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field cosmeticSwapper, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticSwapper, put=__cordl_internal_set_cosmeticSwapper)) ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>  cosmeticSwapper;

/// @brief Field currentState, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::ChickenSword_SwordState  currentState;

/// @brief Field hitReceievd, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_hitReceievd, put=__cordl_internal_set_hitReceievd)) bool  hitReceievd;

/// @brief Field hitVelocityThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitVelocityThreshold, put=__cordl_internal_set_hitVelocityThreshold)) float_t  hitVelocityThreshold;

/// @brief Field lastHitTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitTime, put=__cordl_internal_set_lastHitTime)) float_t  lastHitTime;

/// @brief Field rechargeCooldown, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rechargeCooldown, put=__cordl_internal_set_rechargeCooldown)) float_t  rechargeCooldown;

/// @brief Field transferrableObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Field velocityTracker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityTracker, put=__cordl_internal_set_velocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Method Awake, addr 0x5d7fbe0, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::ChickenSword* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7fec0, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d7fbec, size 0x2d4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHitTargetSync, addr 0x5d80188, size 0x398, virtual false, abstract: false, final false
inline void OnHitTargetSync(::GlobalNamespace::VRRig*  playerRig) ;

/// @brief Method OnReachedLastTransformationStep, addr 0x5d80520, size 0x238, virtual false, abstract: false, final false
inline void OnReachedLastTransformationStep(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SwitchState, addr 0x5d80758, size 0x8, virtual false, abstract: false, final false
inline void SwitchState(::GlobalNamespace::ChickenSword_SwordState  newState) ;

/// @brief Method Update, addr 0x5d7fff8, size 0x190, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnDeflatedLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnDeflatedLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDeflatedShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDeflatedShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnHitTargetLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnHitTargetLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_OnHitTargetShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_OnHitTargetShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_OnReachedLastTransformationStepShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_OnReachedLastTransformationStepShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnRechargedLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnRechargedLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnRechargedShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnRechargedShared() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper> const& __cordl_internal_get_cosmeticSwapper() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>& __cordl_internal_get_cosmeticSwapper() ;

constexpr ::GlobalNamespace::ChickenSword_SwordState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::ChickenSword_SwordState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_hitReceievd() const;

constexpr bool& __cordl_internal_get_hitReceievd() ;

constexpr float_t const& __cordl_internal_get_hitVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_hitVelocityThreshold() ;

constexpr float_t const& __cordl_internal_get_lastHitTime() const;

constexpr float_t& __cordl_internal_get_lastHitTime() ;

constexpr float_t const& __cordl_internal_get_rechargeCooldown() const;

constexpr float_t& __cordl_internal_get_rechargeCooldown() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_velocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_velocityTracker() ;

constexpr void __cordl_internal_set_OnDeflatedLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnDeflatedShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnHitTargetLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnHitTargetShared(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_OnReachedLastTransformationStepShared(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_OnRechargedLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnRechargedShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_cosmeticSwapper(::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::ChickenSword_SwordState  value) ;

constexpr void __cordl_internal_set_hitReceievd(bool  value) ;

constexpr void __cordl_internal_set_hitVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastHitTime(float_t  value) ;

constexpr void __cordl_internal_set_rechargeCooldown(float_t  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

/// @brief Method .ctor, addr 0x5d80760, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChickenSword() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChickenSword", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChickenSword(ChickenSword && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChickenSword", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChickenSword(ChickenSword const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4877};

/// [SerializeField]
/// @brief Field rechargeCooldown, offset: 0x20, size: 0x4, def value: None
 float_t  ___rechargeCooldown;

/// [SerializeField]
/// @brief Field velocityTracker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___velocityTracker;

/// [SerializeField]
/// @brief Field hitVelocityThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___hitVelocityThreshold;

/// [SerializeField]
/// @brief Field transferrableObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// [SerializeField]
/// @brief Field cosmeticSwapper, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::CosmeticSwapper>  ___cosmeticSwapper;

/// [Space]
/// [Space]
/// @brief Field OnDeflatedShared, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDeflatedShared;

/// @brief Field OnDeflatedLocal, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnDeflatedLocal;

/// @brief Field OnRechargedShared, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnRechargedShared;

/// @brief Field OnRechargedLocal, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnRechargedLocal;

/// @brief Field OnHitTargetShared, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___OnHitTargetShared;

/// @brief Field OnHitTargetLocal, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnHitTargetLocal;

/// @brief Field OnReachedLastTransformationStepShared, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___OnReachedLastTransformationStepShared;

/// @brief Field lastHitTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___lastHitTime;

/// @brief Field currentState, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::ChickenSword_SwordState  ___currentState;

/// @brief Field hitReceievd, offset: 0x88, size: 0x1, def value: None
 bool  ___hitReceievd;

/// @brief Field _events, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field callLimiter, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___rechargeCooldown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___velocityTracker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___hitVelocityThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___transferrableObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___cosmeticSwapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnDeflatedShared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnDeflatedLocal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnRechargedShared) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnRechargedLocal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnHitTargetShared) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnHitTargetLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___OnReachedLastTransformationStepShared) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___lastHitTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___currentState) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___hitReceievd) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ____events) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChickenSword, ___callLimiter) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ChickenSword) == 0xa0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
