#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterLeaderboardEntry.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterLeaderboardEntry_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CharacterLeaderboardEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CharacterLeaderboardEntry::*)()>(&::PlayFab::ClientModels::CharacterLeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_CharacterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterName = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_CharacterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_CharacterType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterType = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr int32_t& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr int32_t const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_Position(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Position = value;
}
constexpr int32_t& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_StatValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatValue;
}
constexpr int32_t const& PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_get_StatValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatValue;
}
constexpr void PlayFab::ClientModels::CharacterLeaderboardEntry::__cordl_internal_set_StatValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatValue = value;
}
inline void PlayFab::ClientModels::CharacterLeaderboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterLeaderboardEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CharacterLeaderboardEntry* PlayFab::ClientModels::CharacterLeaderboardEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CharacterLeaderboardEntry*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CharacterLeaderboardEntry::CharacterLeaderboardEntry()   {
}
