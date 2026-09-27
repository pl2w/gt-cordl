#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ItchioAuthenticationRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ItchioAuthenticationRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::*)(::StringW, bool, ::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fe90d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::*)()>(&::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9fe9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>();
}
inline void Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::_ctor(::StringW  itchio_token, bool  terms_agreed, ::StringW  email, int64_t  date_expires)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, itchio_token, terms_agreed, email, date_expires);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ItchioToken", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TermsAgreed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Email", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::ItchioAuthenticationRequest(::StringW  ItchioToken, bool  TermsAgreed, ::StringW  Email, int64_t  DateExpires) noexcept  {
this->ItchioToken = ItchioToken;
this->TermsAgreed = TermsAgreed;
this->Email = Email;
this->DateExpires = DateExpires;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ItchioAuthenticationRequest::ItchioAuthenticationRequest()   {
}
