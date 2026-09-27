#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolFlash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolFlash_State_def.hpp"
#include "GlobalNamespace/zzzz__GRToolFlash_UpgradeTypes_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolFlash)
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
struct GRToolFlash_State;
}
namespace GlobalNamespace {
struct GRToolFlash_UpgradeTypes;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameHitter;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class GRToolFlash;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolFlash*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolFlash*, "", "GRToolFlash");
// Dependencies GRToolFlash::State, GRToolFlash::UpgradeTypes, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolFlash
class CORDL_TYPE GRToolFlash : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolFlash_State;

using UpgradeTypes = ::GlobalNamespace::GRToolFlash_UpgradeTypes;

/// @brief Field activatedLocally, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_activatedLocally, put=__cordl_internal_set_activatedLocally)) bool  activatedLocally;

/// @brief Field attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field chargeDuration, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeDuration, put=__cordl_internal_set_chargeDuration)) float_t  chargeDuration;

/// @brief Field chargeSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeSound, put=__cordl_internal_set_chargeSound)) ::UnityW<::UnityEngine::AudioClip>  chargeSound;

/// @brief Field chargeSoundVolume, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeSoundVolume, put=__cordl_internal_set_chargeSoundVolume)) float_t  chargeSoundVolume;

/// @brief Field cooldownDuration, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field cooldownMinimum, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownMinimum, put=__cordl_internal_set_cooldownMinimum)) float_t  cooldownMinimum;

/// @brief Field enemyLayerMask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_enemyLayerMask, put=__cordl_internal_set_enemyLayerMask)) ::UnityEngine::LayerMask  enemyLayerMask;

/// @brief Field flash, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_flash, put=__cordl_internal_set_flash)) ::UnityW<::UnityEngine::GameObject>  flash;

/// @brief Field flashDuration, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashDuration, put=__cordl_internal_set_flashDuration)) float_t  flashDuration;

/// @brief Field flashSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashSound, put=__cordl_internal_set_flashSound)) ::UnityW<::UnityEngine::AudioClip>  flashSound;

/// @brief Field flashSoundVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashSoundVolume, put=__cordl_internal_set_flashSoundVolume)) float_t  flashSoundVolume;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gameHitter, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameHitter, put=__cordl_internal_set_gameHitter)) ::UnityW<::GlobalNamespace::GameHitter>  gameHitter;

/// @brief Field item, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::UnityW<::GlobalNamespace::GameEntity>  item;

/// @brief Field shootFrom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootFrom, put=__cordl_internal_set_shootFrom)) ::UnityW<::UnityEngine::Transform>  shootFrom;

/// @brief Field state, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolFlash_State  state;

/// @brief Field stateTimeRemaining, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateTimeRemaining, put=__cordl_internal_set_stateTimeRemaining)) float_t  stateTimeRemaining;

/// @brief Field stunDuration, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_stunDuration, put=__cordl_internal_set_stunDuration)) float_t  stunDuration;

/// @brief Field tempHitResults, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempHitResults, put=__cordl_internal_set_tempHitResults)) ::ArrayW<::UnityEngine::RaycastHit>  tempHitResults;

/// @brief Field timeLastFlashed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastFlashed, put=__cordl_internal_set_timeLastFlashed)) float_t  timeLastFlashed;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgrade1FlashCone, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1FlashCone, put=__cordl_internal_set_upgrade1FlashCone)) ::UnityW<::UnityEngine::GameObject>  upgrade1FlashCone;

/// @brief Field upgrade1FlashSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1FlashSound, put=__cordl_internal_set_upgrade1FlashSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade1FlashSound;

/// @brief Field upgrade2FlashCone, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2FlashCone, put=__cordl_internal_set_upgrade2FlashCone)) ::UnityW<::UnityEngine::GameObject>  upgrade2FlashCone;

/// @brief Field upgrade2FlashSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2FlashSound, put=__cordl_internal_set_upgrade2FlashSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade2FlashSound;

