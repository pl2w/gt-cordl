#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TransactionObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LineItemsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaymentMethodObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TransactionObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LineItemsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaymentMethodObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::TransactionObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::TransactionObject::*)(int64_t, ::StringW, ::StringW, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, ::StringW, ::StringW, int64_t, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>, ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>)>(&::Modio::API::SchemaDefinitions::TransactionObject::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fee660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TransactionObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::TransactionObject::_ctor(int64_t  id, ::StringW  gateway_uuid, ::StringW  gateway_name, int64_t  account_id, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, int64_t  tax, ::StringW  tax_type, ::StringW  currency, int64_t  tokens, ::StringW  transaction_type, ::StringW  monetization_type, ::StringW  purchase_date, ::StringW  created_at, ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>  payment_method, ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>  line_items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TransactionObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, gateway_uuid, gateway_name, account_id, gross_amount, net_amount, platform_fee, gateway_fee, tax, tax_type, currency, tokens, transaction_type, monetization_type, purchase_date, created_at, payment_method, line_items);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayUuid", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AccountId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tax", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TaxType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Currency", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tokens", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PurchaseDate", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CreatedAt", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PaymentMethod", ty: "::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LineItems", ty: "::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::TransactionObject::TransactionObject(int64_t  Id, ::StringW  GatewayUuid, ::StringW  GatewayName, int64_t  AccountId, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, int64_t  Tax, ::StringW  TaxType, ::StringW  Currency, int64_t  Tokens, ::StringW  TransactionType, ::StringW  MonetizationType, ::StringW  PurchaseDate, ::StringW  CreatedAt, ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>  PaymentMethod, ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>  LineItems) noexcept  {
this->Id = Id;
this->GatewayUuid = GatewayUuid;
this->GatewayName = GatewayName;
this->AccountId = AccountId;
this->GrossAmount = GrossAmount;
this->NetAmount = NetAmount;
this->PlatformFee = PlatformFee;
this->GatewayFee = GatewayFee;
this->Tax = Tax;
this->TaxType = TaxType;
this->Currency = Currency;
this->Tokens = Tokens;
this->TransactionType = TransactionType;
this->MonetizationType = MonetizationType;
this->PurchaseDate = PurchaseDate;
this->CreatedAt = CreatedAt;
this->PaymentMethod = PaymentMethod;
this->LineItems = LineItems;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::TransactionObject::TransactionObject()   {
}
