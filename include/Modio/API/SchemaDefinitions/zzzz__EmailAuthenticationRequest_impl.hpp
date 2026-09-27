#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EmailAuthenticationRequest.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EmailAuthenticationRequest_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::*)(::StringW)>(&::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fe8394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest.GetBodyParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* (::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::*)()>(&::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::GetBodyParameters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9fe839c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EmailAuthenticationRequest::setStaticF__bodyParameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EmailAuthenticationRequest::getStaticF__bodyParameters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "_bodyParameters", ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>();
}
inline void Modio::API::SchemaDefinitions::EmailAuthenticationRequest::_ctor(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, email);
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>* Modio::API::SchemaDefinitions::EmailAuthenticationRequest::GetBodyParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmailAuthenticationRequest>(),
                        {"GetBodyParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::System::Object*>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Modio::API::IApiRequest"
constexpr  Modio::API::SchemaDefinitions::EmailAuthenticationRequest::operator ::Modio::API::IApiRequest*()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Modio::API::IApiRequest"
constexpr ::Modio::API::IApiRequest* Modio::API::SchemaDefinitions::EmailAuthenticationRequest::i___Modio__API__IApiRequest()  {
return static_cast<::Modio::API::IApiRequest*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Email", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::EmailAuthenticationRequest(::StringW  Email) noexcept  {
this->Email = Email;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EmailAuthenticationRequest::EmailAuthenticationRequest()   {
}
