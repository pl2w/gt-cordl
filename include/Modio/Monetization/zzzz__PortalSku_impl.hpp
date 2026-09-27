#pragma once
// IWYU pragma private; include "Modio/Monetization/PortalSku.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_impl.hpp"
#include "Modio/Monetization/zzzz__PortalSku_def.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
//  Writing Method size for method: ::Modio::Monetization::PortalSku._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Monetization::PortalSku::*)(::GlobalNamespace::ModioAPI_Portal, ::StringW, ::StringW, ::StringW, int32_t)>(&::Modio::Monetization::PortalSku::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa0268b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Monetization::PortalSku>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ModioAPI_Portal>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Monetization::PortalSku::_ctor(::GlobalNamespace::ModioAPI_Portal  portal, ::StringW  sku, ::StringW  name, ::StringW  formattedPrice, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Monetization::PortalSku>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ModioAPI_Portal>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, portal, sku, name, formattedPrice, value);
}
// Ctor Parameters [CppParam { name: "Portal", ty: "::GlobalNamespace::ModioAPI_Portal", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sku", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FormattedPrice", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Monetization::PortalSku::PortalSku(::GlobalNamespace::ModioAPI_Portal  Portal, ::StringW  Sku, ::StringW  Name, ::StringW  FormattedPrice, int32_t  Value) noexcept  {
this->Portal = Portal;
this->Sku = Sku;
this->Name = Name;
this->FormattedPrice = FormattedPrice;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::Modio::Monetization::PortalSku::PortalSku()   {
}
