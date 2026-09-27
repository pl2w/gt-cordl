#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAudioManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAudioManager_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerAudioManager.SetMixerSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAudioManager::*)(::UnityEngine::Audio::AudioMixerSnapshot*, float_t)>(&::GlobalNamespace::PlayerAudioManager::SetMixerSnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {"SetMixerSnapshot", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAudioManager.UnsetMixerSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAudioManager::*)(float_t)>(&::GlobalNamespace::PlayerAudioManager::UnsetMixerSnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596e638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {"UnsetMixerSnapshot", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAudioManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAudioManager::*)()>(&::GlobalNamespace::PlayerAudioManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::PlayerAudioManager::__cordl_internal_get_defaultSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::PlayerAudioManager::__cordl_internal_get_defaultSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSnapshot;
}
constexpr void GlobalNamespace::PlayerAudioManager::__cordl_internal_set_defaultSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSnapshot = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& GlobalNamespace::PlayerAudioManager::__cordl_internal_get_underwaterSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterSnapshot;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& GlobalNamespace::PlayerAudioManager::__cordl_internal_get_underwaterSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterSnapshot;
}
constexpr void GlobalNamespace::PlayerAudioManager::__cordl_internal_set_underwaterSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underwaterSnapshot = value;
}
inline void GlobalNamespace::PlayerAudioManager::SetMixerSnapshot(::UnityEngine::Audio::AudioMixerSnapshot*  snapshot, float_t  transitionTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {"SetMixerSnapshot", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot, transitionTime);
}
inline void GlobalNamespace::PlayerAudioManager::UnsetMixerSnapshot(float_t  transitionTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {"UnsetMixerSnapshot", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionTime);
}
inline void GlobalNamespace::PlayerAudioManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAudioManager* GlobalNamespace::PlayerAudioManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAudioManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAudioManager::PlayerAudioManager()   {
}
