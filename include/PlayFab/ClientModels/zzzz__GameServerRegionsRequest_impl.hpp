#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameServerRegionsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GameServerRegionsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GameServerRegionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GameServerRegionsRequest::*)()>(&::PlayFab::ClientModels::GameServerRegionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameServerRegionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_get_BuildVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_get_BuildVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildVersion;
}
constexpr void PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_set_BuildVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::GameServerRegionsRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::GameServerRegionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameServerRegionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GameServerRegionsRequest* PlayFab::ClientModels::GameServerRegionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GameServerRegionsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GameServerRegionsRequest::GameServerRegionsRequest()   {
}
