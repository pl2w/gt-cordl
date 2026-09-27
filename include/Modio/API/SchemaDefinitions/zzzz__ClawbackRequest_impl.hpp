#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ClawbackRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ClawbackRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ClawbackRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ClawbackRequest::*)(int64_t, int64_t, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::ClawbackRequest::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fe66ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ClawbackRequest>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ClawbackRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::ClawbackRequest::*)()>(&::Modio::API::SchemaDefinitions::ClawbackRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9fe66f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ClawbackRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ClawbackRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ClawbackRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ClawbackRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ClawbackRequest>();
}
inline void Modio::API::SchemaDefinitions::ClawbackRequest::_ctor(int64_t  transaction_id, int64_t  gateway_uuid, ::StringW  portal, ::StringW  refund_reason, ::StringW  clawback_uuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ClawbackRequest>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transaction_id, gateway_uuid, portal, refund_reason, clawback_uuid);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ClawbackRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ClawbackRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::ClawbackRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::ClawbackRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayUuid", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Portal", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RefundReason", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ClawbackUuid", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ClawbackRequest::ClawbackRequest(int64_t  TransactionId, int64_t  GatewayUuid, ::StringW  Portal, ::StringW  RefundReason, ::StringW  ClawbackUuid) noexcept  {
this->TransactionId = TransactionId;
this->GatewayUuid = GatewayUuid;
this->Portal = Portal;
this->RefundReason = RefundReason;
this->ClawbackUuid = ClawbackUuid;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ClawbackRequest::ClawbackRequest()   {
}
