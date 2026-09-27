#pragma once
// IWYU pragma private; include "GlobalNamespace/PitchShiftAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PitchShiftAudioPlayer)
namespace GlobalNamespace {
class AudioMixVarPool;
}
namespace GlobalNamespace {
class AudioMixVar;
}
namespace GlobalNamespace {
class RangedFloat;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PitchShiftAudioPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PitchShiftAudioPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PitchShiftAudioPlayer*, "", "PitchShiftAudioPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PitchShiftAudioPlayer
class CORDL_TYPE PitchShiftAudioPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _pitch, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) ::UnityW<::GlobalNamespace::RangedFloat>  _pitch;

/// @brief Field _pitchMix, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitchMix, put=__cordl_internal_set__pitchMix)) ::GlobalNamespace::AudioMixVar*  _pitchMix;

/// @brief Field _pitchMixVars, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pitchMixVars, put=__cordl_internal_set__pitchMixVars)) ::UnityW<::GlobalNamespace::AudioMixVarPool>  _pitchMixVars;

/// @brief Field _source, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::UnityW<::UnityEngine::AudioSource>  _source;

/// @brief Field apply, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_apply, put=__cordl_internal_set_apply)) bool  apply;

/// @brief Method ApplyPitch, addr 0x596e5dc, size 0x34, virtual false, abstract: false, final false
inline void ApplyPitch() ;

/// @brief Method Awake, addr 0x596e434, size 0x10c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PitchShiftAudioPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x596e580, size 0x4c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x596e540, size 0x40, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x596e5cc, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::RangedFloat> const& __cordl_internal_get__pitch() const;

constexpr ::UnityW<::GlobalNamespace::RangedFloat>& __cordl_internal_get__pitch() ;

constexpr ::GlobalNamespace::AudioMixVar* const& __cordl_internal_get__pitchMix() const;

constexpr ::GlobalNamespace::AudioMixVar*& __cordl_internal_get__pitchMix() ;

constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool> const& __cordl_internal_get__pitchMixVars() const;

constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool>& __cordl_internal_get__pitchMixVars() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__source() ;

constexpr bool const& __cordl_internal_get_apply() const;

constexpr bool& __cordl_internal_get_apply() ;

constexpr void __cordl_internal_set__pitch(::UnityW<::GlobalNamespace::RangedFloat>  value) ;

constexpr void __cordl_internal_set__pitchMix(::GlobalNamespace::AudioMixVar*  value) ;

constexpr void __cordl_internal_set__pitchMixVars(::UnityW<::GlobalNamespace::AudioMixVarPool>  value) ;

constexpr void __cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_apply(bool  value) ;

/// @brief Method .ctor, addr 0x596e610, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PitchShiftAudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PitchShiftAudioPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PitchShiftAudioPlayer(PitchShiftAudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PitchShiftAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PitchShiftAudioPlayer(PitchShiftAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2398};

/// @brief Field apply, offset: 0x20, size: 0x1, def value: None
 bool  ___apply;

/// [SerializeField]
/// @brief Field _source, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____source;

/// [SerializeField]
/// @brief Field _pitchMixVars, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMixVarPool>  ____pitchMixVars;

/// [SerializeReference]
/// @brief Field _pitchMix, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioMixVar*  ____pitchMix;

/// [SerializeField]
/// @brief Field _pitch, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RangedFloat>  ____pitch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PitchShiftAudioPlayer, ___apply) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchShiftAudioPlayer, ____source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchShiftAudioPlayer, ____pitchMixVars) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchShiftAudioPlayer, ____pitchMix) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PitchShiftAudioPlayer, ____pitch) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PitchShiftAudioPlayer) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
