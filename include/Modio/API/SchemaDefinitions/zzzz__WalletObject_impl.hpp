#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/WalletObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__WalletObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::WalletObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::WalletObject::*)(::StringW, ::StringW, ::StringW, ::StringW, int64_t, int64_t, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::WalletObject::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fee84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::WalletObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::WalletObject::_ctor(::StringW  type, ::StringW  payment_method_id, ::StringW  game_id, ::StringW  currency, int64_t  balance, int64_t  pending_balance, int64_t  deficit, int64_t  monetization_status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::WalletObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, payment_method_id, game_id, currency, balance, pending_balance, deficit, monetization_status);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PaymentMethodId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Currency", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Balance", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PendingBalance", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Deficit", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationStatus", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::WalletObject::WalletObject(::StringW  Type, ::StringW  PaymentMethodId, ::StringW  GameId, ::StringW  Currency, int64_t  Balance, int64_t  PendingBalance, int64_t  Deficit, int64_t  MonetizationStatus) noexcept  {
this->Type = Type;
this->PaymentMethodId = PaymentMethodId;
this->GameId = GameId;
this->Currency = Currency;
this->Balance = Balance;
this->PendingBalance = PendingBalance;
this->Deficit = Deficit;
this->MonetizationStatus = MonetizationStatus;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::WalletObject::WalletObject()   {
}
