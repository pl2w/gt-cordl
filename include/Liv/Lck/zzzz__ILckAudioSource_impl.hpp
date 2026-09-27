#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioSource.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::ILckAudioSource::GetAudioData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource::*)()>(&::Liv::Lck::ILckAudioSource::EnableCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource::*)()>(&::Liv::Lck::ILckAudioSource::DisableCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckAudioSource::*)()>(&::Liv::Lck::ILckAudioSource::IsCapturing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::ILckAudioSource::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::ILckAudioSource::EnableCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::ILckAudioSource::DisableCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::ILckAudioSource::IsCapturing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cdc36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cdc474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::*)(::Liv::Lck::Collections::AudioBuffer*, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cdc488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cdc4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::Invoke(::Liv::Lck::Collections::AudioBuffer*  audioBuffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioBuffer);
}
inline ::System::IAsyncResult* Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::BeginInvoke(::Liv::Lck::Collections::AudioBuffer*  audioBuffer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, audioBuffer, callback, object);
}
inline void Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate* Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate::ILckAudioSource_AudioDataCallbackDelegate()   {
}
