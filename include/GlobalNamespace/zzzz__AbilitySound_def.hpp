#pragma once
// IWYU pragma private; include "GlobalNamespace/AbilitySound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AbilitySound_SoundSelectMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AbilitySound)
namespace GlobalNamespace {
struct AbilitySound_SoundSelectMode;
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
// Forward declare root types
namespace GlobalNamespace {
class AbilitySound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AbilitySound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AbilitySound*, "", "AbilitySound");
// Dependencies AbilitySound::SoundSelectMode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AbilitySound
class CORDL_TYPE AbilitySound : public ::System::Object {
public:
// Declarations
using SoundSelectMode = ::GlobalNamespace::AbilitySound_SoundSelectMode;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSound, put=__cordl_internal_set_currentSound)) ::UnityW<::UnityEngine::AudioClip>  currentSound;

/// @brief Field delay, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field loop, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) bool  loop;

/// @brief Field nextSound, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSound, put=__cordl_internal_set_nextSound)) int32_t  nextSound;

/// @brief Field pitch, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field soundSelectMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundSelectMode, put=__cordl_internal_set_soundSelectMode)) ::GlobalNamespace::AbilitySound_SoundSelectMode  soundSelectMode;

/// @brief Field sounds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sounds, put=__cordl_internal_set_sounds)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  sounds;

/// @brief Field usedAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedAudioSource, put=__cordl_internal_set_usedAudioSource)) ::UnityW<::UnityEngine::AudioSource>  usedAudioSource;

/// @brief Field volume, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_volume, put=__cordl_internal_set_volume)) float_t  volume;

/// @brief Method IsValid, addr 0x58663ec, size 0x54, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::GlobalNamespace::AbilitySound* New_ctor() ;

/// @brief Method Play, addr 0x58664cc, size 0x1dc, virtual false, abstract: false, final false
inline void Play(::UnityEngine::AudioSource*  audioSourceIn) ;

/// @brief Method Stop, addr 0x58666a8, size 0xf4, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method UpdateNextSound, addr 0x5866440, size 0x8c, virtual false, abstract: false, final false
inline void UpdateNextSound() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_currentSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_currentSound() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr bool const& __cordl_internal_get_loop() const;

constexpr bool& __cordl_internal_get_loop() ;

constexpr int32_t const& __cordl_internal_get_nextSound() const;

constexpr int32_t& __cordl_internal_get_nextSound() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode const& __cordl_internal_get_soundSelectMode() const;

constexpr ::GlobalNamespace::AbilitySound_SoundSelectMode& __cordl_internal_get_soundSelectMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_sounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_sounds() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_usedAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_usedAudioSource() ;

constexpr float_t const& __cordl_internal_get_volume() const;

constexpr float_t& __cordl_internal_get_volume() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_loop(bool  value) ;

constexpr void __cordl_internal_set_nextSound(int32_t  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_soundSelectMode(::GlobalNamespace::AbilitySound_SoundSelectMode  value) ;

constexpr void __cordl_internal_set_sounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_usedAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_volume(float_t  value) ;

/// @brief Method .ctor, addr 0x586679c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbilitySound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbilitySound", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AbilitySound(AbilitySound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbilitySound", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbilitySound(AbilitySound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1842};

/// @brief Field volume, offset: 0x10, size: 0x4, def value: None
 float_t  ___volume;

/// @brief Field pitch, offset: 0x14, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field loop, offset: 0x18, size: 0x1, def value: None
 bool  ___loop;

/// @brief Field delay, offset: 0x1c, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field sounds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___sounds;

/// @brief Field currentSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___currentSound;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field usedAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___usedAudioSource;

/// @brief Field nextSound, offset: 0x40, size: 0x4, def value: None
 int32_t  ___nextSound;

/// @brief Field soundSelectMode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::AbilitySound_SoundSelectMode  ___soundSelectMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AbilitySound, ___volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___pitch) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___loop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___delay) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___sounds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___currentSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___usedAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___nextSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AbilitySound, ___soundSelectMode) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AbilitySound) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
