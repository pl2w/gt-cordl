#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdPlacementDetails.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AdPlacementDetails_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AdPlacementDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AdPlacementDetails::*)()>(&::PlayFab::ClientModels::AdPlacementDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdPlacementDetails*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementId;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_PlacementId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementName;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementName;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_PlacementName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementName = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementViewsRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsRemaining;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementViewsRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsRemaining;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_PlacementViewsRemaining(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementViewsRemaining = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementViewsResetMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsResetMinutes;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_PlacementViewsResetMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlacementViewsResetMinutes;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_PlacementViewsResetMinutes(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlacementViewsResetMinutes = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardAssetUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardAssetUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardAssetUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardAssetUrl;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_RewardAssetUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardAssetUrl = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardDescription;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardDescription;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_RewardDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardDescription = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardId;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardId;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_RewardId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardName;
}
constexpr ::StringW const& PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_get_RewardName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RewardName;
}
constexpr void PlayFab::ClientModels::AdPlacementDetails::__cordl_internal_set_RewardName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RewardName = value;
}
inline void PlayFab::ClientModels::AdPlacementDetails::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdPlacementDetails*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AdPlacementDetails* PlayFab::ClientModels::AdPlacementDetails::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AdPlacementDetails*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AdPlacementDetails::AdPlacementDetails()   {
}
