#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaCaveCrystal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrystalNote_def.hpp"
#include "GlobalNamespace/zzzz__CrystalOctave_def.hpp"
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaCaveCrystal)
namespace GlobalNamespace {
class GorillaCaveCrystalVisuals;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class TapInnerGlow;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaCaveCrystal;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaCaveCrystal*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaCaveCrystal*, "", "GorillaCaveCrystal");
// Dependencies CrystalNote, CrystalOctave, Tappable, TimeSince
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaCaveCrystal
class CORDL_TYPE GorillaCaveCrystal : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field _animating, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__animating, put=__cordl_internal_set__animating)) bool  _animating;

/// @brief Field _crystalRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__crystalRenderer, put=__cordl_internal_set__crystalRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  _crystalRenderer;

/// @brief Field _lerpInCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__lerpInCurve, put=__cordl_internal_set__lerpInCurve)) ::UnityEngine::AnimationCurve*  _lerpInCurve;

/// @brief Field _lerpOutCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__lerpOutCurve, put=__cordl_internal_set__lerpOutCurve)) ::UnityEngine::AnimationCurve*  _lerpOutCurve;

/// @brief Field _tapStrength, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tapStrength, put=__cordl_internal_set__tapStrength)) float_t  _tapStrength;

/// @brief Field _timeSinceLastTap, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSinceLastTap, put=__cordl_internal_set__timeSinceLastTap)) ::GlobalNamespace::TimeSince  _timeSinceLastTap;

/// @brief Field note, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_note, put=__cordl_internal_set_note)) ::GlobalNamespace::CrystalNote  note;

/// @brief Field octave, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_octave, put=__cordl_internal_set_octave)) ::GlobalNamespace::CrystalOctave  octave;

/// @brief Field overrideSoundAndMaterial, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideSoundAndMaterial, put=__cordl_internal_set_overrideSoundAndMaterial)) bool  overrideSoundAndMaterial;

/// @brief Field tapScript, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tapScript, put=__cordl_internal_set_tapScript)) ::UnityW<::GlobalNamespace::TapInnerGlow>  tapScript;

/// @brief Field visuals, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_visuals, put=__cordl_internal_set_visuals)) ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>  visuals;

/// @brief Method AnimateCrystal, addr 0x59039fc, size 0x80, virtual false, abstract: false, final false
inline void AnimateCrystal() ;

/// @brief Method Awake, addr 0x5903950, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaCaveCrystal* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x59039f4, size 0x8, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr bool const& __cordl_internal_get__animating() const;

constexpr bool& __cordl_internal_get__animating() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__crystalRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__crystalRenderer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__lerpInCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lerpInCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__lerpOutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__lerpOutCurve() ;

constexpr float_t const& __cordl_internal_get__tapStrength() const;

constexpr float_t& __cordl_internal_get__tapStrength() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__timeSinceLastTap() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__timeSinceLastTap() ;

constexpr ::GlobalNamespace::CrystalNote const& __cordl_internal_get_note() const;

constexpr ::GlobalNamespace::CrystalNote& __cordl_internal_get_note() ;

constexpr ::GlobalNamespace::CrystalOctave const& __cordl_internal_get_octave() const;

constexpr ::GlobalNamespace::CrystalOctave& __cordl_internal_get_octave() ;

constexpr bool const& __cordl_internal_get_overrideSoundAndMaterial() const;

constexpr bool& __cordl_internal_get_overrideSoundAndMaterial() ;

constexpr ::UnityW<::GlobalNamespace::TapInnerGlow> const& __cordl_internal_get_tapScript() const;

constexpr ::UnityW<::GlobalNamespace::TapInnerGlow>& __cordl_internal_get_tapScript() ;

constexpr ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals> const& __cordl_internal_get_visuals() const;

constexpr ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>& __cordl_internal_get_visuals() ;

constexpr void __cordl_internal_set__animating(bool  value) ;

constexpr void __cordl_internal_set__crystalRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__lerpInCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__lerpOutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__tapStrength(float_t  value) ;

constexpr void __cordl_internal_set__timeSinceLastTap(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_note(::GlobalNamespace::CrystalNote  value) ;

constexpr void __cordl_internal_set_octave(::GlobalNamespace::CrystalOctave  value) ;

constexpr void __cordl_internal_set_overrideSoundAndMaterial(bool  value) ;

constexpr void __cordl_internal_set_tapScript(::UnityW<::GlobalNamespace::TapInnerGlow>  value) ;

constexpr void __cordl_internal_set_visuals(::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>  value) ;

/// @brief Method .ctor, addr 0x5903a7c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaCaveCrystal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaCaveCrystal(GorillaCaveCrystal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaCaveCrystal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaCaveCrystal(GorillaCaveCrystal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2151};

/// @brief Field overrideSoundAndMaterial, offset: 0x45, size: 0x1, def value: None
 bool  ___overrideSoundAndMaterial;

/// @brief Field octave, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::CrystalOctave  ___octave;

/// @brief Field note, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::CrystalNote  ___note;

/// [SerializeField]
/// @brief Field _crystalRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____crystalRenderer;

/// @brief Field tapScript, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TapInnerGlow>  ___tapScript;

/// [HideInInspector]
/// @brief Field visuals, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaCaveCrystalVisuals>  ___visuals;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _lerpInCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____lerpInCurve;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _lerpOutCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____lerpOutCurve;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _animating, offset: 0x78, size: 0x1, def value: None
 bool  ____animating;

/// [HideInInspector]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _tapStrength, offset: 0x7c, size: 0x4, def value: None
 float_t  ____tapStrength;

/// @brief Field _timeSinceLastTap, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____timeSinceLastTap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ___overrideSoundAndMaterial) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ___octave) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ___note) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____crystalRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ___tapScript) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ___visuals) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____lerpInCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____lerpOutCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____animating) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____tapStrength) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaCaveCrystal, ____timeSinceLastTap) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaCaveCrystal) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
