#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CurrentGamesRequest.hpp"
#include "PlayFab/ClientModels/zzzz__Region_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CurrentGamesRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__CollectionFilter_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CurrentGamesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CurrentGamesRequest::*)()>(&::PlayFab::ClientModels::CurrentGamesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CurrentGamesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_BuildVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_BuildVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr void PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_set_BuildVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_GameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr ::StringW const& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_GameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr void PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_set_GameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameMode = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region>& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Region> const& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_set_Region(::System::Nullable_1<::PlayFab::ClientModels::Region>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
constexpr ::PlayFab::ClientModels::CollectionFilter*& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_TagFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagFilter;
}
constexpr ::PlayFab::ClientModels::CollectionFilter* const& PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_get_TagFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagFilter;
}
constexpr void PlayFab::ClientModels::CurrentGamesRequest::__cordl_internal_set_TagFilter(::PlayFab::ClientModels::CollectionFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TagFilter = value;
}
inline void PlayFab::ClientModels::CurrentGamesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CurrentGamesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CurrentGamesRequest* PlayFab::ClientModels::CurrentGamesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CurrentGamesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CurrentGamesRequest::CurrentGamesRequest()   {
}
