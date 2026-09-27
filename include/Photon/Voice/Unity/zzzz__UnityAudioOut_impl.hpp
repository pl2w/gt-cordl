#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UnityAudioOut.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_1_impl.hpp"
#include "Photon/Voice/Unity/zzzz__UnityAudioOut_def.hpp"
#include "Photon/Voice/zzzz__AudioOutDelayControl_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)(::UnityEngine::AudioSource*, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*, ::Photon::Voice::ILogger*, ::StringW, bool)>(&::Photon::Voice::Unity::UnityAudioOut::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa75f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.get_OutPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::UnityAudioOut::*)()>(&::Photon::Voice::Unity::UnityAudioOut::get_OutPos)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa75f6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.OutCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)(int32_t, int32_t, int32_t)>(&::Photon::Voice::Unity::UnityAudioOut::OutCreate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa75f774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.OutStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)()>(&::Photon::Voice::Unity::UnityAudioOut::OutStart)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa75f8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.OutWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)(::ArrayW<float_t>, int32_t)>(&::Photon::Voice::Unity::UnityAudioOut::OutWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa75f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)()>(&::Photon::Voice::Unity::UnityAudioOut::Stop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa75f958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UnityAudioOut.ToggleAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UnityAudioOut::*)(bool)>(&::Photon::Voice::Unity::UnityAudioOut::ToggleAudioSource)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa75fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 17}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& Photon::Voice::Unity::UnityAudioOut::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Photon::Voice::Unity::UnityAudioOut::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void Photon::Voice::Unity::UnityAudioOut::__cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Photon::Voice::Unity::UnityAudioOut::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Photon::Voice::Unity::UnityAudioOut::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void Photon::Voice::Unity::UnityAudioOut::__cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
inline void Photon::Voice::Unity::UnityAudioOut::_ctor(::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioSource, playDelayConfig, logger, logPrefix, debugInfo);
}
inline int32_t Photon::Voice::Unity::UnityAudioOut::get_OutPos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UnityAudioOut::OutCreate(int32_t  frequency, int32_t  channels, int32_t  bufferSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, channels, bufferSamples);
}
inline void Photon::Voice::Unity::UnityAudioOut::OutStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UnityAudioOut::OutWrite(::ArrayW<float_t>  data, int32_t  offsetSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offsetSamples);
}
inline void Photon::Voice::Unity::UnityAudioOut::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UnityAudioOut::ToggleAudioSource(bool  toggle)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::UnityAudioOut*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline ::Photon::Voice::Unity::UnityAudioOut* Photon::Voice::Unity::UnityAudioOut::New_ctor(::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UnityAudioOut*>(audioSource, playDelayConfig, logger, logPrefix, debugInfo));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UnityAudioOut::UnityAudioOut()   {
}
