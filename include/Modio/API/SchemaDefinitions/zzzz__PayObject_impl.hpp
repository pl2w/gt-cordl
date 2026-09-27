#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PayObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PayObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::PayObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::PayObject::*)(int64_t, ::StringW, int64_t, int64_t, int64_t, int64_t, ::StringW, ::Newtonsoft::Json::Linq::JArray*, int64_t, ::StringW, int64_t, int64_t, ::StringW, ::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::API::SchemaDefinitions::PayObject::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9fee06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PayObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::PayObject::_ctor(int64_t  transaction_id, ::StringW  gateway_uuid, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, ::StringW  transaction_type, ::Newtonsoft::Json::Linq::JArray*  meta, int64_t  purchase_date, ::StringW  wallet_type, int64_t  balance, int64_t  deficit, ::StringW  payment_method_id, ::Modio::API::SchemaDefinitions::ModObject  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PayObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transaction_id, gateway_uuid, gross_amount, net_amount, platform_fee, gateway_fee, transaction_type, meta, purchase_date, wallet_type, balance, deficit, payment_method_id, mod);
}
// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayUuid", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Meta", ty: "::Newtonsoft::Json::Linq::JArray*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PurchaseDate", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WalletType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Balance", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Deficit", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PaymentMethodId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mod", ty: "::Modio::API::SchemaDefinitions::ModObject", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::PayObject::PayObject(int64_t  TransactionId, ::StringW  GatewayUuid, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, ::StringW  TransactionType, ::Newtonsoft::Json::Linq::JArray*  Meta, int64_t  PurchaseDate, ::StringW  WalletType, int64_t  Balance, int64_t  Deficit, ::StringW  PaymentMethodId, ::Modio::API::SchemaDefinitions::ModObject  Mod) noexcept  {
this->TransactionId = TransactionId;
this->GatewayUuid = GatewayUuid;
this->GrossAmount = GrossAmount;
this->NetAmount = NetAmount;
this->PlatformFee = PlatformFee;
this->GatewayFee = GatewayFee;
this->TransactionType = TransactionType;
this->Meta = Meta;
this->PurchaseDate = PurchaseDate;
this->WalletType = WalletType;
this->Balance = Balance;
this->Deficit = Deficit;
this->PaymentMethodId = PaymentMethodId;
this->Mod = Mod;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::PayObject::PayObject()   {
}
