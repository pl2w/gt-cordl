#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CreateSharedGroupRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CreateSharedGroupRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CreateSharedGroupRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CreateSharedGroupRequest::*)()>(&::PlayFab::ClientModels::CreateSharedGroupRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CreateSharedGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CreateSharedGroupRequest::__cordl_internal_get_SharedGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr ::StringW const& PlayFab::ClientModels::CreateSharedGroupRequest::__cordl_internal_get_SharedGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr void PlayFab::ClientModels::CreateSharedGroupRequest::__cordl_internal_set_SharedGroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedGroupId = value;
}
inline void PlayFab::ClientModels::CreateSharedGroupRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CreateSharedGroupRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CreateSharedGroupRequest* PlayFab::ClientModels::CreateSharedGroupRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CreateSharedGroupRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CreateSharedGroupRequest::CreateSharedGroupRequest()   {
}
