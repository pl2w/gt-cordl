#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticVersionsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerStatisticVersionsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerStatisticVersion_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerStatisticVersionsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerStatisticVersionsResult::*)()>(&::PlayFab::ClientModels::GetPlayerStatisticVersionsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticVersionsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*& PlayFab::ClientModels::GetPlayerStatisticVersionsResult::__cordl_internal_get_StatisticVersions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticVersions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>* const& PlayFab::ClientModels::GetPlayerStatisticVersionsResult::__cordl_internal_get_StatisticVersions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticVersions;
}
constexpr void PlayFab::ClientModels::GetPlayerStatisticVersionsResult::__cordl_internal_set_StatisticVersions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticVersions = value;
}
inline void PlayFab::ClientModels::GetPlayerStatisticVersionsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerStatisticVersionsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerStatisticVersionsResult* PlayFab::ClientModels::GetPlayerStatisticVersionsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerStatisticVersionsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult()   {
}
