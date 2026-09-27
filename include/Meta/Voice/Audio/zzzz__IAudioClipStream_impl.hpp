#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioClipStream.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamDelegate_def.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamSampleDelegate_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_IsComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_Channels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_SampleRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_AddedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_AddedSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_TotalSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_TotalSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_OnAddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamSampleDelegate* (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_OnAddSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.set_OnAddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*)>(&::Meta::Voice::Audio::IAudioClipStream::set_OnAddSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_OnStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamDelegate* (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_OnStreamReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.set_OnStreamReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::IAudioClipStream::set_OnStreamReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.set_OnStreamUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::IAudioClipStream::set_OnStreamUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.set_OnStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::IAudioClipStream::set_OnStreamComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.get_OnStreamUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::AudioClipStreamDelegate* (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::get_OnStreamUnloaded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.set_OnStreamUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::Meta::Voice::Audio::AudioClipStreamDelegate*)>(&::Meta::Voice::Audio::IAudioClipStream::set_OnStreamUnloaded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.AddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::IAudioClipStream::AddSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.SetExpectedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)(int32_t)>(&::Meta::Voice::Audio::IAudioClipStream::SetExpectedSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::IAudioClipStream.Unload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::IAudioClipStream::*)()>(&::Meta::Voice::Audio::IAudioClipStream::Unload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 16}
                ));
    return ___internal_method;
  }
};
inline bool Meta::Voice::Audio::IAudioClipStream::get_IsComplete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::IAudioClipStream::get_Channels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::IAudioClipStream::get_SampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::IAudioClipStream::get_AddedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::IAudioClipStream::get_TotalSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Meta::Voice::Audio::IAudioClipStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* Meta::Voice::Audio::IAudioClipStream::get_OnAddSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioClipStream::set_OnAddSamples(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::IAudioClipStream::get_OnStreamReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioClipStream::set_OnStreamReady(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::IAudioClipStream::set_OnStreamUpdated(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::IAudioClipStream::set_OnStreamComplete(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::IAudioClipStream::get_OnStreamUnloaded()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::AudioClipStreamDelegate*>(this, ___internal_method);
}
inline void Meta::Voice::Audio::IAudioClipStream::set_OnStreamUnloaded(::Meta::Voice::Audio::AudioClipStreamDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Audio::IAudioClipStream::AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, length);
}
inline void Meta::Voice::Audio::IAudioClipStream::SetExpectedSamples(int32_t  expectedSamples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectedSamples);
}
inline void Meta::Voice::Audio::IAudioClipStream::Unload()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::IAudioClipStream*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
