#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioMixer.hpp"
#include "Liv/Lck/zzzz__ILckAudioMixer_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.GetMixedAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Collections::AudioBuffer* (::Liv::Lck::ILckAudioMixer::*)(float_t)>(&::Liv::Lck::ILckAudioMixer::GetMixedAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.SetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckAudioMixer::*)(bool)>(&::Liv::Lck::ILckAudioMixer::SetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.GetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckAudioMixer::*)()>(&::Liv::Lck::ILckAudioMixer::GetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.SetGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckAudioMixer::*)(bool)>(&::Liv::Lck::ILckAudioMixer::SetGameAudioMute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.IsGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckAudioMixer::*)()>(&::Liv::Lck::ILckAudioMixer::IsGameAudioMute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.GetMicrophoneOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::ILckAudioMixer::*)()>(&::Liv::Lck::ILckAudioMixer::GetMicrophoneOutputLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.GetGameOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::ILckAudioMixer::*)()>(&::Liv::Lck::ILckAudioMixer::GetGameOutputLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.SetMicrophoneGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioMixer::*)(float_t)>(&::Liv::Lck::ILckAudioMixer::SetMicrophoneGain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.SetGameAudioGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioMixer::*)(float_t)>(&::Liv::Lck::ILckAudioMixer::SetGameAudioGain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioMixer.ReadAvailableAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioMixer::*)()>(&::Liv::Lck::ILckAudioMixer::ReadAvailableAudioData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 9}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::Collections::AudioBuffer* Liv::Lck::ILckAudioMixer::GetMixedAudio(float_t  recordingTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Collections::AudioBuffer*>(this, ___internal_method, recordingTime);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckAudioMixer::SetMicrophoneCaptureActive(bool  isOpen)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isOpen);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckAudioMixer::GetMicrophoneCaptureActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckAudioMixer::SetGameAudioMute(bool  isMute)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isMute);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckAudioMixer::IsGameAudioMute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline float_t Liv::Lck::ILckAudioMixer::GetMicrophoneOutputLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::ILckAudioMixer::GetGameOutputLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::ILckAudioMixer::SetMicrophoneGain(float_t  gain)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gain);
}
inline void Liv::Lck::ILckAudioMixer::SetGameAudioGain(float_t  gain)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gain);
}
inline void Liv::Lck::ILckAudioMixer::ReadAvailableAudioData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioMixer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckAudioMixer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckAudioMixer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
