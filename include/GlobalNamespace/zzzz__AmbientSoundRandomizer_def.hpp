#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbientSoundRandomizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AmbientSoundRandomizer)
// Forward declare root types
namespace GlobalNamespace {
class AmbientSoundRandomizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbientSoundRandomizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbientSoundRandomizer*, "", "AmbientSoundRandomizer");
// Dependencies UnityEngine.AudioClip, UnityEngine.AudioSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbientSoundRandomizer
class CORDL_TYPE AmbientSoundRandomizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioSources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSources, put=__cordl_internal_set_audioSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSources;

/// @brief Field baseTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseTime, put=__cordl_internal_set_baseTime)) float_t  baseTime;

/// @brief Field randomModifier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomModifier, put=__cordl_internal_set_randomModifier)) float_t  randomModifier;

/// @brief Field timer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) float_t  timer;

/// @brief Field timerTarget, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timerTarget, put=__cordl_internal_set_timerTarget)) float_t  timerTarget;

/// @brief Method Awake, addr 0x5ae0c04, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Button_Cache, addr 0x5ae0bac, size 0x58, virtual false, abstract: false, final false
inline void Button_Cache() ;

static inline ::GlobalNamespace::AmbientSoundRandomizer* New_ctor() ;

/// @brief Method SetTarget, addr 0x5ae0c38, size 0x34, virtual false, abstract: false, final false
inline void SetTarget() ;

/// @brief Method Update, addr 0x5ae0c6c, size 0x10c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_audioSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_audioSources() ;

constexpr float_t const& __cordl_internal_get_baseTime() const;

constexpr float_t& __cordl_internal_get_baseTime() ;

constexpr float_t const& __cordl_internal_get_randomModifier() const;

constexpr float_t& __cordl_internal_get_randomModifier() ;

constexpr float_t const& __cordl_internal_get_timer() const;

constexpr float_t& __cordl_internal_get_timer() ;

constexpr float_t const& __cordl_internal_get_timerTarget() const;

constexpr float_t& __cordl_internal_get_timerTarget() ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_baseTime(float_t  value) ;

constexpr void __cordl_internal_set_randomModifier(float_t  value) ;

constexpr void __cordl_internal_set_timer(float_t  value) ;

constexpr void __cordl_internal_set_timerTarget(float_t  value) ;

/// @brief Method .ctor, addr 0x5ae0d78, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbientSoundRandomizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbientSoundRandomizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientSoundRandomizer(AmbientSoundRandomizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientSoundRandomizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientSoundRandomizer(AmbientSoundRandomizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3453};

/// [SerializeField]
/// @brief Field audioSources, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___audioSources;

/// [SerializeField]
/// @brief Field audioClips, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

/// [SerializeField]
/// @brief Field baseTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___baseTime;

/// [SerializeField]
/// @brief Field randomModifier, offset: 0x34, size: 0x4, def value: None
 float_t  ___randomModifier;

/// @brief Field timer, offset: 0x38, size: 0x4, def value: None
 float_t  ___timer;

/// @brief Field timerTarget, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timerTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___audioSources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___audioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___baseTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___randomModifier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___timer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbientSoundRandomizer, ___timerTarget) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbientSoundRandomizer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
