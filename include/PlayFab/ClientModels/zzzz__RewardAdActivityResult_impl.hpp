#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RewardAdActivityResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RewardAdActivityResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__AdRewardResults_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RewardAdActivityResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RewardAdActivityResult::*)()>(&::PlayFab::ClientModels::RewardAdActivityResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RewardAdActivityResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_AdActivityEventId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdActivityEventId;
}
constexpr ::StringW const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_AdActivityEventId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdActivityEventId;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_AdActivityEventId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdActivityEventId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_DebugResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugResults;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_DebugResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugResults;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_DebugResults(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugResults = value;
}
constexpr ::StringW& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr ::StringW const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_PlacementId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementId = value;
}
constexpr ::StringW& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementName;
}
constexpr ::StringW const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementName;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_PlacementName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementName = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementViewsRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsRemaining;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementViewsRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsRemaining;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_PlacementViewsRemaining(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementViewsRemaining = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementViewsResetMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsResetMinutes;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_PlacementViewsResetMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsResetMinutes;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_PlacementViewsResetMinutes(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementViewsResetMinutes = value;
}
constexpr ::PlayFab::ClientModels::AdRewardResults*& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_RewardResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardResults;
}
constexpr ::PlayFab::ClientModels::AdRewardResults* const& PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_get_RewardResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardResults;
}
constexpr void PlayFab::ClientModels::RewardAdActivityResult::__cordl_internal_set_RewardResults(::PlayFab::ClientModels::AdRewardResults*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardResults = value;
}
inline void PlayFab::ClientModels::RewardAdActivityResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RewardAdActivityResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RewardAdActivityResult* PlayFab::ClientModels::RewardAdActivityResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RewardAdActivityResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RewardAdActivityResult::RewardAdActivityResult()   {
}
