#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EntitlementFulfillmentObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EntitlementDetailsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EntitlementFulfillmentObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EntitlementDetailsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject::*)(::StringW, int64_t, ::StringW, bool, int64_t, ::Modio::API::SchemaDefinitions::EntitlementDetailsObject)>(&::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fec7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::EntitlementDetailsObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EntitlementFulfillmentObject::_ctor(::StringW  transaction_id, int64_t  transaction_state, ::StringW  sku_id, bool  entitlement_consumed, int64_t  entitlement_type, ::Modio::API::SchemaDefinitions::EntitlementDetailsObject  details)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::EntitlementDetailsObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transaction_id, transaction_state, sku_id, entitlement_consumed, entitlement_type, details);
}
// Ctor Parameters [CppParam { name: "TransactionId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TransactionState", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkuId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EntitlementConsumed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EntitlementType", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Details", ty: "::Modio::API::SchemaDefinitions::EntitlementDetailsObject", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject::EntitlementFulfillmentObject(::StringW  TransactionId, int64_t  TransactionState, ::StringW  SkuId, bool  EntitlementConsumed, int64_t  EntitlementType, ::Modio::API::SchemaDefinitions::EntitlementDetailsObject  Details) noexcept  {
this->TransactionId = TransactionId;
this->TransactionState = TransactionState;
this->SkuId = SkuId;
this->EntitlementConsumed = EntitlementConsumed;
this->EntitlementType = EntitlementType;
this->Details = Details;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject::EntitlementFulfillmentObject()   {
}
