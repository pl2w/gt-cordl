#pragma once
// IWYU pragma private; include "Oculus/Voice/VoiceSDKConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/zzzz__VoiceSDKConstants_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::VoiceSDKConstants.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Voice::VoiceSDKConstants::Init)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb949bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::VoiceSDKConstants.get_SdkVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Oculus::Voice::VoiceSDKConstants::get_SdkVersion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb94444c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"get_SdkVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::VoiceSDKConstants.OnCustomUserAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::Oculus::Voice::VoiceSDKConstants::OnCustomUserAgent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb949d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"OnCustomUserAgent", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Voice::VoiceSDKConstants::setStaticF__isInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_isInitialized", ::Oculus::Voice::VoiceSDKConstants*>(std::forward<bool>(value));
}
inline bool Oculus::Voice::VoiceSDKConstants::getStaticF__isInitialized()  {
return ::cordl_internals::getStaticField<bool, "_isInitialized", ::Oculus::Voice::VoiceSDKConstants*>();
}
inline void Oculus::Voice::VoiceSDKConstants::setStaticF__sdkVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_sdkVersion", ::Oculus::Voice::VoiceSDKConstants*>(std::forward<::StringW>(value));
}
inline ::StringW Oculus::Voice::VoiceSDKConstants::getStaticF__sdkVersion()  {
return ::cordl_internals::getStaticField<::StringW, "_sdkVersion", ::Oculus::Voice::VoiceSDKConstants*>();
}
inline void Oculus::Voice::VoiceSDKConstants::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Oculus::Voice::VoiceSDKConstants::get_SdkVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"get_SdkVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void Oculus::Voice::VoiceSDKConstants::OnCustomUserAgent(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::VoiceSDKConstants*>(),
                        {"OnCustomUserAgent", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::Oculus::Voice::VoiceSDKConstants::VoiceSDKConstants()   {
}
