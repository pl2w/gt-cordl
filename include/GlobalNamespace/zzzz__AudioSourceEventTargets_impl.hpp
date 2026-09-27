#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceEventTargets.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceEventTargets_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioSourceEventTargets.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceEventTargets::*)()>(&::GlobalNamespace::AudioSourceEventTargets::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x55e5d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceEventTargets.SetFadeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceEventTargets::*)(float_t)>(&::GlobalNamespace::AudioSourceEventTargets::SetFadeSpeed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55e5dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"SetFadeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceEventTargets.StartFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceEventTargets::*)(float_t)>(&::GlobalNamespace::AudioSourceEventTargets::StartFade)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55e5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceEventTargets.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceEventTargets::*)()>(&::GlobalNamespace::AudioSourceEventTargets::Update)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceEventTargets._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceEventTargets::*)()>(&::GlobalNamespace::AudioSourceEventTargets::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55e5f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_fadeVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeVolume;
}
constexpr float_t const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_fadeVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeVolume;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_fadeVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeVolume = value;
}
constexpr float_t& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_fadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeSpeed;
}
constexpr float_t const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_fadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeSpeed;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_fadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeSpeed = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_ExternalTriggerPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalTriggerPlay;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_ExternalTriggerPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalTriggerPlay;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_ExternalTriggerPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalTriggerPlay = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastExternalTriggerPlayMatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExternalTriggerPlayMatched;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastExternalTriggerPlayMatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExternalTriggerPlayMatched;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_lastExternalTriggerPlayMatched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastExternalTriggerPlayMatched = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastValueWhenPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValueWhenPlayed;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastValueWhenPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValueWhenPlayed;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_lastValueWhenPlayed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastValueWhenPlayed = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_ExternalTriggerStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalTriggerStop;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_ExternalTriggerStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalTriggerStop;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_ExternalTriggerStop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalTriggerStop = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastExternalTriggerStopMatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExternalTriggerStopMatched;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastExternalTriggerStopMatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastExternalTriggerStopMatched;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_lastExternalTriggerStopMatched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastExternalTriggerStopMatched = value;
}
constexpr bool& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastValueWhenStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValueWhenStopped;
}
constexpr bool const& GlobalNamespace::AudioSourceEventTargets::__cordl_internal_get_lastValueWhenStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValueWhenStopped;
}
constexpr void GlobalNamespace::AudioSourceEventTargets::__cordl_internal_set_lastValueWhenStopped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastValueWhenStopped = value;
}
inline void GlobalNamespace::AudioSourceEventTargets::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceEventTargets::SetFadeSpeed(float_t  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"SetFadeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void GlobalNamespace::AudioSourceEventTargets::StartFade(float_t  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"StartFade", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void GlobalNamespace::AudioSourceEventTargets::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceEventTargets::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceEventTargets*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceEventTargets* GlobalNamespace::AudioSourceEventTargets::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSourceEventTargets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceEventTargets::AudioSourceEventTargets()   {
}