/// @brief Field upgrade3FlashCone, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3FlashCone, put=__cordl_internal_set_upgrade3FlashCone)) ::UnityW<::UnityEngine::GameObject>  upgrade3FlashCone;

/// @brief Field upgrade3FlashSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3FlashSound, put=__cordl_internal_set_upgrade3FlashSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade3FlashSound;

/// @brief Field upgradesApplied, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradesApplied, put=__cordl_internal_set_upgradesApplied)) ::GlobalNamespace::GRToolFlash_UpgradeTypes  upgradesApplied;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Method Awake, addr 0x58bd1c4, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanChangeState, addr 0x58bd854, size 0x48, virtual false, abstract: false, final false
inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method GetDebugTextLines, addr 0x58bdee0, size 0x148, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method IsButtonHeld, addr 0x58bd748, size 0xd4, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeldLocal, addr 0x58bd494, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::GRToolFlash* New_ctor() ;

/// @brief Method OnEnable, addr 0x58bd224, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58bd48c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58bd2f4, size 0xd4, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58bd490, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnToolUpgraded, addr 0x58bd3c8, size 0xc4, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdate, addr 0x58bd50c, size 0x3c, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x58bd548, size 0x114, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58bd65c, size 0x9c, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayVibration, addr 0x58bddc8, size 0x118, virtual false, abstract: false, final false
inline void PlayVibration(float_t  strength, float_t  duration) ;

/// @brief Method SetState, addr 0x58bd25c, size 0x98, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolFlash_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58bd81c, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::GRToolFlash_State  newState) ;

/// @brief Method StartCharge, addr 0x58bd89c, size 0xf0, virtual false, abstract: false, final false
inline void StartCharge() ;

/// @brief Method StartFlash, addr 0x58bd98c, size 0x43c, virtual false, abstract: false, final false
inline void StartFlash() ;

/// @brief Method StopFlash, addr 0x58bd240, size 0x1c, virtual false, abstract: false, final false
inline void StopFlash() ;

/// @brief Method Update, addr 0x58bd6f8, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_activatedLocally() const;

constexpr bool& __cordl_internal_get_activatedLocally() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_chargeDuration() const;

constexpr float_t& __cordl_internal_get_chargeDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chargeSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chargeSound() ;

constexpr float_t const& __cordl_internal_get_chargeSoundVolume() const;

constexpr float_t& __cordl_internal_get_chargeSoundVolume() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr float_t const& __cordl_internal_get_cooldownMinimum() const;

constexpr float_t& __cordl_internal_get_cooldownMinimum() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_enemyLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_enemyLayerMask() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flash() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flash() ;

constexpr float_t const& __cordl_internal_get_flashDuration() const;

constexpr float_t& __cordl_internal_get_flashDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_flashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_flashSound() ;

constexpr float_t const& __cordl_internal_get_flashSoundVolume() const;

constexpr float_t& __cordl_internal_get_flashSoundVolume() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameHitter> const& __cordl_internal_get_gameHitter() const;

constexpr ::UnityW<::GlobalNamespace::GameHitter>& __cordl_internal_get_gameHitter() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_item() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_item() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shootFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shootFrom() ;

constexpr ::GlobalNamespace::GRToolFlash_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolFlash_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stateTimeRemaining() const;

constexpr float_t& __cordl_internal_get_stateTimeRemaining() ;

constexpr float_t const& __cordl_internal_get_stunDuration() const;

constexpr float_t& __cordl_internal_get_stunDuration() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_tempHitResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_tempHitResults() ;

constexpr float_t const& __cordl_internal_get_timeLastFlashed() const;

constexpr float_t& __cordl_internal_get_timeLastFlashed() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_upgrade1FlashCone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_upgrade1FlashCone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade1FlashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade1FlashSound() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_upgrade2FlashCone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_upgrade2FlashCone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade2FlashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade2FlashSound() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_upgrade3FlashCone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_upgrade3FlashCone() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade3FlashSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade3FlashSound() ;

constexpr ::GlobalNamespace::GRToolFlash_UpgradeTypes const& __cordl_internal_get_upgradesApplied() const;

