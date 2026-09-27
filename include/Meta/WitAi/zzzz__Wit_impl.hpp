#pragma once
// IWYU pragma private; include "Meta/WitAi/Wit.hpp"
#include "Meta/WitAi/zzzz__VoiceService_impl.hpp"
#include "Meta/WitAi/zzzz__Wit_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigProvider_def.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigSetter_def.hpp"
#include "Meta/WitAi/zzzz__WitService_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Wit.get_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e780ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.set_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Meta::WitAi::Wit::set_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e780b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {"set_RuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_Active)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e780bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.get_IsRequestActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_IsRequestActive)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e78198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.get_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider* (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e782b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.set_TranscriptionProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)(::Meta::WitAi::Interfaces::ITranscriptionProvider*)>(&::Meta::WitAi::Wit::set_TranscriptionProvider)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e782d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.get_MicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_MicActive)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e78680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.get_ShouldSendMicData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::get_ShouldSendMicData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e78720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.GetSendError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::GetSendError)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9e78760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.GetActivateAudioError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::GetActivateAudioError)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e789ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* (::Meta::WitAi::Wit::*)(::StringW, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Wit::Activate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e78a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Wit::Activate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e78df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.ActivateImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::Wit::*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Wit::ActivateImmediately)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e7923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::Deactivate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e79394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.DeactivateAndAbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::DeactivateAndAbortRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e79404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e79474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Wit*>(),
                    {::i2c::class_of<::Meta::WitAi::Wit*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Wit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Wit::*)()>(&::Meta::WitAi::Wit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e79524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration*& Meta::WitAi::Wit::__cordl_internal_get_witRuntimeConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witRuntimeConfiguration;
}
constexpr ::Meta::WitAi::Configuration::WitRuntimeConfiguration* const& Meta::WitAi::Wit::__cordl_internal_get_witRuntimeConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witRuntimeConfiguration;
}
constexpr void Meta::WitAi::Wit::__cordl_internal_set_witRuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witRuntimeConfiguration = value;
}
constexpr ::UnityW<::Meta::WitAi::WitService>& Meta::WitAi::Wit::__cordl_internal_get_witService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witService;
}
constexpr ::UnityW<::Meta::WitAi::WitService> const& Meta::WitAi::Wit::__cordl_internal_get_witService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___witService;
}
constexpr void Meta::WitAi::Wit::__cordl_internal_set_witService(::UnityW<::Meta::WitAi::WitService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___witService = value;
}
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* Meta::WitAi::Wit::get_RuntimeConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {"get_RuntimeConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(this, ___internal_method);
}
inline void Meta::WitAi::Wit::set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {"set_RuntimeConfiguration", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Wit::get_Active()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Wit::get_IsRequestActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* Meta::WitAi::Wit::get_TranscriptionProvider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(this, ___internal_method);
}
inline void Meta::WitAi::Wit::set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Wit::get_MicActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Wit::get_ShouldSendMicData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Wit::GetSendError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Wit::GetActivateAudioError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Meta::WitAi::Wit::Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>*>(this, ___internal_method, text, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::Wit::Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::Wit::ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestOptions, requestEvents);
}
inline void Meta::WitAi::Wit::Deactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Wit::DeactivateAndAbortRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Wit::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Wit*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Wit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Wit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Wit* Meta::WitAi::Wit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Wit*>());
}
/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr  Meta::WitAi::Wit::operator ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* Meta::WitAi::Wit::i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigSetter"
constexpr  Meta::WitAi::Wit::operator ::Meta::WitAi::IWitRuntimeConfigSetter*() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigSetter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigSetter"
constexpr ::Meta::WitAi::IWitRuntimeConfigSetter* Meta::WitAi::Wit::i___Meta__WitAi__IWitRuntimeConfigSetter() noexcept {
return static_cast<::Meta::WitAi::IWitRuntimeConfigSetter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Wit::Wit()   {
}
