#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteRemoteUserRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DeleteRemoteUserRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DeleteRemoteUserRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DeleteRemoteUserRequest::*)()>(&::PlayFab::MultiplayerModels::DeleteRemoteUserRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_VmId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_get_VmId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr void PlayFab::MultiplayerModels::DeleteRemoteUserRequest::__cordl_internal_set_VmId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmId = value;
}
inline void PlayFab::MultiplayerModels::DeleteRemoteUserRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DeleteRemoteUserRequest* PlayFab::MultiplayerModels::DeleteRemoteUserRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DeleteRemoteUserRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DeleteRemoteUserRequest::DeleteRemoteUserRequest()   {
}
