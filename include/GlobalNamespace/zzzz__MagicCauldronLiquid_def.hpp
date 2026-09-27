#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldronLiquid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MagicCauldronLiquid_WaveParams_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MagicCauldronLiquid)
namespace GlobalNamespace {
class ApplyMaterialProperty;
}
namespace GlobalNamespace {
struct MagicCauldronLiquid_WaveParams;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MagicCauldronLiquid;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MagicCauldronLiquid*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldronLiquid*, "", "MagicCauldronLiquid");
// Dependencies MagicCauldronLiquid::WaveParams, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCauldronLiquid
class CORDL_TYPE MagicCauldronLiquid : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WaveParams = ::GlobalNamespace::MagicCauldronLiquid_WaveParams;

/// @brief Field _animProgress, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animProgress, put=__cordl_internal_set__animProgress)) float_t  _animProgress;

/// @brief Field _animating, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__animating, put=__cordl_internal_set__animating)) bool  _animating;

/// @brief Field _animationCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCurve, put=__cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve*  _animationCurve;

/// @brief Field _applyMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterial, put=__cordl_internal_set__applyMaterial)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterial;

/// @brief Field _colorEnd, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorEnd, put=__cordl_internal_set__colorEnd)) ::UnityEngine::Color  _colorEnd;

/// @brief Field _colorStart, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorStart, put=__cordl_internal_set__colorStart)) ::UnityEngine::Color  _colorStart;

/// @brief Field _waveCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__waveCurve, put=__cordl_internal_set__waveCurve)) ::UnityEngine::AnimationCurve*  _waveCurve;

/// @brief Field animLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_animLength, put=__cordl_internal_set_animLength)) float_t  animLength;

/// @brief Field waveAnimating, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_waveAnimating, put=__cordl_internal_set_waveAnimating)) ::GlobalNamespace::MagicCauldronLiquid_WaveParams  waveAnimating;

/// @brief Field waveNormal, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_waveNormal, put=__cordl_internal_set_waveNormal)) ::GlobalNamespace::MagicCauldronLiquid_WaveParams  waveNormal;

/// @brief Method AnimateColorFromTo, addr 0x5958ec4, size 0x30, virtual false, abstract: false, final false
inline void AnimateColorFromTo(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  length) ;

/// @brief Method ApplyColor, addr 0x5959cf0, size 0xfc, virtual false, abstract: false, final false
inline void ApplyColor(::UnityEngine::Color  color) ;

/// @brief Method ApplyWaveParams, addr 0x5959dec, size 0x12c, virtual false, abstract: false, final false
inline void ApplyWaveParams(float_t  amplitude, float_t  frequency, float_t  scale, float_t  rotation) ;

static inline ::GlobalNamespace::MagicCauldronLiquid* New_ctor() ;

/// @brief Method OnDisable, addr 0x5959f90, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5959f18, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Test, addr 0x5959cd8, size 0x18, virtual false, abstract: false, final false
inline void Test() ;

/// @brief Method Update, addr 0x5959f9c, size 0xe4, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__animProgress() const;

constexpr float_t& __cordl_internal_get__animProgress() ;

constexpr bool const& __cordl_internal_get__animating() const;

constexpr bool& __cordl_internal_get__animating() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterial() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorEnd() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorEnd() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorStart() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorStart() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__waveCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__waveCurve() ;

constexpr float_t const& __cordl_internal_get_animLength() const;

constexpr float_t& __cordl_internal_get_animLength() ;

constexpr ::GlobalNamespace::MagicCauldronLiquid_WaveParams const& __cordl_internal_get_waveAnimating() const;

constexpr ::GlobalNamespace::MagicCauldronLiquid_WaveParams& __cordl_internal_get_waveAnimating() ;

constexpr ::GlobalNamespace::MagicCauldronLiquid_WaveParams const& __cordl_internal_get_waveNormal() const;

constexpr ::GlobalNamespace::MagicCauldronLiquid_WaveParams& __cordl_internal_get_waveNormal() ;

constexpr void __cordl_internal_set__animProgress(float_t  value) ;

constexpr void __cordl_internal_set__animating(bool  value) ;

constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__applyMaterial(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set__colorEnd(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorStart(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__waveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_animLength(float_t  value) ;

constexpr void __cordl_internal_set_waveAnimating(::GlobalNamespace::MagicCauldronLiquid_WaveParams  value) ;

constexpr void __cordl_internal_set_waveNormal(::GlobalNamespace::MagicCauldronLiquid_WaveParams  value) ;

/// @brief Method .ctor, addr 0x595a080, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldronLiquid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldronLiquid", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCauldronLiquid(MagicCauldronLiquid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCauldronLiquid", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCauldronLiquid(MagicCauldronLiquid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2333};

/// [SerializeField]
/// @brief Field _applyMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterial;

/// [SerializeField]
/// @brief Field _colorStart, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorStart;

/// [SerializeField]
/// @brief Field _colorEnd, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorEnd;

/// [SerializeField]
/// @brief Field _animating, offset: 0x48, size: 0x1, def value: None
 bool  ____animating;

/// [SerializeField]
/// @brief Field _animProgress, offset: 0x4c, size: 0x4, def value: None
 float_t  ____animProgress;

/// [SerializeField]
/// @brief Field _animationCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationCurve;

/// [SerializeField]
/// @brief Field _waveCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____waveCurve;

/// @brief Field animLength, offset: 0x60, size: 0x4, def value: None
 float_t  ___animLength;

/// @brief Field waveNormal, offset: 0x64, size: 0x10, def value: None
 ::GlobalNamespace::MagicCauldronLiquid_WaveParams  ___waveNormal;

/// @brief Field waveAnimating, offset: 0x74, size: 0x10, def value: None
 ::GlobalNamespace::MagicCauldronLiquid_WaveParams  ___waveAnimating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____applyMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____colorStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____colorEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____animating) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____animProgress) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____animationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ____waveCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ___animLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ___waveNormal) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid, ___waveAnimating) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldronLiquid) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
