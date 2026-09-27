#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneSummoner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GreyZoneSummoner)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class GreyZoneManager;
}
namespace GlobalNamespace {
class GreyZoneSummoner__FadeOutSummoningTones_d__20;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GreyZoneSummoner;
}
namespace GlobalNamespace {
class GreyZoneSummoner__FadeOutSummoningTones_d__20;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GreyZoneSummoner*);
MARK_REF_T(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneSummoner*, "", "GreyZoneSummoner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*, "", "GreyZoneSummoner/<FadeOutSummoningTones>d__20");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneSummoner
class CORDL_TYPE GreyZoneSummoner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadeOutSummoningTones_d__20 = ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20;

 __declspec(property(get=get_SummonerMaxDistance)) float_t  SummonerMaxDistance;

 __declspec(property(get=get_SummoningFocusPoint)) ::UnityEngine::Vector3  SummoningFocusPoint;

/// @brief Field areaTriggerCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_areaTriggerCollider, put=__cordl_internal_set_areaTriggerCollider)) ::UnityW<::UnityEngine::SphereCollider>  areaTriggerCollider;

/// @brief Field areaTriggerNotifier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_areaTriggerNotifier, put=__cordl_internal_set_areaTriggerNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  areaTriggerNotifier;

/// @brief Field candlesParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_candlesParent, put=__cordl_internal_set_candlesParent)) ::UnityW<::UnityEngine::Transform>  candlesParent;

/// @brief Field candlesTimeline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_candlesTimeline, put=__cordl_internal_set_candlesTimeline)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  candlesTimeline;

/// @brief Field greyZoneActivationButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneActivationButton, put=__cordl_internal_set_greyZoneActivationButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  greyZoneActivationButton;

/// @brief Field greyZoneGravityFactorButtons, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneGravityFactorButtons, put=__cordl_internal_set_greyZoneGravityFactorButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  greyZoneGravityFactorButtons;

/// @brief Field greyZoneManager, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_greyZoneManager, put=__cordl_internal_set_greyZoneManager)) ::UnityW<::GlobalNamespace::GreyZoneManager>  greyZoneManager;

/// @brief Field summoningFocusPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_summoningFocusPoint, put=__cordl_internal_set_summoningFocusPoint)) ::UnityW<::UnityEngine::Transform>  summoningFocusPoint;

/// @brief Field summoningTones, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_summoningTones, put=__cordl_internal_set_summoningTones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  summoningTones;

/// @brief Field summoningTonesFadeOverlap, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningTonesFadeOverlap, put=__cordl_internal_set_summoningTonesFadeOverlap)) float_t  summoningTonesFadeOverlap;

/// @brief Field summoningTonesFadeTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningTonesFadeTime, put=__cordl_internal_set_summoningTonesFadeTime)) float_t  summoningTonesFadeTime;

/// @brief Field summoningTonesMaxVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningTonesMaxVolume, put=__cordl_internal_set_summoningTonesMaxVolume)) float_t  summoningTonesMaxVolume;

/// @brief Method ColliderEnteredArea, addr 0x561d3a4, size 0x118, virtual false, abstract: false, final false
inline void ColliderEnteredArea(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method ColliderExitedArea, addr 0x561d4bc, size 0x114, virtual false, abstract: false, final false
inline void ColliderExitedArea(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// [IteratorStateMachine(typeof(GreyZoneSummoner::<FadeOutSummoningTones>d__20))]
/// @brief Method FadeOutSummoningTones, addr 0x561d310, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeOutSummoningTones() ;

static inline ::GlobalNamespace::GreyZoneSummoner* New_ctor() ;

/// @brief Method OnDisable, addr 0x561d1bc, size 0x154, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x561d050, size 0x16c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGreyZoneActivated, addr 0x561a71c, size 0x2c, virtual false, abstract: false, final false
inline void OnGreyZoneActivated() ;

/// @brief Method UpdateProgressFeedback, addr 0x561b3d8, size 0x2ac, virtual false, abstract: false, final false
inline void UpdateProgressFeedback(bool  greyZoneAvailable) ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_areaTriggerCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_areaTriggerCollider() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_areaTriggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_areaTriggerNotifier() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_candlesParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_candlesParent() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get_candlesTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get_candlesTimeline() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_greyZoneActivationButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_greyZoneActivationButton() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>* const& __cordl_internal_get_greyZoneGravityFactorButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*& __cordl_internal_get_greyZoneGravityFactorButtons() ;

constexpr ::UnityW<::GlobalNamespace::GreyZoneManager> const& __cordl_internal_get_greyZoneManager() const;

constexpr ::UnityW<::GlobalNamespace::GreyZoneManager>& __cordl_internal_get_greyZoneManager() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_summoningFocusPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_summoningFocusPoint() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& __cordl_internal_get_summoningTones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& __cordl_internal_get_summoningTones() ;

constexpr float_t const& __cordl_internal_get_summoningTonesFadeOverlap() const;

constexpr float_t& __cordl_internal_get_summoningTonesFadeOverlap() ;

constexpr float_t const& __cordl_internal_get_summoningTonesFadeTime() const;

constexpr float_t& __cordl_internal_get_summoningTonesFadeTime() ;

constexpr float_t const& __cordl_internal_get_summoningTonesMaxVolume() const;

constexpr float_t& __cordl_internal_get_summoningTonesMaxVolume() ;

constexpr void __cordl_internal_set_areaTriggerCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_areaTriggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

constexpr void __cordl_internal_set_candlesParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_candlesTimeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set_greyZoneActivationButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_greyZoneGravityFactorButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  value) ;

constexpr void __cordl_internal_set_greyZoneManager(::UnityW<::GlobalNamespace::GreyZoneManager>  value) ;

constexpr void __cordl_internal_set_summoningFocusPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_summoningTones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value) ;

constexpr void __cordl_internal_set_summoningTonesFadeOverlap(float_t  value) ;

constexpr void __cordl_internal_set_summoningTonesFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_summoningTonesMaxVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x561d5d0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SummonerMaxDistance, addr 0x561baa4, size 0x28, virtual false, abstract: false, final false
inline float_t get_SummonerMaxDistance() ;

/// @brief Method get_SummoningFocusPoint, addr 0x561ba8c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_SummoningFocusPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GreyZoneSummoner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneSummoner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneSummoner(GreyZoneSummoner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneSummoner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneSummoner(GreyZoneSummoner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{569};

/// [SerializeField]
/// @brief Field summoningFocusPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___summoningFocusPoint;

/// [SerializeField]
/// @brief Field candlesParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___candlesParent;

/// [SerializeField]
/// @brief Field candlesTimeline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ___candlesTimeline;

/// [SerializeField]
/// @brief Field areaTriggerNotifier, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___areaTriggerNotifier;

/// [SerializeField]
/// @brief Field areaTriggerCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___areaTriggerCollider;

/// [SerializeField]
/// @brief Field greyZoneActivationButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___greyZoneActivationButton;

/// [SerializeField]
/// @brief Field summoningTones, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ___summoningTones;

/// [SerializeField]
/// @brief Field summoningTonesMaxVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___summoningTonesMaxVolume;

/// [SerializeField]
/// @brief Field summoningTonesFadeOverlap, offset: 0x5c, size: 0x4, def value: None
 float_t  ___summoningTonesFadeOverlap;

/// [SerializeField]
/// @brief Field summoningTonesFadeTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___summoningTonesFadeTime;

/// [SerializeField]
/// @brief Field greyZoneGravityFactorButtons, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  ___greyZoneGravityFactorButtons;

/// @brief Field greyZoneManager, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GreyZoneManager>  ___greyZoneManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___summoningFocusPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___candlesParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___candlesTimeline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___areaTriggerNotifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___areaTriggerCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___greyZoneActivationButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___summoningTones) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___summoningTonesMaxVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___summoningTonesFadeOverlap) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___summoningTonesFadeTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___greyZoneGravityFactorButtons) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner, ___greyZoneManager) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneSummoner) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GreyZoneSummoner/<FadeOutSummoningTones>d__20
class CORDL_TYPE GreyZoneSummoner__FadeOutSummoningTones_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GreyZoneSummoner>  __4__this;

/// @brief Field <fadeRate>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeRate_5__3, put=__cordl_internal_set__fadeRate_5__3)) float_t  _fadeRate_5__3;

/// @brief Field <fadeStartTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeStartTime_5__2, put=__cordl_internal_set__fadeStartTime_5__2)) float_t  _fadeStartTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x561d6c4, size 0x1e8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561d8ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x561d8b4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561d8ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x561d6c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GreyZoneSummoner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GreyZoneSummoner>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__fadeRate_5__3() const;

constexpr float_t& __cordl_internal_get__fadeRate_5__3() ;

constexpr float_t const& __cordl_internal_get__fadeStartTime_5__2() const;

constexpr float_t& __cordl_internal_get__fadeStartTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GreyZoneSummoner>  value) ;

constexpr void __cordl_internal_set__fadeRate_5__3(float_t  value) ;

constexpr void __cordl_internal_set__fadeStartTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x561d37c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GreyZoneSummoner__FadeOutSummoningTones_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneSummoner__FadeOutSummoningTones_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GreyZoneSummoner__FadeOutSummoningTones_d__20(GreyZoneSummoner__FadeOutSummoningTones_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GreyZoneSummoner__FadeOutSummoningTones_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GreyZoneSummoner__FadeOutSummoningTones_d__20(GreyZoneSummoner__FadeOutSummoningTones_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{568};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GreyZoneSummoner>  _____4__this;

/// @brief Field <fadeStartTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____fadeStartTime_5__2;

/// @brief Field <fadeRate>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____fadeRate_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20, ____fadeStartTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20, ____fadeRate_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
