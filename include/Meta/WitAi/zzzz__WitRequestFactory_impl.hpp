#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequestFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitRequestFactory_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntity_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Meta/WitAi/zzzz__WitRequest_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitRequestFactory.HandleWitRequestOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::WitAi::Configuration::WitRequestOptions*, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>)>(&::Meta::WitAi::WitRequestFactory::HandleWitRequestOptions)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x9e7d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"HandleWitRequestOptions", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestFactory.MergeEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::WitAi::Json::WitResponseClass*, ::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&::Meta::WitAi::WitRequestFactory::MergeEntities)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x9e7e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"MergeEntities", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestFactory.GetSetupOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRequestOptions* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>)>(&::Meta::WitAi::WitRequestFactory::GetSetupOptions)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e7e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"GetSetupOptions", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestFactory.CreateMessageRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VoiceServiceRequest* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>)>(&::Meta::WitAi::WitRequestFactory::CreateMessageRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e7e818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"CreateMessageRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::WitRequestFactory.CreateSpeechRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::WitRequest* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*, ::Meta::WitAi::Configuration::WitRequestOptions*, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>)>(&::Meta::WitAi::WitRequestFactory::CreateSpeechRequest)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e7e8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"CreateSpeechRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitRequestFactory::HandleWitRequestOptions(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"HandleWitRequestOptions", {}, {::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestOptions, additionalEntityProviders);
}
inline void Meta::WitAi::WitRequestFactory::MergeEntities(::Meta::WitAi::Json::WitResponseClass*  entities, ::Meta::WitAi::Data::Entities::WitDynamicEntity*  providerEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"MergeEntities", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entities, providerEntity);
}
inline ::Meta::WitAi::Configuration::WitRequestOptions* Meta::WitAi::WitRequestFactory::GetSetupOptions(::Meta::WitAi::Data::Configuration::WitConfiguration*  configuration, ::Meta::WitAi::Configuration::WitRequestOptions*  newOptions, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalDynamicEntities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"GetSetupOptions", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRequestOptions*>(nullptr, ___internal_method, configuration, newOptions, additionalDynamicEntities);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Meta::WitAi::WitRequestFactory::CreateMessageRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  config, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"CreateMessageRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VoiceServiceRequest*>(nullptr, ___internal_method, config, requestOptions, requestEvents, additionalEntityProviders);
}
inline ::Meta::WitAi::WitRequest* Meta::WitAi::WitRequestFactory::CreateSpeechRequest(::Meta::WitAi::Data::Configuration::WitConfiguration*  config, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  additionalEntityProviders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitRequestFactory*>(),
                        {"CreateSpeechRequest", {}, {::i2c::type_of<::Meta::WitAi::Data::Configuration::WitConfiguration*>(), ::i2c::type_of<::Meta::WitAi::Configuration::WitRequestOptions*>(), ::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::WitRequest*>(nullptr, ___internal_method, config, requestOptions, requestEvents, additionalEntityProviders);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitRequestFactory::WitRequestFactory()   {
}
