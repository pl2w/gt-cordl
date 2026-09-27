#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedReturn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityDelayedReturn_Options_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityDelayedReturn)
namespace GlobalNamespace {
struct GameEntityDelayedReturn_BeepPhase;
}
namespace GlobalNamespace {
struct GameEntityDelayedReturn_Options;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEntityDelayedReturn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEntityDelayedReturn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityDelayedReturn*, "", "GameEntityDelayedReturn");
// Dependencies GameEntityDelayedReturn::Options, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityDelayedReturn
class CORDL_TYPE GameEntityDelayedReturn : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BeepPhase = ::GlobalNamespace::GameEntityDelayedReturn_BeepPhase;

using Options = ::GlobalNamespace::GameEntityDelayedReturn_Options;

/// @brief Field _callGenerationId, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__callGenerationId, put=__cordl_internal_set__callGenerationId)) int32_t  _callGenerationId;

/// @brief Field _delayedDisappearAudioIndex, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedDisappearAudioIndex, put=__cordl_internal_set__delayedDisappearAudioIndex)) int32_t  _delayedDisappearAudioIndex;

/// @brief Field _delayedDisappearPoolIndex, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedDisappearPoolIndex, put=__cordl_internal_set__delayedDisappearPoolIndex)) int32_t  _delayedDisappearPoolIndex;

/// @brief Field _timerRunning, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__timerRunning, put=__cordl_internal_set__timerRunning)) bool  _timerRunning;

/// @brief Field forceKinematicOnReset, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceKinematicOnReset, put=__cordl_internal_set_forceKinematicOnReset)) bool  forceKinematicOnReset;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field initialIsKinematic, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialIsKinematic, put=__cordl_internal_set_initialIsKinematic)) bool  initialIsKinematic;

/// @brief Field initialPosition, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialPosition, put=__cordl_internal_set_initialPosition)) ::UnityEngine::Vector3  initialPosition;

/// @brief Field initialRotation, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field initialScale, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialScale, put=__cordl_internal_set_initialScale)) ::UnityEngine::Vector3  initialScale;

/// @brief Field initialized, offset 0xad, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field m_options, offset 0x28, size 0x50 
 __declspec(property(get=__cordl_internal_get_m_options, put=__cordl_internal_set_m_options)) ::GlobalNamespace::GameEntityDelayedReturn_Options  m_options;

/// @brief Field resetTarget, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetTarget, put=__cordl_internal_set_resetTarget)) ::UnityW<::UnityEngine::Transform>  resetTarget;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method CancelDelayedFx, addr 0x5815830, size 0xac, virtual false, abstract: false, final false
inline void CancelDelayedFx() ;

/// @brief Method CancelTimer, addr 0x5815770, size 0x74, virtual false, abstract: false, final false
inline void CancelTimer() ;

/// @brief Method Configure, addr 0x5815f98, size 0x24, virtual false, abstract: false, final false
inline void Configure(::GlobalNamespace::GameEntityDelayedReturn_Options  options) ;

/// @brief Method Disappear, addr 0x5815b94, size 0x2c, virtual false, abstract: false, final false
inline void Disappear() ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x5815904, size 0x290, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

/// @brief Method IsCurrentlyInteracting, addr 0x5815034, size 0x9c, virtual false, abstract: false, final false
inline bool IsCurrentlyInteracting() ;

static inline ::GlobalNamespace::GameEntityDelayedReturn* New_ctor() ;

/// @brief Method OnDestroy, addr 0x581582c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5815418, size 0x358, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5814c04, size 0x430, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58157e4, size 0x24, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnInteractionEnded, addr 0x58158e0, size 0x24, virtual false, abstract: false, final false
inline void OnInteractionEnded() ;

/// @brief Method OnInteractionStarted, addr 0x58158dc, size 0x4, virtual false, abstract: false, final false
inline void OnInteractionStarted() ;

/// @brief Method Reappear, addr 0x5815bc0, size 0x3b0, virtual false, abstract: false, final false
inline void Reappear() ;

/// @brief Method RestartTimer, addr 0x5815808, size 0x24, virtual false, abstract: false, final false
inline void RestartTimer() ;

/// @brief Method ReturnNow, addr 0x5815f70, size 0x20, virtual false, abstract: false, final false
inline void ReturnNow() ;

/// @brief Method SetResetTarget, addr 0x5815f90, size 0x8, virtual false, abstract: false, final false
inline void SetResetTarget(::UnityEngine::Transform*  target) ;

