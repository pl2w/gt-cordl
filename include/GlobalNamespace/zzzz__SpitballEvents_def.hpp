#pragma once
// IWYU pragma private; include "GlobalNamespace/SpitballEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SubEmitterListener_def.hpp"
CORDL_MODULE_EXPORT(SpitballEvents)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SpitballEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpitballEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpitballEvents*, "", "SpitballEvents");
// Dependencies SubEmitterListener
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpitballEvents
class CORDL_TYPE SpitballEvents : public ::GlobalNamespace::SubEmitterListener {
public:
// Declarations
/// @brief Field _audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _sfxHit, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfxHit, put=__cordl_internal_set__sfxHit)) ::UnityW<::UnityEngine::AudioClip>  _sfxHit;

static inline ::GlobalNamespace::SpitballEvents* New_ctor() ;

/// @brief Method OnSubEmit, addr 0x578fa0c, size 0xb8, virtual true, abstract: false, final false
inline void OnSubEmit() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__sfxHit() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__sfxHit() ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__sfxHit(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x578fac4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpitballEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpitballEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpitballEvents(SpitballEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpitballEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpitballEvents(SpitballEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1444};

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _sfxHit, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____sfxHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpitballEvents, ____audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpitballEvents, ____sfxHit) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpitballEvents) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
