#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolRevive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolRevive_State_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRToolRevive)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
struct GRToolRevive_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolRevive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolRevive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolRevive*, "", "GRToolRevive");
// [RequireComponent(typeof(GameEntity))]
// Dependencies GRToolRevive::State, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolRevive
class CORDL_TYPE GRToolRevive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolRevive_State;

/// @brief Field audioSource, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field onHaptic, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHaptic, put=__cordl_internal_set_onHaptic)) ::GlobalNamespace::AbilityHaptic*  onHaptic;

/// @brief Field playerLayerMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerLayerMask, put=__cordl_internal_set_playerLayerMask)) ::UnityEngine::LayerMask  playerLayerMask;

/// @brief Field reviveDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reviveDistance, put=__cordl_internal_set_reviveDistance)) float_t  reviveDistance;

/// @brief Field reviveDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_reviveDuration, put=__cordl_internal_set_reviveDuration)) float_t  reviveDuration;

/// @brief Field reviveFx, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveFx, put=__cordl_internal_set_reviveFx)) ::UnityW<::UnityEngine::GameObject>  reviveFx;

/// @brief Field reviveSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveSound, put=__cordl_internal_set_reviveSound)) ::UnityW<::UnityEngine::AudioClip>  reviveSound;

/// @brief Field reviveSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_reviveSoundVolume, put=__cordl_internal_set_reviveSoundVolume)) float_t  reviveSoundVolume;

/// @brief Field shootFrom, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootFrom, put=__cordl_internal_set_shootFrom)) ::UnityW<::UnityEngine::Transform>  shootFrom;

/// @brief Field state, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolRevive_State  state;

/// @brief Field stateTimeRemaining, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateTimeRemaining, put=__cordl_internal_set_stateTimeRemaining)) float_t  stateTimeRemaining;

/// @brief Field tempHitResults, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempHitResults, put=__cordl_internal_set_tempHitResults)) ::ArrayW<::UnityEngine::RaycastHit>  tempHitResults;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Method Awake, addr 0x58c6614, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IsButtonHeld, addr 0x58c6774, size 0xdc, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

static inline ::GlobalNamespace::GRToolRevive* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58c6668, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x58c661c, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpdateAuthority, addr 0x58c66c0, size 0x8c, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58c674c, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetState, addr 0x58c6888, size 0x60, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolRevive_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58c6850, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::GRToolRevive_State  newState) ;

/// @brief Method StartRevive, addr 0x58c68e8, size 0x358, virtual false, abstract: false, final false
inline void StartRevive() ;

/// @brief Method StopRevive, addr 0x58c6634, size 0x34, virtual false, abstract: false, final false
inline void StopRevive() ;

/// @brief Method Update, addr 0x58c666c, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_onHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_onHaptic() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_playerLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_playerLayerMask() ;

constexpr float_t const& __cordl_internal_get_reviveDistance() const;

constexpr float_t& __cordl_internal_get_reviveDistance() ;

constexpr float_t const& __cordl_internal_get_reviveDuration() const;

constexpr float_t& __cordl_internal_get_reviveDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_reviveFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_reviveFx() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_reviveSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_reviveSound() ;

constexpr float_t const& __cordl_internal_get_reviveSoundVolume() const;

constexpr float_t& __cordl_internal_get_reviveSoundVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shootFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shootFrom() ;

constexpr ::GlobalNamespace::GRToolRevive_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolRevive_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stateTimeRemaining() const;

constexpr float_t& __cordl_internal_get_stateTimeRemaining() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_tempHitResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_tempHitResults() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_playerLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_reviveDistance(float_t  value) ;

constexpr void __cordl_internal_set_reviveDuration(float_t  value) ;

constexpr void __cordl_internal_set_reviveFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reviveSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_reviveSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolRevive_State  value) ;

constexpr void __cordl_internal_set_stateTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

/// @brief Method .ctor, addr 0x58c6c40, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolRevive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolRevive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolRevive(GRToolRevive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolRevive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolRevive(GRToolRevive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2081};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// [SerializeField]
/// @brief Field shootFrom, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shootFrom;

/// [SerializeField]
/// @brief Field playerLayerMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___playerLayerMask;

/// [SerializeField]
/// @brief Field reviveDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___reviveDistance;

/// [SerializeField]
/// @brief Field reviveFx, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___reviveFx;

/// [SerializeField]
/// @brief Field reviveSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___reviveSoundVolume;

/// [SerializeField]
/// @brief Field reviveSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___reviveSound;

/// [SerializeField]
/// @brief Field reviveDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___reviveDuration;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Header("Haptic")]
/// @brief Field onHaptic, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___onHaptic;

/// @brief Field state, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::GRToolRevive_State  ___state;

/// @brief Field stateTimeRemaining, offset: 0x74, size: 0x4, def value: None
 float_t  ___stateTimeRemaining;

/// @brief Field tempHitResults, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___tempHitResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___shootFrom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___playerLayerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___reviveDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___reviveFx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___reviveSoundVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___reviveSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___reviveDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___audioSource) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___onHaptic) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___state) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___stateTimeRemaining) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolRevive, ___tempHitResults) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolRevive) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
