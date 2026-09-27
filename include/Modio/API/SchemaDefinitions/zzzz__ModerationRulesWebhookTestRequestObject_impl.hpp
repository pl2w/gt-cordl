#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModerationRulesWebhookTestRequestObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModerationRulesWebhookTestRequestObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject::*)(::StringW)>(&::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fed4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject::_ctor(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, url);
}
// Ctor Parameters [CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject::ModerationRulesWebhookTestRequestObject(::StringW  Url) noexcept  {
this->Url = Url;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject::ModerationRulesWebhookTestRequestObject()   {
}
