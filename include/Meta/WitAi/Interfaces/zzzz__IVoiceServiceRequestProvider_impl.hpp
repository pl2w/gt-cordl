#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IVoiceServiceRequestProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IVoiceServiceRequestProvider_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider.CreateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*)>(&::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider::CreateRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::Interfaces::IVoiceServiceRequestProvider::CreateRequest(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  requestSettings, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(this, ___internal_method, requestSettings, requestOptions, requestEvents);
}
