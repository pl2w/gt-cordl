#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/RefundObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__RefundObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::RefundObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::RefundObject::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, ::StringW, ::StringW, ::Newtonsoft::Json::Linq::JObject*, int64_t)>(&::Modio::API::SchemaDefinitions::RefundObject::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fee190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::RefundObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::RefundObject::_ctor(int64_t  transaction_id, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, int64_t  tax, ::StringW  tax_type, ::StringW  transaction_type, ::Newtonsoft::Json::Linq::JObject*  meta, int64_t  purchase_date)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::RefundObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transaction_id, gross_amount, net_amount, platform_fee, gateway_fee, tax, tax_type, transaction_type, meta, purchase_date);
}
// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tax", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TaxType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Meta", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PurchaseDate", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::RefundObject::RefundObject(int64_t  TransactionId, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, int64_t  Tax, ::StringW  TaxType, ::StringW  TransactionType, ::Newtonsoft::Json::Linq::JObject*  Meta, int64_t  PurchaseDate) noexcept  {
this->TransactionId = TransactionId;
this->GrossAmount = GrossAmount;
this->NetAmount = NetAmount;
this->PlatformFee = PlatformFee;
this->GatewayFee = GatewayFee;
this->Tax = Tax;
this->TaxType = TaxType;
this->TransactionType = TransactionType;
this->Meta = Meta;
this->PurchaseDate = PurchaseDate;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::RefundObject::RefundObject()   {
}
