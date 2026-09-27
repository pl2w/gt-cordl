#pragma once
// IWYU pragma private; include "Oculus/Voice/Bindings/Android/VoiceSDKBinding.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseServiceBinding_impl.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKBinding_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Oculus/Voice/Bindings/Android/zzzz__VoiceSDKListenerBinding_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::UnityEngine::AndroidJavaObject*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94b3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_Active)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb94b3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_IsRequestActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb94b494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_MicActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb94b56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_MicActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.get_PlatformSupportsWit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_PlatformSupportsWit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb94b644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_PlatformSupportsWit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::Activate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb94b71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::Activate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb94b838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::Meta::WitAi::Configuration::WitRequestOptions*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::ActivateImmediately)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb94b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::Deactivate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb94ba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Deactivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::StringW)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb94bad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"DeactivateAndAbortRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.SetRuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::SetRuntimeConfiguration)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb94bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"SetRuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.SetListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*)>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::SetListener)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb94c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"SetListener", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Bindings::Android::VoiceSDKBinding.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Bindings::Android::VoiceSDKBinding::*)()>(&::Oculus::Voice::Bindings::Android::VoiceSDKBinding::Connect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb94c228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sdkInstance);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_IsRequestActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_IsRequestActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_MicActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_MicActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Voice::Bindings::Android::VoiceSDKBinding::get_PlatformSupportsWit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"get_PlatformSupportsWit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Activate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, options);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Activate", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"ActivateImmediately", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::Deactivate(::StringW  requestID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Deactivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestID);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::DeactivateAndAbortRequest(::StringW  requestID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"DeactivateAndAbortRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestID);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::SetRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"SetRuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::SetListener(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"SetListener", {}, {::i2c::type_of<::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void Oculus::Voice::Bindings::Android::VoiceSDKBinding::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Oculus::Voice::Bindings::Android::VoiceSDKBinding* Oculus::Voice::Bindings::Android::VoiceSDKBinding::New_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>(sdkInstance));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Bindings::Android::VoiceSDKBinding::VoiceSDKBinding()   {
}
