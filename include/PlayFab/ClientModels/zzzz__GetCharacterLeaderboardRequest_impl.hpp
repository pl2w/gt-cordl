#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterLeaderboardRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetCharacterLeaderboardRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetCharacterLeaderboardRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetCharacterLeaderboardRequest::*)()>(&::PlayFab::ClientModels::GetCharacterLeaderboardRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterLeaderboardRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_CharacterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_CharacterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr void PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_set_CharacterType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterType = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_MaxResultsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_MaxResultsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxResultsCount;
}
constexpr void PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxResultsCount = value;
}
constexpr int32_t& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_StartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPosition;
}
constexpr int32_t const& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_StartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartPosition;
}
constexpr void PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_set_StartPosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartPosition = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::GetCharacterLeaderboardRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
inline void PlayFab::ClientModels::GetCharacterLeaderboardRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterLeaderboardRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetCharacterLeaderboardRequest* PlayFab::ClientModels::GetCharacterLeaderboardRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetCharacterLeaderboardRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest()   {
}
