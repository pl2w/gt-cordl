#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderReplicatedTriggerEnter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderReplicatedTriggerEnter_FunctionalState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallMonkeTrigger_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderReplicatedTriggerEnter)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderReplicatedTriggerEnter_FunctionalState;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderReplicatedTriggerEnter;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter*, "GorillaTagScripts.Builder", "BuilderReplicatedTriggerEnter");
// Dependencies GorillaTagScripts.Builder.BuilderReplicatedTriggerEnter::FunctionalState, GorillaTagScripts.Builder.BuilderSmallHandTrigger, GorillaTagScripts.Builder.BuilderSmallMonkeTrigger, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderReplicatedTriggerEnter
class CORDL_TYPE BuilderReplicatedTriggerEnter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FunctionalState = ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState;

/// @brief Field OnTriggered, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTriggered, put=__cordl_internal_set_OnTriggered)) ::UnityEngine::Events::UnityEvent*  OnTriggered;

/// @brief Field activateSoundBank, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_activateSoundBank, put=__cordl_internal_set_activateSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  activateSoundBank;

/// @brief Field animationOnTrigger, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationOnTrigger, put=__cordl_internal_set_animationOnTrigger)) ::UnityW<::UnityEngine::Animation>  animationOnTrigger;

/// @brief Field bodyTriggers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyTriggers, put=__cordl_internal_set_bodyTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  bodyTriggers;

/// @brief Field colliders, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field currentState, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  currentState;

/// @brief Field handTriggers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTriggers, put=__cordl_internal_set_handTriggers)) ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  handTriggers;

/// @brief Field isPieceActive, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPieceActive, put=__cordl_internal_set_isPieceActive)) bool  isPieceActive;

/// @brief Field knockbackDirection, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_knockbackDirection, put=__cordl_internal_set_knockbackDirection)) ::UnityW<::UnityEngine::Transform>  knockbackDirection;

/// @brief Field knockbackOnTriggerEnter, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_knockbackOnTriggerEnter, put=__cordl_internal_set_knockbackOnTriggerEnter)) bool  knockbackOnTriggerEnter;

/// @brief Field knockbackVelocity, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackVelocity, put=__cordl_internal_set_knockbackVelocity)) float_t  knockbackVelocity;

/// @brief Field lastTriggerTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggerTime, put=__cordl_internal_set_lastTriggerTime)) float_t  lastTriggerTime;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field triggerCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerCooldown, put=__cordl_internal_set_triggerCooldown)) float_t  triggerCooldown;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c2f248, size 0x324, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanTrigger, addr 0x5c2fc28, size 0x4c, virtual false, abstract: false, final false
inline bool CanTrigger() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c302b8, size 0x100, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c30188, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter* New_ctor() ;

/// @brief Method OnBodyTriggerEntered, addr 0x5c2fc74, size 0x170, virtual false, abstract: false, final false
inline void OnBodyTriggerEntered(int32_t  playerNumber) ;

/// @brief Method OnDestroy, addr 0x5c2f56c, size 0x170, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHandTriggerEntered, addr 0x5c2fbbc, size 0x6c, virtual false, abstract: false, final false
inline void OnHandTriggerEntered() ;

/// @brief Method OnPieceActivate, addr 0x5c2fdf4, size 0x13c, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c2fde4, size 0x8, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c2ff30, size 0x1e4, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c2fdec, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c2fdf0, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c30114, size 0x74, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c30198, size 0x120, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method PlayTriggerEffects, addr 0x5c2f6dc, size 0x4e0, virtual false, abstract: false, final false
inline void PlayTriggerEffects(::GlobalNamespace::NetPlayer*  target) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTriggered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTriggered() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_activateSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_activateSoundBank() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animationOnTrigger() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animationOnTrigger() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>> const& __cordl_internal_get_bodyTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>& __cordl_internal_get_bodyTriggers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState& __cordl_internal_get_currentState() ;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>> const& __cordl_internal_get_handTriggers() const;

constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>& __cordl_internal_get_handTriggers() ;

constexpr bool const& __cordl_internal_get_isPieceActive() const;

constexpr bool& __cordl_internal_get_isPieceActive() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_knockbackDirection() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_knockbackDirection() ;

constexpr bool const& __cordl_internal_get_knockbackOnTriggerEnter() const;

constexpr bool& __cordl_internal_get_knockbackOnTriggerEnter() ;

constexpr float_t const& __cordl_internal_get_knockbackVelocity() const;

constexpr float_t& __cordl_internal_get_knockbackVelocity() ;

constexpr float_t const& __cordl_internal_get_lastTriggerTime() const;

constexpr float_t& __cordl_internal_get_lastTriggerTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr float_t const& __cordl_internal_get_triggerCooldown() const;

constexpr float_t& __cordl_internal_get_triggerCooldown() ;

constexpr void __cordl_internal_set_OnTriggered(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_activateSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_animationOnTrigger(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_bodyTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  value) ;

constexpr void __cordl_internal_set_handTriggers(::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  value) ;

constexpr void __cordl_internal_set_isPieceActive(bool  value) ;

constexpr void __cordl_internal_set_knockbackDirection(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_knockbackOnTriggerEnter(bool  value) ;

constexpr void __cordl_internal_set_knockbackVelocity(float_t  value) ;

constexpr void __cordl_internal_set_lastTriggerTime(float_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_triggerCooldown(float_t  value) ;

/// @brief Method .ctor, addr 0x5c303b8, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderReplicatedTriggerEnter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderReplicatedTriggerEnter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderReplicatedTriggerEnter(BuilderReplicatedTriggerEnter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderReplicatedTriggerEnter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderReplicatedTriggerEnter(BuilderReplicatedTriggerEnter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4171};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [Tooltip("How long in seconds to wait between trigger events")]
/// [SerializeField]
/// @brief Field triggerCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ___triggerCooldown;

/// [SerializeField]
/// @brief Field handTriggers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>>  ___handTriggers;

/// [SerializeField]
/// @brief Field bodyTriggers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>>  ___bodyTriggers;

/// [Tooltip("Optional Animation to play when triggered")]
/// [SerializeField]
/// @brief Field animationOnTrigger, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animationOnTrigger;

/// [Tooltip("Optional Sound to play when triggered")]
/// [SerializeField]
/// @brief Field activateSoundBank, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___activateSoundBank;

/// [Tooltip("Knockback the triggering player?")]
/// [SerializeField]
/// @brief Field knockbackOnTriggerEnter, offset: 0x50, size: 0x1, def value: None
 bool  ___knockbackOnTriggerEnter;

/// [SerializeField]
/// @brief Field knockbackVelocity, offset: 0x54, size: 0x4, def value: None
 float_t  ___knockbackVelocity;

/// [Tooltip("uses Forward of the transform provided")]
/// [SerializeField]
/// @brief Field knockbackDirection, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___knockbackDirection;

/// @brief Field colliders, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field isPieceActive, offset: 0x68, size: 0x1, def value: None
 bool  ___isPieceActive;

/// @brief Field lastTriggerTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lastTriggerTime;

/// @brief Field currentState, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::BuilderReplicatedTriggerEnter_FunctionalState  ___currentState;

/// @brief Field OnTriggered, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTriggered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___triggerCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___handTriggers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___bodyTriggers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___animationOnTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___activateSoundBank) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___knockbackOnTriggerEnter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___knockbackVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___knockbackDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___colliders) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___isPieceActive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___lastTriggerTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___currentState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter, ___OnTriggered) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderReplicatedTriggerEnter) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