constexpr ::GlobalNamespace::GRToolFlash_UpgradeTypes& __cordl_internal_get_upgradesApplied() ;

constexpr void __cordl_internal_set_activatedLocally(bool  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_chargeDuration(float_t  value) ;

constexpr void __cordl_internal_set_chargeSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_chargeSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_cooldownMinimum(float_t  value) ;

constexpr void __cordl_internal_set_enemyLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_flash(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_flashDuration(float_t  value) ;

constexpr void __cordl_internal_set_flashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_flashSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameHitter(::UnityW<::GlobalNamespace::GameHitter>  value) ;

constexpr void __cordl_internal_set_item(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolFlash_State  value) ;

constexpr void __cordl_internal_set_stateTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_stunDuration(float_t  value) ;

constexpr void __cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_timeLastFlashed(float_t  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgrade1FlashCone(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_upgrade1FlashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade2FlashCone(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_upgrade2FlashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade3FlashCone(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_upgrade3FlashSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgradesApplied(::GlobalNamespace::GRToolFlash_UpgradeTypes  value) ;

/// @brief Method .ctor, addr 0x58be028, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* i___GlobalNamespace__IGameEntityDebugComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolFlash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolFlash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolFlash(GRToolFlash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolFlash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolFlash(GRToolFlash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2067};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field flash, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___flash;

/// @brief Field shootFrom, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shootFrom;

/// @brief Field enemyLayerMask, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___enemyLayerMask;

/// @brief Field audioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field chargeSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chargeSound;

/// @brief Field chargeSoundVolume, offset: 0x60, size: 0x4, def value: None
 float_t  ___chargeSoundVolume;

/// @brief Field flashSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___flashSound;

/// @brief Field upgrade1FlashSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade1FlashSound;

/// @brief Field upgrade2FlashSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade2FlashSound;

/// @brief Field upgrade3FlashSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade3FlashSound;

/// @brief Field upgrade1FlashCone, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___upgrade1FlashCone;

/// @brief Field upgrade2FlashCone, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___upgrade2FlashCone;

/// @brief Field upgrade3FlashCone, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___upgrade3FlashCone;

/// @brief Field flashSoundVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___flashSoundVolume;

/// @brief Field stunDuration, offset: 0xa4, size: 0x4, def value: None
 float_t  ___stunDuration;

/// @brief Field upgradesApplied, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::GRToolFlash_UpgradeTypes  ___upgradesApplied;

/// @brief Field chargeDuration, offset: 0xac, size: 0x4, def value: None
 float_t  ___chargeDuration;

/// @brief Field flashDuration, offset: 0xb0, size: 0x4, def value: None
 float_t  ___flashDuration;

/// @brief Field cooldownDuration, offset: 0xb4, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// @brief Field timeLastFlashed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___timeLastFlashed;

/// @brief Field cooldownMinimum, offset: 0xbc, size: 0x4, def value: None
 float_t  ___cooldownMinimum;

/// @brief Field activatedLocally, offset: 0xc0, size: 0x1, def value: None
 bool  ___activatedLocally;

/// @brief Field item, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___item;

/// @brief Field gameHitter, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHitter>  ___gameHitter;

/// @brief Field state, offset: 0xd8, size: 0x4, def value: None
 ::GlobalNamespace::GRToolFlash_State  ___state;

/// @brief Field stateTimeRemaining, offset: 0xdc, size: 0x4, def value: None
 float_t  ___stateTimeRemaining;

/// @brief Field tempHitResults, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___tempHitResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___flash) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___shootFrom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___enemyLayerMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___audioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___chargeSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___chargeSoundVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___flashSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade1FlashSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade2FlashSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade3FlashSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade1FlashCone) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade2FlashCone) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgrade3FlashCone) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___flashSoundVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___stunDuration) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___upgradesApplied) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___chargeDuration) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___flashDuration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___cooldownDuration) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___timeLastFlashed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___cooldownMinimum) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___activatedLocally) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___item) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___gameHitter) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___state) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___stateTimeRemaining) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolFlash, ___tempHitResults) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolFlash) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
