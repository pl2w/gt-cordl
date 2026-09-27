#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKConfigBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKConfigBinding_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb94bcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding.ToJavaObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::ToJavaObject)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0xb94bce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*>(),
                        {"ToJavaObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::__cordl_internal_get_configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configuration;
}
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::__cordl_internal_get_configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configuration;
}
constexpr void Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::__cordl_internal_set_configuration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configuration = value;
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::_ctor(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::UnityEngine::AndroidJavaObject* Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::ToJavaObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*>(),
                        {"ToJavaObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method);
}
inline ::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding* Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::New_ctor(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  config)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*>(config));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::VoiceSDKConfigBinding()   {
}
