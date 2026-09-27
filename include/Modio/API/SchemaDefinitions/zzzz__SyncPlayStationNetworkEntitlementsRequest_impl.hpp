#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/SyncPlayStationNetworkEntitlementsRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__SyncPlayStationNetworkEntitlementsRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::*)(::StringW, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9feb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::*)()>(&::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9feb448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>();
}
inline void Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::_ctor(::StringW  auth_code, int64_t  env, int64_t  service_label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, auth_code, env, service_label);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "AuthCode", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Env", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ServiceLabel", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::SyncPlayStationNetworkEntitlementsRequest(::StringW  AuthCode, int64_t  Env, int64_t  ServiceLabel) noexcept  {
this->AuthCode = AuthCode;
this->Env = Env;
this->ServiceLabel = ServiceLabel;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::SyncPlayStationNetworkEntitlementsRequest::SyncPlayStationNetworkEntitlementsRequest()   {
}
