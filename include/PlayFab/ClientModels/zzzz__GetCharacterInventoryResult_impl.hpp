#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterInventoryResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetCharacterInventoryResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "PlayFab/ClientModels/zzzz__VirtualCurrencyRechargeTime_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetCharacterInventoryResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetCharacterInventoryResult::*)()>(&::PlayFab::ClientModels::GetCharacterInventoryResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterInventoryResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_Inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_Inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Inventory;
}
constexpr void PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_set_Inventory(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Inventory = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_VirtualCurrencyRechargeTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyRechargeTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>* const& PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_get_VirtualCurrencyRechargeTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyRechargeTimes;
}
constexpr void PlayFab::ClientModels::GetCharacterInventoryResult::__cordl_internal_set_VirtualCurrencyRechargeTimes(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::VirtualCurrencyRechargeTime*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyRechargeTimes = value;
}
inline void PlayFab::ClientModels::GetCharacterInventoryResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterInventoryResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetCharacterInventoryResult* PlayFab::ClientModels::GetCharacterInventoryResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetCharacterInventoryResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetCharacterInventoryResult::GetCharacterInventoryResult()   {
}
