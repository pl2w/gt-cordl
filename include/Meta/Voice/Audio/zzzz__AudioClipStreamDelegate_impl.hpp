#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipStreamDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamDelegate_def.hpp"
#include "Meta/Voice/Audio/zzzz__IAudioClipStream_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::AudioClipStreamDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::AudioClipStreamDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Audio::AudioClipStreamDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e6c8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::AudioClipStreamDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::AudioClipStreamDelegate::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&::Meta::Voice::Audio::AudioClipStreamDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6c9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::AudioClipStreamDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Voice::Audio::AudioClipStreamDelegate::Invoke(::Meta::Voice::Audio::IAudioClipStream*  clipStream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipStream);
}
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* Meta::Voice::Audio::AudioClipStreamDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::AudioClipStreamDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate::AudioClipStreamDelegate()   {
}
