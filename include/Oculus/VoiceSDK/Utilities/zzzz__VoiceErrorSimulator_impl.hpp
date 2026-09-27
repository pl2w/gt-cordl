#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/VoiceErrorSimulator.hpp"
#include "Meta/WitAi/zzzz__VoiceService_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/VoiceSDK/Utilities/zzzz__VoiceErrorSimulator_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "Oculus/VoiceSDK/Utilities/zzzz__VoiceErrorRequestType_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)()>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb943e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                    {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.RefreshServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)()>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::RefreshServices)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb943fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                    {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.SetListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)(bool)>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SetListeners)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb943e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SetListeners", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)()>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9440a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                    {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.SimulateError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType, ::Meta::WitAi::Requests::VoiceErrorSimulationType)>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SimulateError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9440ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SimulateError", {}, {::i2c::type_of<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator.SimulateVoiceRequestError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)(::Meta::WitAi::Requests::VoiceServiceRequest*)>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SimulateVoiceRequestError)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb944138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SimulateVoiceRequestError", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::*)()>(&::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb94427c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get_voiceServices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceServices;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>> const& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get_voiceServices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceServices;
}
constexpr void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_set_voiceServices(::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceServices = value;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get_ttsService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ttsService;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get_ttsService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ttsService;
}
constexpr void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_set_ttsService(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ttsService = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get__requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>* const& Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_get__requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::__cordl_internal_set__requests(::System::Collections::Concurrent::ConcurrentDictionary_2<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType,::Meta::WitAi::Requests::VoiceErrorSimulationType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requests = value;
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::RefreshServices()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SetListeners(bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SetListeners", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SimulateError(::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType  requestType, ::Meta::WitAi::Requests::VoiceErrorSimulationType  simulationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SimulateError", {}, {::i2c::type_of<::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceErrorSimulationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestType, simulationType);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::SimulateVoiceRequestError(::Meta::WitAi::Requests::VoiceServiceRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {"SimulateVoiceRequestError", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator* Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator*>());
}
// Ctor Parameters []
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorSimulator::VoiceErrorSimulator()   {
}
