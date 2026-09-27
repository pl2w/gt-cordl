#pragma once
// IWYU pragma private; include "GlobalNamespace/GreyZoneSummoner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GreyZoneSummoner_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__GreyZoneManager_def.hpp"
#include "GlobalNamespace/zzzz__GreyZoneSummoner_def.hpp"
#include "GlobalNamespace/zzzz__TriggerEventNotifier_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.get_SummoningFocusPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::get_SummoningFocusPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x561ba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"get_SummoningFocusPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.get_SummonerMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::get_SummonerMaxDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"get_SummonerMaxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::OnEnable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x561d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::OnDisable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x561d1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.UpdateProgressFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)(bool)>(&::GlobalNamespace::GreyZoneSummoner::UpdateProgressFeedback)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x561b3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"UpdateProgressFeedback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.OnGreyZoneActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::OnGreyZoneActivated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x561a71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnGreyZoneActivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.FadeOutSummoningTones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::FadeOutSummoningTones)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x561d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"FadeOutSummoningTones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.ColliderEnteredArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::GreyZoneSummoner::ColliderEnteredArea)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x561d3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"ColliderEnteredArea", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner.ColliderExitedArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)(::GlobalNamespace::TriggerEventNotifier*, ::UnityEngine::Collider*)>(&::GlobalNamespace::GreyZoneSummoner::ColliderExitedArea)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x561d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"ColliderExitedArea", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner::*)()>(&::GlobalNamespace::GreyZoneSummoner::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x561d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningFocusPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningFocusPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningFocusPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningFocusPoint;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_summoningFocusPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningFocusPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_candlesParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candlesParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_candlesParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candlesParent;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_candlesParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candlesParent = value;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_candlesTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candlesTimeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_candlesTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candlesTimeline;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_candlesTimeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candlesTimeline = value;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_areaTriggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTriggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_areaTriggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTriggerNotifier;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_areaTriggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaTriggerNotifier = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_areaTriggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTriggerCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_areaTriggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTriggerCollider;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_areaTriggerCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaTriggerCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneActivationButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActivationButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneActivationButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneActivationButton;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_greyZoneActivationButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneActivationButton = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTones;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_summoningTones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningTones = value;
}
constexpr float_t& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesMaxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesMaxVolume;
}
constexpr float_t const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesMaxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesMaxVolume;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_summoningTonesMaxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningTonesMaxVolume = value;
}
constexpr float_t& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesFadeOverlap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesFadeOverlap;
}
constexpr float_t const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesFadeOverlap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesFadeOverlap;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_summoningTonesFadeOverlap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningTonesFadeOverlap = value;
}
constexpr float_t& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesFadeTime;
}
constexpr float_t const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_summoningTonesFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningTonesFadeTime;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_summoningTonesFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningTonesFadeTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneGravityFactorButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneGravityFactorButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>* const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneGravityFactorButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneGravityFactorButtons;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_greyZoneGravityFactorButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneGravityFactorButtons = value;
}
constexpr ::UnityW<::GlobalNamespace::GreyZoneManager>& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneManager;
}
constexpr ::UnityW<::GlobalNamespace::GreyZoneManager> const& GlobalNamespace::GreyZoneSummoner::__cordl_internal_get_greyZoneManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___greyZoneManager;
}
constexpr void GlobalNamespace::GreyZoneSummoner::__cordl_internal_set_greyZoneManager(::UnityW<::GlobalNamespace::GreyZoneManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___greyZoneManager = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::GreyZoneSummoner::get_SummoningFocusPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"get_SummoningFocusPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::GreyZoneSummoner::get_SummonerMaxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"get_SummonerMaxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneSummoner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneSummoner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneSummoner::UpdateProgressFeedback(bool  greyZoneAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"UpdateProgressFeedback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, greyZoneAvailable);
}
inline void GlobalNamespace::GreyZoneSummoner::OnGreyZoneActivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"OnGreyZoneActivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneSummoner::FadeOutSummoningTones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"FadeOutSummoningTones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneSummoner::ColliderEnteredArea(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"ColliderEnteredArea", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::GreyZoneSummoner::ColliderExitedArea(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {"ColliderExitedArea", {}, {::i2c::type_of<::GlobalNamespace::TriggerEventNotifier*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifier, other);
}
inline void GlobalNamespace::GreyZoneSummoner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GreyZoneSummoner* GlobalNamespace::GreyZoneSummoner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneSummoner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneSummoner::GreyZoneSummoner()   {
}
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)(int32_t)>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x561d37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)()>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x561d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)()>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x561d6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)()>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561d8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)()>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x561d8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::*)()>(&::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561d8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GreyZoneSummoner>& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GreyZoneSummoner> const& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GreyZoneSummoner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get__fadeStartTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStartTime_5__2;
}
constexpr float_t const& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get__fadeStartTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStartTime_5__2;
}
constexpr void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_set__fadeStartTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeStartTime_5__2 = value;
}
constexpr float_t& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get__fadeRate_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeRate_5__3;
}
constexpr float_t const& GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_get__fadeRate_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeRate_5__3;
}
constexpr void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::__cordl_internal_set__fadeRate_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeRate_5__3 = value;
}
inline void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreyZoneSummoner__FadeOutSummoningTones_d__20::GreyZoneSummoner__FadeOutSummoningTones_d__20()   {
}
