#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/TTSClipCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__TTSClipCallback_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::TTSClipCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Interfaces::TTSClipCallback::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::TTS::Interfaces::TTSClipCallback::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9e48ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::TTSClipCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Interfaces::TTSClipCallback::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Interfaces::TTSClipCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e54538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::TTS::Interfaces::TTSClipCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::TTS::Interfaces::TTSClipCallback::Invoke(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline ::Meta::WitAi::TTS::Interfaces::TTSClipCallback* Meta::WitAi::TTS::Interfaces::TTSClipCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Interfaces::TTSClipCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Interfaces::TTSClipCallback::TTSClipCallback()   {
}
