#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/Android/NativeAudioPlayerAndroid.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/NativeAudioBridge/Android/zzzz__NativeAudioPlayerAndroid_def.hpp"
#include "Liv/NativeAudioBridge/zzzz__INativeAudioPlayer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)()>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x9d6f550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.GetJavaNativeAudioBridgeClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)()>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::GetJavaNativeAudioBridgeClass)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d6f7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"GetJavaNativeAudioBridgeClass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.PreloadAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)(::UnityEngine::AudioClip*, float_t, bool)>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PreloadAudioClip)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9d6f8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PreloadAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.PlayAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)(::UnityEngine::AudioClip*, float_t)>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PlayAudioClip)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d6fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PlayAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.StopAllAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)()>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::StopAllAudio)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d6fc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"StopAllAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)()>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::Dispose)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d6fce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::*)(::StringW)>(&::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PlayAudio)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d6fb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PlayAudio", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaObject*& Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::__cordl_internal_get__javaNativeAudioBridgeClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____javaNativeAudioBridgeClass;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::__cordl_internal_get__javaNativeAudioBridgeClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____javaNativeAudioBridgeClass;
}
constexpr void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::__cordl_internal_set__javaNativeAudioBridgeClass(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____javaNativeAudioBridgeClass = value;
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::GetJavaNativeAudioBridgeClass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"GetJavaNativeAudioBridgeClass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method);
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PreloadAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PreloadAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, volume, forceReload);
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PlayAudioClip(::UnityEngine::AudioClip*  audioClip, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PlayAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, volume);
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::StopAllAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"StopAllAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::PlayAudio(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>(),
                        {"PlayAudio", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid* Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid*>());
}
/// @brief Convert operator to "::Liv::NativeAudioBridge::INativeAudioPlayer"
constexpr  Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::operator ::Liv::NativeAudioBridge::INativeAudioPlayer*() noexcept {
return static_cast<::Liv::NativeAudioBridge::INativeAudioPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::NativeAudioBridge::INativeAudioPlayer"
constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer* Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::i___Liv__NativeAudioBridge__INativeAudioPlayer() noexcept {
return static_cast<::Liv::NativeAudioBridge::INativeAudioPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::NativeAudioBridge::Android::NativeAudioPlayerAndroid::NativeAudioPlayerAndroid()   {
}
