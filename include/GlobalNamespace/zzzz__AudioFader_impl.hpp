#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioFader_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioFader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFader::*)()>(&::GlobalNamespace::AudioFader::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56476fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFader.FadeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFader::*)()>(&::GlobalNamespace::AudioFader::FadeIn)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5647714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"FadeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFader.FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFader::*)()>(&::GlobalNamespace::AudioFader::FadeOut)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5647798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"FadeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFader.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFader::*)()>(&::GlobalNamespace::AudioFader::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x564788c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFader::*)()>(&::GlobalNamespace::AudioFader::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5647950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioFader::__cordl_internal_get_audioToFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioToFade;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioFader::__cordl_internal_get_audioToFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioToFade;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_audioToFade(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioToFade = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioFader::__cordl_internal_get_outro()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outro;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioFader::__cordl_internal_get_outro() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outro;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_outro(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outro = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_fadeInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInDuration;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_fadeInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInDuration;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_fadeInDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInDuration = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_fadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_fadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDuration;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_fadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutDuration = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVolume;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVolume = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_currentVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVolume;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_currentVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVolume;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_currentVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVolume = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_targetVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVolume;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_targetVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVolume;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_targetVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVolume = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_currentFadeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFadeSpeed;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_currentFadeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFadeSpeed;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_currentFadeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFadeSpeed = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_fadeInSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInSpeed;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_fadeInSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInSpeed;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_fadeInSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInSpeed = value;
}
constexpr float_t& GlobalNamespace::AudioFader::__cordl_internal_get_fadeOutSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutSpeed;
}
constexpr float_t const& GlobalNamespace::AudioFader::__cordl_internal_get_fadeOutSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutSpeed;
}
constexpr void GlobalNamespace::AudioFader::__cordl_internal_set_fadeOutSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutSpeed = value;
}
inline void GlobalNamespace::AudioFader::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFader::FadeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"FadeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFader::FadeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"FadeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFader::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioFader* GlobalNamespace::AudioFader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioFader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioFader::AudioFader()   {
}
