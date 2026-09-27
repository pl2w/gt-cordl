#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PaymentMethodObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaymentMethodObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::PaymentMethodObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::PaymentMethodObject::*)(::StringW, ::StringW, int64_t, ::StringW)>(&::Modio::API::SchemaDefinitions::PaymentMethodObject::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fee018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PaymentMethodObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::PaymentMethodObject::_ctor(::StringW  name, ::StringW  id, int64_t  amount, ::StringW  display_amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PaymentMethodObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, id, amount, display_amount);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisplayAmount", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::PaymentMethodObject::PaymentMethodObject(::StringW  Name, ::StringW  Id, int64_t  Amount, ::StringW  DisplayAmount) noexcept  {
this->Name = Name;
this->Id = Id;
this->Amount = Amount;
this->DisplayAmount = DisplayAmount;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::PaymentMethodObject::PaymentMethodObject()   {
}
