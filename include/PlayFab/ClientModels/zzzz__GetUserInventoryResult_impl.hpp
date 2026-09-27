#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserInventoryResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserInventoryResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "PlayFab/ClientModels/zzzz__VirtualCurrencyRechargeTime_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetUserInventoryResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetUserInventoryResult::*)()>(&::PlayFab::ClientModels::GetUserInventoryResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserInventoryResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_Inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_Inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr void PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_set_Inventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Inventory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_VirtualCurrencyRechargeTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyRechargeTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* const& PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_get_VirtualCurrencyRechargeTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyRechargeTimes;
}
constexpr void PlayFab::ClientModels::GetUserInventoryResult::__cordl_internal_set_VirtualCurrencyRechargeTimes(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyRechargeTimes = value;
}
inline void PlayFab::ClientModels::GetUserInventoryResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserInventoryResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetUserInventoryResult* PlayFab::ClientModels::GetUserInventoryResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetUserInventoryResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetUserInventoryResult::GetUserInventoryResult()   {
}
