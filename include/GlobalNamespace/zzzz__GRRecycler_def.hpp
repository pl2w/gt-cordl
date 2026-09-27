#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRecycler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRRecycler)
namespace GlobalNamespace {
class GRRecyclerScanner;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GRRecycler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRRecycler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRRecycler*, "", "GRRecycler");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRRecycler
class CORDL_TYPE GRRecycler : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field anim, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field audioSource, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field closeDuration, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeDuration, put=__cordl_internal_set_closeDuration)) float_t  closeDuration;

/// @brief Field closeEffects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeEffects, put=__cordl_internal_set_closeEffects)) ::UnityW<::UnityEngine::ParticleSystem>  closeEffects;

/// @brief Field closed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_closed, put=__cordl_internal_set_closed)) bool  closed;

/// @brief Field gameEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field openEffects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_openEffects, put=__cordl_internal_set_openEffects)) ::UnityW<::UnityEngine::ParticleSystem>  openEffects;

/// @brief Field playedAudio, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_playedAudio, put=__cordl_internal_set_playedAudio)) bool  playedAudio;

/// @brief Field reactor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field recyclerRunningAudio, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_recyclerRunningAudio, put=__cordl_internal_set_recyclerRunningAudio)) ::UnityW<::UnityEngine::AudioClip>  recyclerRunningAudio;

/// @brief Field recyclerRunningAudioVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_recyclerRunningAudioVolume, put=__cordl_internal_set_recyclerRunningAudioVolume)) float_t  recyclerRunningAudioVolume;

/// @brief Field scanner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanner, put=__cordl_internal_set_scanner)) ::UnityW<::GlobalNamespace::GRRecyclerScanner>  scanner;

/// @brief Field timeRemaining, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeRemaining, put=__cordl_internal_set_timeRemaining)) float_t  timeRemaining;

/// @brief Method GetRecycleValue, addr 0x58a7ad0, size 0x24, virtual false, abstract: false, final false
inline int32_t GetRecycleValue(::GlobalNamespace::GRTool_GRToolType  type) ;

/// @brief Method Init, addr 0x58a7ac8, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRRecycler* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x58a7f54, size 0x714, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method RecycleItem, addr 0x58a7e40, size 0x114, virtual false, abstract: false, final false
inline void RecycleItem() ;

/// @brief Method ScanItem, addr 0x58a7af4, size 0x18, virtual false, abstract: false, final false
inline void ScanItem(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method Tick, addr 0x58a7960, size 0x168, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_closeDuration() const;

constexpr float_t& __cordl_internal_get_closeDuration() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_closeEffects() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_closeEffects() ;

constexpr bool const& __cordl_internal_get_closed() const;

constexpr bool& __cordl_internal_get_closed() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_openEffects() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_openEffects() ;

constexpr bool const& __cordl_internal_get_playedAudio() const;

constexpr bool& __cordl_internal_get_playedAudio() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_recyclerRunningAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_recyclerRunningAudio() ;

constexpr float_t const& __cordl_internal_get_recyclerRunningAudioVolume() const;

constexpr float_t& __cordl_internal_get_recyclerRunningAudioVolume() ;

constexpr ::UnityW<::GlobalNamespace::GRRecyclerScanner> const& __cordl_internal_get_scanner() const;

constexpr ::UnityW<::GlobalNamespace::GRRecyclerScanner>& __cordl_internal_get_scanner() ;

constexpr float_t const& __cordl_internal_get_timeRemaining() const;

constexpr float_t& __cordl_internal_get_timeRemaining() ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_closeDuration(float_t  value) ;

constexpr void __cordl_internal_set_closeEffects(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_closed(bool  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_openEffects(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_playedAudio(bool  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_recyclerRunningAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_recyclerRunningAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set_scanner(::UnityW<::GlobalNamespace::GRRecyclerScanner>  value) ;

constexpr void __cordl_internal_set_timeRemaining(float_t  value) ;

/// @brief Method .ctor, addr 0x58a8668, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRRecycler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRRecycler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRRecycler(GRRecycler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRRecycler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRRecycler(GRRecycler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2016};

/// @brief Field gameEntity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field closeEffects, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___closeEffects;

/// @brief Field openEffects, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___openEffects;

/// @brief Field reactor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field scanner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRRecyclerScanner>  ___scanner;

/// @brief Field anim, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field closeDuration, offset: 0x58, size: 0x4, def value: None
 float_t  ___closeDuration;

/// @brief Field timeRemaining, offset: 0x5c, size: 0x4, def value: None
 float_t  ___timeRemaining;

/// @brief Field closed, offset: 0x60, size: 0x1, def value: None
 bool  ___closed;

/// @brief Field playedAudio, offset: 0x61, size: 0x1, def value: None
 bool  ___playedAudio;

/// @brief Field audioSource, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field recyclerRunningAudio, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___recyclerRunningAudio;

/// @brief Field recyclerRunningAudioVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ___recyclerRunningAudioVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRRecycler, ___gameEntity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___closeEffects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___openEffects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___reactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___scanner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___anim) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___closeDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___timeRemaining) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___closed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___playedAudio) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___audioSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___recyclerRunningAudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRecycler, ___recyclerRunningAudioVolume) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRRecycler) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
