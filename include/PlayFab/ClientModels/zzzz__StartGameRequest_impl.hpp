#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartGameRequest.hpp"
#include "PlayFab/ClientModels/zzzz__Region_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__StartGameRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::StartGameRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::StartGameRequest::*)()>(&::PlayFab::ClientModels::StartGameRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartGameRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_BuildVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_BuildVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_BuildVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_CustomCommandLineData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomCommandLineData;
}
constexpr ::StringW const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_CustomCommandLineData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomCommandLineData;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_CustomCommandLineData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomCommandLineData = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_GameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr ::StringW const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_GameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_GameMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameMode = value;
}
constexpr ::PlayFab::ClientModels::Region& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::PlayFab::ClientModels::Region const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_Region(::PlayFab::ClientModels::Region  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_StatisticName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr ::StringW const& PlayFab::ClientModels::StartGameRequest::__cordl_internal_get_StatisticName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticName;
}
constexpr void PlayFab::ClientModels::StartGameRequest::__cordl_internal_set_StatisticName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticName = value;
}
inline void PlayFab::ClientModels::StartGameRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartGameRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::StartGameRequest* PlayFab::ClientModels::StartGameRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::StartGameRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::StartGameRequest::StartGameRequest()   {
}
