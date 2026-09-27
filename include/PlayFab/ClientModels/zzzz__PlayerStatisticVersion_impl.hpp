#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerStatisticVersion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerStatisticVersion_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PlayerStatisticVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PlayerStatisticVersion::*)()>(&::PlayFab::ClientModels::PlayerStatisticVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerStatisticVersion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationTime;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationTime;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_ActivationTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActivationTime = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_DeactivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeactivationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_DeactivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeactivationTime;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_DeactivationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeactivationTime = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ScheduledActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledActivationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ScheduledActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledActivationTime;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_ScheduledActivationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScheduledActivationTime = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ScheduledDeactivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledDeactivationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_ScheduledDeactivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScheduledDeactivationTime;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_ScheduledDeactivationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScheduledDeactivationTime = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr uint32_t& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr uint32_t const& PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::ClientModels::PlayerStatisticVersion::__cordl_internal_set_Version(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::ClientModels::PlayerStatisticVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerStatisticVersion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PlayerStatisticVersion* PlayFab::ClientModels::PlayerStatisticVersion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PlayerStatisticVersion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PlayerStatisticVersion::PlayerStatisticVersion()   {
}