/// @brief Method StartTimer, addr 0x58150d0, size 0x348, virtual false, abstract: false, final false
inline void StartTimer() ;

constexpr int32_t const& __cordl_internal_get__callGenerationId() const;

constexpr int32_t& __cordl_internal_get__callGenerationId() ;

constexpr int32_t const& __cordl_internal_get__delayedDisappearAudioIndex() const;

constexpr int32_t& __cordl_internal_get__delayedDisappearAudioIndex() ;

constexpr int32_t const& __cordl_internal_get__delayedDisappearPoolIndex() const;

constexpr int32_t& __cordl_internal_get__delayedDisappearPoolIndex() ;

constexpr bool const& __cordl_internal_get__timerRunning() const;

constexpr bool& __cordl_internal_get__timerRunning() ;

constexpr bool const& __cordl_internal_get_forceKinematicOnReset() const;

constexpr bool& __cordl_internal_get_forceKinematicOnReset() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr bool const& __cordl_internal_get_initialIsKinematic() const;

constexpr bool& __cordl_internal_get_initialIsKinematic() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialScale() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options const& __cordl_internal_get_m_options() const;

constexpr ::GlobalNamespace::GameEntityDelayedReturn_Options& __cordl_internal_get_m_options() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_resetTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_resetTarget() ;

constexpr void __cordl_internal_set__callGenerationId(int32_t  value) ;

constexpr void __cordl_internal_set__delayedDisappearAudioIndex(int32_t  value) ;

constexpr void __cordl_internal_set__delayedDisappearPoolIndex(int32_t  value) ;

constexpr void __cordl_internal_set__timerRunning(bool  value) ;

constexpr void __cordl_internal_set_forceKinematicOnReset(bool  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_initialIsKinematic(bool  value) ;

constexpr void __cordl_internal_set_initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_m_options(::GlobalNamespace::GameEntityDelayedReturn_Options  value) ;

constexpr void __cordl_internal_set_resetTarget(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5815fbc, size 0x300, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityDelayedReturn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityDelayedReturn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityDelayedReturn(GameEntityDelayedReturn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityDelayedReturn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityDelayedReturn(GameEntityDelayedReturn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1740};

/// @brief Field k_actionBeep offset 0xffffffff size 0x4
static constexpr int32_t  k_actionBeep{static_cast<int32_t>(0x0)};

/// @brief Field k_actionBits offset 0xffffffff size 0x4
static constexpr int32_t  k_actionBits{static_cast<int32_t>(0x2)};

/// @brief Field k_actionDisappear offset 0xffffffff size 0x4
static constexpr int32_t  k_actionDisappear{static_cast<int32_t>(0x1)};

/// @brief Field k_actionMask offset 0xffffffff size 0x4
static constexpr int32_t  k_actionMask{static_cast<int32_t>(0x3)};

/// @brief Field k_actionReappear offset 0xffffffff size 0x4
static constexpr int32_t  k_actionReappear{static_cast<int32_t>(0x2)};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field m_options, offset: 0x28, size: 0x50, def value: None
 ::GlobalNamespace::GameEntityDelayedReturn_Options  ___m_options;

/// [Tooltip("If set, the entity teleports here instead of its initial position.")]
/// @brief Field resetTarget, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___resetTarget;

/// [Tooltip("If true, the Rigidbody is forced kinematic after return regardless of its initial state.")]
/// @brief Field forceKinematicOnReset, offset: 0x80, size: 0x1, def value: None
 bool  ___forceKinematicOnReset;

/// @brief Field initialPosition, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialPosition;

/// @brief Field initialRotation, offset: 0x90, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

/// @brief Field initialScale, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialScale;

/// @brief Field initialIsKinematic, offset: 0xac, size: 0x1, def value: None
 bool  ___initialIsKinematic;

/// @brief Field initialized, offset: 0xad, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field _callGenerationId, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____callGenerationId;

/// @brief Field _delayedDisappearAudioIndex, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____delayedDisappearAudioIndex;

/// @brief Field _delayedDisappearPoolIndex, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____delayedDisappearPoolIndex;

/// @brief Field _timerRunning, offset: 0xbc, size: 0x1, def value: None
 bool  ____timerRunning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___m_options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___resetTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___forceKinematicOnReset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___initialPosition) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___initialRotation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___initialScale) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___initialIsKinematic) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ___initialized) == 0xad, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ____callGenerationId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ____delayedDisappearAudioIndex) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ____delayedDisappearPoolIndex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn, ____timerRunning) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityDelayedReturn) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
