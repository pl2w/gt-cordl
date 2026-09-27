#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameOtherUrlsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameOtherUrlsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameOtherUrlsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameOtherUrlsObject::*)(::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::GameOtherUrlsObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fecb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameOtherUrlsObject::_ctor(::StringW  label, ::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, label, url);
}
// Ctor Parameters [CppParam { name: "Label", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameOtherUrlsObject::GameOtherUrlsObject(::StringW  Label, ::StringW  Url) noexcept  {
this->Label = Label;
this->Url = Url;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameOtherUrlsObject::GameOtherUrlsObject()   {
}
