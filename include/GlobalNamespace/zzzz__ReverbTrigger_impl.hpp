#pragma once
// IWYU pragma private; include "GlobalNamespace/ReverbTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReverbTrigger_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReverbTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReverbTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ReverbTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5740754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReverbTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReverbTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ReverbTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57407a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReverbTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReverbTrigger::*)()>(&::GlobalNamespace::ReverbTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57407f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::ReverbTrigger::__cordl_internal_get_mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::ReverbTrigger::__cordl_internal_get_mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr void GlobalNamespace::ReverbTrigger::__cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixer = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::ReverbTrigger::__cordl_internal_get_targetSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::ReverbTrigger::__cordl_internal_get_targetSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSnapshot;
}
constexpr void GlobalNamespace::ReverbTrigger::__cordl_internal_set_targetSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSnapshot = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::ReverbTrigger::__cordl_internal_get_normalSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::ReverbTrigger::__cordl_internal_get_normalSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSnapshot;
}
constexpr void GlobalNamespace::ReverbTrigger::__cordl_internal_set_normalSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSnapshot = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::ReverbTrigger::__cordl_internal_get_reverbTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbTrigger;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::ReverbTrigger::__cordl_internal_get_reverbTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbTrigger;
}
constexpr void GlobalNamespace::ReverbTrigger::__cordl_internal_set_reverbTrigger(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverbTrigger = value;
}
constexpr float_t& GlobalNamespace::ReverbTrigger::__cordl_internal_get_transitionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionTime;
}
constexpr float_t const& GlobalNamespace::ReverbTrigger::__cordl_internal_get_transitionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionTime;
}
constexpr void GlobalNamespace::ReverbTrigger::__cordl_internal_set_transitionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionTime = value;
}
inline void GlobalNamespace::ReverbTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ReverbTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ReverbTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReverbTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReverbTrigger* GlobalNamespace::ReverbTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReverbTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReverbTrigger::ReverbTrigger()   {
}
