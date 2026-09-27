#pragma once
// IWYU pragma private; include "Oculus/Interaction/Tween.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tween)
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace Oculus::Interaction {
class Tween_TweenCurve;
}
namespace Oculus::Interaction {
class Tween___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class Tween;
}
namespace Oculus::Interaction {
class Tween_TweenCurve;
}
namespace Oculus::Interaction {
class Tween___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Tween*);
MARK_REF_T(::Oculus::Interaction::Tween_TweenCurve*);
MARK_REF_T(::Oculus::Interaction::Tween___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Tween*, "Oculus.Interaction", "Tween");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Tween_TweenCurve*, "Oculus.Interaction", "Tween/TweenCurve");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Tween___c*, "Oculus.Interaction", "Tween/<>c");
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Tween
class CORDL_TYPE Tween : public ::System::Object {
public:
// Declarations
using TweenCurve = ::Oculus::Interaction::Tween_TweenCurve;

using __c = ::Oculus::Interaction::Tween___c;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_StartPose)) ::UnityEngine::Pose  StartPose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _animationCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCurve, put=__cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve*  _animationCurve;

/// @brief Field _maxOverlapTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOverlapTime, put=__cordl_internal_set__maxOverlapTime)) float_t  _maxOverlapTime;

/// @brief Field _pose, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get__pose, put=__cordl_internal_set__pose)) ::UnityEngine::Pose  _pose;

/// @brief Field _startPose, offset 0x34, size 0x1c 
 __declspec(property(get=__cordl_internal_get__startPose, put=__cordl_internal_set__startPose)) ::UnityEngine::Pose  _startPose;

/// @brief Field _tweenCurves, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tweenCurves, put=__cordl_internal_set__tweenCurves)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*  _tweenCurves;

/// @brief Field _tweenTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__tweenTime, put=__cordl_internal_set__tweenTime)) float_t  _tweenTime;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa45206c, size 0xd8, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::Tween* New_ctor(::UnityEngine::Pose  start, float_t  tweenTime, float_t  maxOverlapTime, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method StopAndSetPose, addr 0xa451fc0, size 0xac, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  source) ;

/// @brief Method Tick, addr 0xa4529c8, size 0x25c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TweenToInTime, addr 0xa453178, size 0x224, virtual false, abstract: false, final false
inline void TweenToInTime(::UnityEngine::Pose  target, float_t  time) ;

/// @brief Method UpdateTarget, addr 0xa452940, size 0x88, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve() ;

constexpr float_t const& __cordl_internal_get__maxOverlapTime() const;

constexpr float_t& __cordl_internal_get__maxOverlapTime() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__pose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__pose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__startPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__startPose() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>* const& __cordl_internal_get__tweenCurves() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*& __cordl_internal_get__tweenCurves() ;

constexpr float_t const& __cordl_internal_get__tweenTime() const;

constexpr float_t& __cordl_internal_get__tweenTime() ;

constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__maxOverlapTime(float_t  value) ;

constexpr void __cordl_internal_set__pose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__startPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__tweenCurves(::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*  value) ;

constexpr void __cordl_internal_set__tweenTime(float_t  value) ;

/// @brief Method .ctor, addr 0xa4515c8, size 0x13c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Pose  start, float_t  tweenTime, float_t  maxOverlapTime, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method get_Pose, addr 0xa45304c, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_StartPose, addr 0xa453060, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_StartPose() ;

/// @brief Method get_Stopped, addr 0xa453074, size 0x104, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tween() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween(Tween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween(Tween const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15845};

/// @brief Field _tweenCurves, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Tween_TweenCurve*>*  ____tweenCurves;

/// @brief Field _pose, offset: 0x18, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____pose;

/// @brief Field _startPose, offset: 0x34, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____startPose;

/// @brief Field _maxOverlapTime, offset: 0x50, size: 0x4, def value: None
 float_t  ____maxOverlapTime;

/// @brief Field _tweenTime, offset: 0x54, size: 0x4, def value: None
 float_t  ____tweenTime;

/// @brief Field _animationCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Tween, ____tweenCurves) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween, ____pose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween, ____startPose) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween, ____maxOverlapTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween, ____tweenTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween, ____animationCurve) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Tween) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Tween/<>c
class CORDL_TYPE Tween___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Tween___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*  __9__11_0;

static inline ::Oculus::Interaction::Tween___c* New_ctor() ;

/// @brief Method .ctor, addr 0xa45340c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Stopped>b__11_0, addr 0xa453414, size 0x20, virtual false, abstract: false, final false
inline bool _get_Stopped_b__11_0(::Oculus::Interaction::Tween_TweenCurve*  t) ;

static inline ::Oculus::Interaction::Tween___c* getStaticF___9() ;

static inline ::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Tween___c*  value) ;

static inline void setStaticF___9__11_0(::System::Predicate_1<::Oculus::Interaction::Tween_TweenCurve*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tween___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tween___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween___c(Tween___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween___c(Tween___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Tween___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Tween/TweenCurve
class CORDL_TYPE Tween_TweenCurve : public ::System::Object {
public:
// Declarations
/// @brief Field Current, offset 0x1c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Current, put=__cordl_internal_set_Current)) ::UnityEngine::Pose  Current;

/// @brief Field Curve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Curve, put=__cordl_internal_set_Curve)) ::Oculus::Interaction::ProgressCurve*  Curve;

/// @brief Field PrevProgress, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PrevProgress, put=__cordl_internal_set_PrevProgress)) float_t  PrevProgress;

/// @brief Field Target, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::UnityEngine::Pose  Target;

static inline ::Oculus::Interaction::Tween_TweenCurve* New_ctor() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_Current() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_Current() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get_Curve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get_Curve() ;

constexpr float_t const& __cordl_internal_get_PrevProgress() const;

constexpr float_t& __cordl_internal_get_PrevProgress() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_Target() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_Target() ;

constexpr void __cordl_internal_set_Current(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_Curve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set_PrevProgress(float_t  value) ;

constexpr void __cordl_internal_set_Target(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa45339c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tween_TweenCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tween_TweenCurve", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_TweenCurve(Tween_TweenCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_TweenCurve", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_TweenCurve(Tween_TweenCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15843};

/// @brief Field Curve, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ___Curve;

/// @brief Field PrevProgress, offset: 0x18, size: 0x4, def value: None
 float_t  ___PrevProgress;

/// @brief Field Current, offset: 0x1c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___Current;

/// @brief Field Target, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Tween_TweenCurve, ___Curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween_TweenCurve, ___PrevProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween_TweenCurve, ___Current) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Tween_TweenCurve, ___Target) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Tween_TweenCurve) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
