#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MatchmakeRequest.hpp"
#include "PlayFab/ClientModels/zzzz__Region_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__MatchmakeRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__CollectionFilter_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::MatchmakeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::MatchmakeRequest::*)()>(&::PlayFab::ClientModels::MatchmakeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MatchmakeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_BuildVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_BuildVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_BuildVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_GameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_GameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_GameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameMode = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_LobbyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyId;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_LobbyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyId;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_LobbyId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyId = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_StartNewIfNoneFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNewIfNoneFound;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_StartNewIfNoneFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartNewIfNoneFound;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_StartNewIfNoneFound(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartNewIfNoneFound = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr ::PlayFab::ClientModels::CollectionFilter*& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_TagFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagFilter;
}
constexpr ::PlayFab::ClientModels::CollectionFilter* const& PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_get_TagFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagFilter;
}
constexpr void PlayFab::ClientModels::MatchmakeRequest::__cordl_internal_set_TagFilter(::PlayFab::ClientModels::CollectionFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TagFilter = value;
}
inline void PlayFab::ClientModels::MatchmakeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MatchmakeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::MatchmakeRequest* PlayFab::ClientModels::MatchmakeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::MatchmakeRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::MatchmakeRequest::MatchmakeRequest()   {
}
