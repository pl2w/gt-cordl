#pragma once
// IWYU pragma private; include "GorillaTagScripts/UnMuteAudioSourceOnEnable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__UnMuteAudioSourceOnEnable_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::UnMuteAudioSourceOnEnable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UnMuteAudioSourceOnEnable::*)()>(&::GorillaTagScripts::UnMuteAudioSourceOnEnable::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bd40e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UnMuteAudioSourceOnEnable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UnMuteAudioSourceOnEnable::*)()>(&::GorillaTagScripts::UnMuteAudioSourceOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bd4108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UnMuteAudioSourceOnEnable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UnMuteAudioSourceOnEnable::*)()>(&::GorillaTagScripts::UnMuteAudioSourceOnEnable::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bd4128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::UnMuteAudioSourceOnEnable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::UnMuteAudioSourceOnEnable::*)()>(&::GorillaTagScripts::UnMuteAudioSourceOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd4144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_get_originalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalVolume;
}
constexpr float_t const& GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_get_originalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalVolume;
}
constexpr void GorillaTagScripts::UnMuteAudioSourceOnEnable::__cordl_internal_set_originalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalVolume = value;
}
inline void GorillaTagScripts::UnMuteAudioSourceOnEnable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UnMuteAudioSourceOnEnable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UnMuteAudioSourceOnEnable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::UnMuteAudioSourceOnEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::UnMuteAudioSourceOnEnable* GorillaTagScripts::UnMuteAudioSourceOnEnable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::UnMuteAudioSourceOnEnable*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::UnMuteAudioSourceOnEnable::UnMuteAudioSourceOnEnable()   {
}
