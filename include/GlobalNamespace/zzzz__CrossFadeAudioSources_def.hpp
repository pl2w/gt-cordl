#pragma once
// IWYU pragma private; include "GlobalNamespace/CrossFadeAudioSources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrossFadeAudioSources)
namespace GlobalNamespace {
template<typename T>
class IRangedVariable_1;
}
namespace GlobalNamespace {
template<typename T>
class IVariable_1;
}
namespace GlobalNamespace {
class IVariable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class CrossFadeAudioSources;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrossFadeAudioSources*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrossFadeAudioSources*, "", "CrossFadeAudioSources");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrossFadeAudioSources
class CORDL_TYPE CrossFadeAudioSources : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Max, put=set_Max)) float_t  Max;

 __declspec(property(get=get_Min, put=set_Min)) float_t  Min;

 __declspec(property(get=get_Range)) float_t  Range;

/// @brief Field _curve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _lastT, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastT, put=__cordl_internal_set__lastT)) float_t  _lastT;

/// @brief Field _lerp, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lerp, put=__cordl_internal_set__lerp)) float_t  _lerp;

/// @brief Field lerpByClipLength, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_lerpByClipLength, put=__cordl_internal_set_lerpByClipLength)) bool  lerpByClipLength;

/// @brief Field source1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_source1, put=__cordl_internal_set_source1)) ::UnityW<::UnityEngine::AudioSource>  source1;

/// @brief Field source2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_source2, put=__cordl_internal_set_source2)) ::UnityW<::UnityEngine::AudioSource>  source2;

/// @brief Field tween, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_tween, put=__cordl_internal_set_tween)) bool  tween;

/// @brief Field tweenSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_tweenSpeed, put=__cordl_internal_set_tweenSpeed)) float_t  tweenSpeed;

/// @brief Convert operator to "::GlobalNamespace::IRangedVariable_1<float_t>"
constexpr operator  ::GlobalNamespace::IRangedVariable_1<float_t>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable"
constexpr operator  ::GlobalNamespace::IVariable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable_1<float_t>"
constexpr operator  ::GlobalNamespace::IVariable_1<float_t>*() noexcept;

/// @brief Method Get, addr 0x5802674, size 0x8, virtual true, abstract: false, final true
inline float_t Get() ;

static inline ::GlobalNamespace::CrossFadeAudioSources* New_ctor() ;

/// @brief Method Play, addr 0x5802394, size 0xb4, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Set, addr 0x580267c, size 0x20, virtual true, abstract: false, final true
inline void Set(float_t  f) ;

/// @brief Method Stop, addr 0x5802448, size 0xb4, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x58024fc, size 0x178, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__lastT() const;

constexpr float_t& __cordl_internal_get__lastT() ;

constexpr float_t const& __cordl_internal_get__lerp() const;

constexpr float_t& __cordl_internal_get__lerp() ;

constexpr bool const& __cordl_internal_get_lerpByClipLength() const;

constexpr bool& __cordl_internal_get_lerpByClipLength() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source1() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source1() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source2() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source2() ;

constexpr bool const& __cordl_internal_get_tween() const;

constexpr bool& __cordl_internal_get_tween() ;

constexpr float_t const& __cordl_internal_get_tweenSpeed() const;

constexpr float_t& __cordl_internal_get_tweenSpeed() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__lastT(float_t  value) ;

constexpr void __cordl_internal_set__lerp(float_t  value) ;

constexpr void __cordl_internal_set_lerpByClipLength(bool  value) ;

constexpr void __cordl_internal_set_source1(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_source2(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_tween(bool  value) ;

constexpr void __cordl_internal_set_tweenSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x58026c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Curve, addr 0x58026bc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Max, addr 0x58026a8, size 0x8, virtual true, abstract: false, final true
inline float_t get_Max() ;

/// @brief Method get_Min, addr 0x580269c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Min() ;

/// @brief Method get_Range, addr 0x58026b4, size 0x8, virtual true, abstract: false, final true
inline float_t get_Range() ;

/// @brief Convert to "::GlobalNamespace::IRangedVariable_1<float_t>"
constexpr ::GlobalNamespace::IRangedVariable_1<float_t>* i___GlobalNamespace__IRangedVariable_1_float_t_() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable"
constexpr ::GlobalNamespace::IVariable* i___GlobalNamespace__IVariable() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable_1<float_t>"
constexpr ::GlobalNamespace::IVariable_1<float_t>* i___GlobalNamespace__IVariable_1_float_t_() noexcept;

/// @brief Method set_Max, addr 0x58026b0, size 0x4, virtual true, abstract: false, final true
inline void set_Max(float_t  value) ;

/// @brief Method set_Min, addr 0x58026a4, size 0x4, virtual true, abstract: false, final true
inline void set_Min(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrossFadeAudioSources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSources", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossFadeAudioSources(CrossFadeAudioSources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSources", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossFadeAudioSources(CrossFadeAudioSources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1677};

/// [SerializeField]
/// @brief Field _lerp, offset: 0x20, size: 0x4, def value: None
 float_t  ____lerp;

/// [SerializeField]
/// @brief Field _curve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// [Space]
/// [SerializeField]
/// @brief Field source1, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source1;

/// [SerializeField]
/// @brief Field source2, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source2;

/// [Space]
/// @brief Field lerpByClipLength, offset: 0x40, size: 0x1, def value: None
 bool  ___lerpByClipLength;

/// @brief Field tween, offset: 0x41, size: 0x1, def value: None
 bool  ___tween;

/// @brief Field tweenSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___tweenSpeed;

/// @brief Field _lastT, offset: 0x48, size: 0x4, def value: None
 float_t  ____lastT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ____lerp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ____curve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ___source1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ___source2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ___lerpByClipLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ___tween) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ___tweenSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrossFadeAudioSources, ____lastT) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrossFadeAudioSources) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
