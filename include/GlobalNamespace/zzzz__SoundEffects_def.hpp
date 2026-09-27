#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundEffects)
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
class SoundEffects;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundEffects*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundEffects*, "", "SoundEffects");
// Dependencies SRand, TimeSince, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundEffects
class CORDL_TYPE SoundEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastClipElapsedTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastClipElapsedTime, put=__cordl_internal_set__lastClipElapsedTime)) ::GlobalNamespace::TimeSince  _lastClipElapsedTime;

/// @brief Field _lastClipIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastClipIndex, put=__cordl_internal_set__lastClipIndex)) int32_t  _lastClipIndex;

/// @brief Field _lastClipLength, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastClipLength, put=__cordl_internal_set__lastClipLength)) double_t  _lastClipLength;

/// @brief Field _minDelay, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDelay, put=__cordl_internal_set__minDelay)) float_t  _minDelay;

/// @brief Field _rnd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rnd, put=__cordl_internal_set__rnd)) ::GlobalNamespace::SRand  _rnd;

/// @brief Field audioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  audioClips;

/// @brief Field distinct, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_distinct, put=__cordl_internal_set_distinct)) bool  distinct;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field seed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) ::StringW  seed;

/// @brief Field source, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

/// @brief Method Clear, addr 0x5794d90, size 0x78, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GlobalNamespace::SoundEffects* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnValidate, addr 0x5794ee0, size 0xd4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PlayNext, addr 0x57940fc, size 0x1b0, virtual false, abstract: false, final false
inline void PlayNext(float_t  delay, float_t  volume) ;

/// @brief Method PlayNext, addr 0x5794e88, size 0x58, virtual false, abstract: false, final false
inline void PlayNext(float_t  delayMin, float_t  delayMax, float_t  volMin, float_t  volMax) ;

/// @brief Method Stop, addr 0x5794e08, size 0x80, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__lastClipElapsedTime() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__lastClipElapsedTime() ;

constexpr int32_t const& __cordl_internal_get__lastClipIndex() const;

constexpr int32_t& __cordl_internal_get__lastClipIndex() ;

constexpr double_t const& __cordl_internal_get__lastClipLength() const;

constexpr double_t& __cordl_internal_get__lastClipLength() ;

constexpr float_t const& __cordl_internal_get__minDelay() const;

constexpr float_t& __cordl_internal_get__minDelay() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get__rnd() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get__rnd() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_audioClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_audioClips() ;

constexpr bool const& __cordl_internal_get_distinct() const;

constexpr bool& __cordl_internal_get_distinct() ;

constexpr ::StringW const& __cordl_internal_get_seed() const;

constexpr ::StringW& __cordl_internal_get_seed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set__lastClipElapsedTime(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set__lastClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set__lastClipLength(double_t  value) ;

constexpr void __cordl_internal_set__minDelay(float_t  value) ;

constexpr void __cordl_internal_set__rnd(::GlobalNamespace::SRand  value) ;

constexpr void __cordl_internal_set_audioClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_distinct(bool  value) ;

constexpr void __cordl_internal_set_seed(::StringW  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5794fb4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isPlaying, addr 0x57940b0, size 0x4c, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundEffects(SoundEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundEffects(SoundEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1454};

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// [Space]
/// @brief Field audioClips, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___audioClips;

/// @brief Field seed, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___seed;

/// [Space]
/// @brief Field distinct, offset: 0x38, size: 0x1, def value: None
 bool  ___distinct;

/// [SerializeField]
/// @brief Field _minDelay, offset: 0x3c, size: 0x4, def value: None
 float_t  ____minDelay;

/// [Space]
/// [SerializeField]
/// @brief Field _rnd, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ____rnd;

/// @brief Field _lastClipIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____lastClipIndex;

/// @brief Field _lastClipLength, offset: 0x50, size: 0x8, def value: None
 double_t  ____lastClipLength;

/// @brief Field _lastClipElapsedTime, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____lastClipElapsedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundEffects, ___source) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ___audioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ___seed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ___distinct) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ____minDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ____rnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ____lastClipIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ____lastClipLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundEffects, ____lastClipElapsedTime) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundEffects) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
