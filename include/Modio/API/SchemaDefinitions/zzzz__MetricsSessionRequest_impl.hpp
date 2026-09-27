#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MetricsSessionRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetricsSessionRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MetricsSessionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::MetricsSessionRequest::*)(::StringW, int64_t, ::StringW, ::StringW, int64_t, ::ArrayW<int64_t>)>(&::Modio::API::SchemaDefinitions::MetricsSessionRequest::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9fe971c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetricsSessionRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MetricsSessionRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::MetricsSessionRequest::*)()>(&::Modio::API::SchemaDefinitions::MetricsSessionRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9fe9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetricsSessionRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::MetricsSessionRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::MetricsSessionRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::MetricsSessionRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::MetricsSessionRequest>();
}
inline void Modio::API::SchemaDefinitions::MetricsSessionRequest::_ctor(::StringW  sessionId, int64_t  sessionTs, ::StringW  sessionHash, ::StringW  sessionNonce, int64_t  sessionOrderId, ::ArrayW<int64_t>  ids)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetricsSessionRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sessionId, sessionTs, sessionHash, sessionNonce, sessionOrderId, ids);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::MetricsSessionRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetricsSessionRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::MetricsSessionRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::MetricsSessionRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "SessionId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionTs", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionHash", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionNonce", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SessionOrderId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Ids", ty: "::ArrayW<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::MetricsSessionRequest::MetricsSessionRequest(::StringW  SessionId, int64_t  SessionTs, ::StringW  SessionHash, ::StringW  SessionNonce, int64_t  SessionOrderId, ::ArrayW<int64_t>  Ids) noexcept  {
this->SessionId = SessionId;
this->SessionTs = SessionTs;
this->SessionHash = SessionHash;
this->SessionNonce = SessionNonce;
this->SessionOrderId = SessionOrderId;
this->Ids = Ids;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::MetricsSessionRequest::MetricsSessionRequest()   {
}
