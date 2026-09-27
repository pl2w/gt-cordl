#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipStreamSampleDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipStreamSampleDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::AudioClipStreamSampleDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::AudioClipStreamSampleDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Audio::AudioClipStreamSampleDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e6c9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::AudioClipStreamSampleDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::AudioClipStreamSampleDelegate::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::AudioClipStreamSampleDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6ca8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::AudioClipStreamSampleDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Voice::Audio::AudioClipStreamSampleDelegate::Invoke(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, length);
}
inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* Meta::Voice::Audio::AudioClipStreamSampleDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::AudioClipStreamSampleDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::AudioClipStreamSampleDelegate::AudioClipStreamSampleDelegate()   {
}
