#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAudioManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerAudioManager)
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerAudioManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerAudioManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerAudioManager*, "", "PlayerAudioManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAudioManager
class CORDL_TYPE PlayerAudioManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field defaultSnapshot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSnapshot, put=__cordl_internal_set_defaultSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  defaultSnapshot;

/// @brief Field underwaterSnapshot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterSnapshot, put=__cordl_internal_set_underwaterSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  underwaterSnapshot;

static inline ::GlobalNamespace::PlayerAudioManager* New_ctor() ;

/// @brief Method SetMixerSnapshot, addr 0x596e620, size 0x18, virtual false, abstract: false, final false
inline void SetMixerSnapshot(::UnityEngine::Audio::AudioMixerSnapshot*  snapshot, float_t  transitionTime) ;

/// @brief Method UnsetMixerSnapshot, addr 0x596e638, size 0x18, virtual false, abstract: false, final false
inline void UnsetMixerSnapshot(float_t  transitionTime) ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_defaultSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_defaultSnapshot() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_underwaterSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_underwaterSnapshot() ;

constexpr void __cordl_internal_set_defaultSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

constexpr void __cordl_internal_set_underwaterSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

/// @brief Method .ctor, addr 0x596e650, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerAudioManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerAudioManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerAudioManager(PlayerAudioManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAudioManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerAudioManager(PlayerAudioManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2399};

/// @brief Field defaultSnapshot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___defaultSnapshot;

/// @brief Field underwaterSnapshot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___underwaterSnapshot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAudioManager, ___defaultSnapshot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioManager, ___underwaterSnapshot) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerAudioManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
