#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTokenPackObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTokenPackObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameTokenPackObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameTokenPackObject::*)(int64_t, int64_t, int64_t, int64_t, ::StringW, ::StringW, ::StringW, ::StringW, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::GameTokenPackObject::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9fecd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTokenPackObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameTokenPackObject::_ctor(int64_t  id, int64_t  token_pack_id, int64_t  price, int64_t  amount, ::StringW  portal, ::StringW  sku, ::StringW  name, ::StringW  description, int64_t  date_added, int64_t  date_updated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameTokenPackObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, token_pack_id, price, amount, portal, sku, name, description, date_added, date_updated);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenPackId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Price", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Portal", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Sku", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameTokenPackObject::GameTokenPackObject(int64_t  Id, int64_t  TokenPackId, int64_t  Price, int64_t  Amount, ::StringW  Portal, ::StringW  Sku, ::StringW  Name, ::StringW  Description, int64_t  DateAdded, int64_t  DateUpdated) noexcept  {
this->Id = Id;
this->TokenPackId = TokenPackId;
this->Price = Price;
this->Amount = Amount;
this->Portal = Portal;
this->Sku = Sku;
this->Name = Name;
this->Description = Description;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameTokenPackObject::GameTokenPackObject()   {
}
