#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdRewardResults.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AdRewardResults_def.hpp"
#include "PlayFab/ClientModels/zzzz__AdRewardItemGranted_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AdRewardResults._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AdRewardResults::*)()>(&::PlayFab::ClientModels::AdRewardResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdRewardResults*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_GrantedItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedItems;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>* const& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_GrantedItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedItems;
}
constexpr void PlayFab::ClientModels::AdRewardResults::__cordl_internal_set_GrantedItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdRewardItemGranted*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrantedItems = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_GrantedVirtualCurrencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedVirtualCurrencies;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_GrantedVirtualCurrencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedVirtualCurrencies;
}
constexpr void PlayFab::ClientModels::AdRewardResults::__cordl_internal_set_GrantedVirtualCurrencies(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrantedVirtualCurrencies = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_IncrementedStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncrementedStatistics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::AdRewardResults::__cordl_internal_get_IncrementedStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncrementedStatistics;
}
constexpr void PlayFab::ClientModels::AdRewardResults::__cordl_internal_set_IncrementedStatistics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncrementedStatistics = value;
}
inline void PlayFab::ClientModels::AdRewardResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdRewardResults*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AdRewardResults* PlayFab::ClientModels::AdRewardResults::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AdRewardResults*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AdRewardResults::AdRewardResults()   {
}
