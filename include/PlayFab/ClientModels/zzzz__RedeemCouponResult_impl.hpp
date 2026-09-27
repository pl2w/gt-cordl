#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RedeemCouponResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RedeemCouponResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RedeemCouponResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RedeemCouponResult::*)()>(&::PlayFab::ClientModels::RedeemCouponResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RedeemCouponResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::RedeemCouponResult::__cordl_internal_get_GrantedItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedItems;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::RedeemCouponResult::__cordl_internal_get_GrantedItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedItems;
}
constexpr void PlayFab::ClientModels::RedeemCouponResult::__cordl_internal_set_GrantedItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrantedItems = value;
}
inline void PlayFab::ClientModels::RedeemCouponResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RedeemCouponResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RedeemCouponResult* PlayFab::ClientModels::RedeemCouponResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RedeemCouponResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RedeemCouponResult::RedeemCouponResult()   {
}
