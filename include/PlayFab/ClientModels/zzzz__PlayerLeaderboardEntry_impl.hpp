#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PlayerLeaderboardEntry.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerLeaderboardEntry_def.hpp"
#include "PlayFab/ClientModels/zzzz__PlayerProfileModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PlayerLeaderboardEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PlayerLeaderboardEntry::*)()>(&::PlayFab::ClientModels::PlayerLeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr int32_t& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr int32_t const& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr void PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_set_Position(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Position = value;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel*& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr ::PlayFab::ClientModels::PlayerProfileModel* const& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr void PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_set_Profile(::PlayFab::ClientModels::PlayerProfileModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Profile = value;
}
constexpr int32_t& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_StatValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatValue;
}
constexpr int32_t const& PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_get_StatValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatValue;
}
constexpr void PlayFab::ClientModels::PlayerLeaderboardEntry::__cordl_internal_set_StatValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatValue = value;
}
inline void PlayFab::ClientModels::PlayerLeaderboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PlayerLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PlayerLeaderboardEntry* PlayFab::ClientModels::PlayerLeaderboardEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PlayerLeaderboardEntry*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PlayerLeaderboardEntry::PlayerLeaderboardEntry()   {
}
