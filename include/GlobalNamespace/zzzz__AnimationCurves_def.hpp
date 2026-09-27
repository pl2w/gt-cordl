#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationCurves.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnimationCurves)
namespace GlobalNamespace {
struct AnimationCurves_EaseType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimationCurves;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationCurves*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationCurves*, "", "AnimationCurves");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationCurves
class CORDL_TYPE AnimationCurves : public ::System::Object {
public:
// Declarations
using EaseType = ::GlobalNamespace::AnimationCurves_EaseType;

/// @brief Field gEaseTypeToCurve, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gEaseTypeToCurve, put=setStaticF_gEaseTypeToCurve)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AnimationCurves_EaseType,::UnityEngine::AnimationCurve*>*  gEaseTypeToCurve;

/// @brief Method GetCurveForEase, addr 0x5a19ab8, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetCurveForEase(::GlobalNamespace::AnimationCurves_EaseType  ease) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AnimationCurves_EaseType,::UnityEngine::AnimationCurve*>* getStaticF_gEaseTypeToCurve() ;

/// @brief Method get_EaseInBack, addr 0x5a183c0, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInBack() ;

/// @brief Method get_EaseInBounce, addr 0x5a17aac, size 0x280, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInBounce() ;

/// @brief Method get_EaseInCirc, addr 0x5a17674, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInCirc() ;

/// @brief Method get_EaseInCubic, addr 0x5a16184, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInCubic() ;

/// @brief Method get_EaseInElastic, addr 0x5a187f0, size 0x27c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInElastic() ;

/// @brief Method get_EaseInExpo, addr 0x5a17240, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInExpo() ;

/// @brief Method get_EaseInOutBack, addr 0x5a18650, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutBack() ;

/// @brief Method get_EaseInOutBounce, addr 0x5a17fa8, size 0x418, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutBounce() ;

/// @brief Method get_EaseInOutCirc, addr 0x5a178fc, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutCirc() ;

/// @brief Method get_EaseInOutCubic, addr 0x5a16414, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutCubic() ;

/// @brief Method get_EaseInOutElastic, addr 0x5a18ce0, size 0x410, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutElastic() ;

/// @brief Method get_EaseInOutExpo, addr 0x5a174c8, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutExpo() ;

/// @brief Method get_EaseInOutQuad, addr 0x5a15fe8, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutQuad() ;

/// @brief Method get_EaseInOutQuart, addr 0x5a16838, size 0x1ac, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutQuart() ;

/// @brief Method get_EaseInOutQuint, addr 0x5a16c6c, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutQuint() ;

/// @brief Method get_EaseInOutSine, addr 0x5a17098, size 0x1a8, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInOutSine() ;

/// @brief Method get_EaseInQuad, addr 0x5a15d58, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInQuad() ;

/// @brief Method get_EaseInQuart, addr 0x5a165b0, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInQuart() ;

/// @brief Method get_EaseInQuint, addr 0x5a169e4, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInQuint() ;

/// @brief Method get_EaseInSine, addr 0x5a16e10, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseInSine() ;

/// @brief Method get_EaseOutBack, addr 0x5a18508, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutBack() ;

/// @brief Method get_EaseOutBounce, addr 0x5a17d2c, size 0x27c, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutBounce() ;

/// @brief Method get_EaseOutCirc, addr 0x5a177b8, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutCirc() ;

/// @brief Method get_EaseOutCubic, addr 0x5a162cc, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutCubic() ;

/// @brief Method get_EaseOutElastic, addr 0x5a18a6c, size 0x274, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutElastic() ;

/// @brief Method get_EaseOutExpo, addr 0x5a17384, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutExpo() ;

/// @brief Method get_EaseOutQuad, addr 0x5a15ea0, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutQuad() ;

/// @brief Method get_EaseOutQuart, addr 0x5a166f4, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutQuart() ;

/// @brief Method get_EaseOutQuint, addr 0x5a16b28, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutQuint() ;

/// @brief Method get_EaseOutSine, addr 0x5a16f54, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_EaseOutSine() ;

/// @brief Method get_Linear, addr 0x5a193e4, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_Linear() ;

/// @brief Method get_Spring, addr 0x5a190f0, size 0x2f4, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_Spring() ;

/// @brief Method get_Step, addr 0x5a19518, size 0x1dc, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* get_Step() ;

static inline void setStaticF_gEaseTypeToCurve(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::AnimationCurves_EaseType,::UnityEngine::AnimationCurve*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationCurves() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurves", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationCurves(AnimationCurves && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationCurves", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationCurves(AnimationCurves const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AnimationCurves) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
