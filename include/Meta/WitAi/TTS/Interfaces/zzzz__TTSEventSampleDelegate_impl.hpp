#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/TTSEventSampleDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__TTSEventSampleDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e54484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::*)(int32_t)>(&::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e54524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::Invoke(int32_t  newSample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSample);
}
inline ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate::TTSEventSampleDelegate()   {
}
