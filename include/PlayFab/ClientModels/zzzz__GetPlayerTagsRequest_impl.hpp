#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTagsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerTagsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerTagsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerTagsRequest::*)()>(&::PlayFab::ClientModels::GetPlayerTagsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_get_Namespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Namespace;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_get_Namespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Namespace;
}
constexpr void PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_set_Namespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Namespace = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetPlayerTagsRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GetPlayerTagsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerTagsRequest* PlayFab::ClientModels::GetPlayerTagsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerTagsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerTagsRequest::GetPlayerTagsRequest()   {
}
