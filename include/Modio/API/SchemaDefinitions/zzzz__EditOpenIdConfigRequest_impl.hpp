#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EditOpenIdConfigRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EditOpenIdConfigRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fe812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::*)()>(&::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9fe818c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>();
}
inline void Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::_ctor(::StringW  jwk_url, ::StringW  aud, ::StringW  display_name_claim, ::StringW  avatar_url_claim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, jwk_url, aud, display_name_claim, avatar_url_claim);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "JwkUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Aud", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisplayNameClaim", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AvatarUrlClaim", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::EditOpenIdConfigRequest(::StringW  JwkUrl, ::StringW  Aud, ::StringW  DisplayNameClaim, ::StringW  AvatarUrlClaim) noexcept  {
this->JwkUrl = JwkUrl;
this->Aud = Aud;
this->DisplayNameClaim = DisplayNameClaim;
this->AvatarUrlClaim = AvatarUrlClaim;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EditOpenIdConfigRequest::EditOpenIdConfigRequest()   {
}
