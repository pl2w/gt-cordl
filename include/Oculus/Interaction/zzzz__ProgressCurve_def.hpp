#pragma once
// IWYU pragma private; include "Oculus/Interaction/ProgressCurve.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressCurve)
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace Oculus::Interaction {
class ProgressCurve___c;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace Oculus::Interaction {
class ProgressCurve___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ProgressCurve*);
MARK_REF_T(::Oculus::Interaction::ProgressCurve___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ProgressCurve*, "Oculus.Interaction", "ProgressCurve");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ProgressCurve___c*, "Oculus.Interaction", "ProgressCurve/<>c");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ProgressCurve
class CORDL_TYPE ProgressCurve : public ::System::Object {
public:
// Declarations
using __c = ::Oculus::Interaction::ProgressCurve___c;

 __declspec(property(get=get_AnimationCurve, put=set_AnimationCurve)) ::UnityEngine::AnimationCurve*  AnimationCurve;

 __declspec(property(get=get_AnimationLength, put=set_AnimationLength)) float_t  AnimationLength;

/// @brief [Obsolete("Use SetTimeProvider()")]
 __declspec(property(get=get_TimeProvider, put=set_TimeProvider)) ::System::Func_1<float_t>*  TimeProvider;

/// @brief Field _animationCurve, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCurve, put=__cordl_internal_set__animationCurve)) ::UnityEngine::AnimationCurve*  _animationCurve;

/// @brief Field _animationLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationLength, put=__cordl_internal_set__animationLength)) float_t  _animationLength;

/// @brief Field _animationStartTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationStartTime, put=__cordl_internal_set__animationStartTime)) float_t  _animationStartTime;

/// @brief Field _timeProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Copy, addr 0xa48d07c, size 0x4c, virtual false, abstract: false, final false
inline void Copy(::Oculus::Interaction::ProgressCurve*  other) ;

/// @brief Method End, addr 0xa48d21c, size 0x38, virtual false, abstract: false, final false
inline void End() ;

static inline ::Oculus::Interaction::ProgressCurve* New_ctor() ;

static inline ::Oculus::Interaction::ProgressCurve* New_ctor(::UnityEngine::AnimationCurve*  animationCurve, float_t  animationLength) ;

static inline ::Oculus::Interaction::ProgressCurve* New_ctor(::Oculus::Interaction::ProgressCurve*  other) ;

/// @brief Method Progress, addr 0xa48d0f8, size 0x64, virtual false, abstract: false, final false
inline float_t Progress() ;

/// @brief Method ProgressIn, addr 0xa48d1a8, size 0x74, virtual false, abstract: false, final false
inline float_t ProgressIn(float_t  time) ;

/// @brief Method ProgressTime, addr 0xa48d15c, size 0x4c, virtual false, abstract: false, final false
inline float_t ProgressTime() ;

/// @brief Method SetTimeProvider, addr 0xa48cd20, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa48d0c8, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__animationCurve() ;

constexpr float_t const& __cordl_internal_get__animationLength() const;

constexpr float_t& __cordl_internal_get__animationLength() ;

constexpr float_t const& __cordl_internal_get__animationStartTime() const;

constexpr float_t& __cordl_internal_get__animationStartTime() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__animationLength(float_t  value) ;

constexpr void __cordl_internal_set__animationStartTime(float_t  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa48cd28, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa48ce54, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AnimationCurve*  animationCurve, float_t  animationLength) ;

/// @brief Method .ctor, addr 0xa48cf74, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::ProgressCurve*  other) ;

/// @brief Method get_AnimationCurve, addr 0xa48ccf0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_AnimationCurve() ;

/// @brief Method get_AnimationLength, addr 0xa48cd00, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimationLength() ;

/// @brief Method get_TimeProvider, addr 0xa48cd10, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<float_t>* get_TimeProvider() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Method set_AnimationCurve, addr 0xa48ccf8, size 0x8, virtual false, abstract: false, final false
inline void set_AnimationCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_AnimationLength, addr 0xa48cd08, size 0x8, virtual false, abstract: false, final false
inline void set_AnimationLength(float_t  value) ;

/// @brief Method set_TimeProvider, addr 0xa48cd18, size 0x8, virtual false, abstract: false, final false
inline void set_TimeProvider(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressCurve", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressCurve(ProgressCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressCurve", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressCurve(ProgressCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16034};

/// [SerializeField]
/// @brief Field _animationCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____animationCurve;

/// [SerializeField]
/// @brief Field _animationLength, offset: 0x18, size: 0x4, def value: None
 float_t  ____animationLength;

/// @brief Field _timeProvider, offset: 0x20, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _animationStartTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____animationStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ProgressCurve, ____animationCurve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ProgressCurve, ____animationLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ProgressCurve, ____timeProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ProgressCurve, ____animationStartTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ProgressCurve) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ProgressCurve/<>c
class CORDL_TYPE ProgressCurve___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ProgressCurve___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_1<float_t>*  __9__14_0;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Func_1<float_t>*  __9__15_0;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Func_1<float_t>*  __9__16_0;

static inline ::Oculus::Interaction::ProgressCurve___c* New_ctor() ;

/// @brief Method <.ctor>b__14_0, addr 0xa48d2c4, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__14_0() ;

/// @brief Method <.ctor>b__15_0, addr 0xa48d2cc, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__15_0() ;

/// @brief Method <.ctor>b__16_0, addr 0xa48d2d4, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__16_0() ;

/// @brief Method .ctor, addr 0xa48d2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ProgressCurve___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__14_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__15_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__16_0() ;

static inline void setStaticF___9(::Oculus::Interaction::ProgressCurve___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__15_0(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__16_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressCurve___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressCurve___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressCurve___c(ProgressCurve___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressCurve___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressCurve___c(ProgressCurve___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ProgressCurve___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
