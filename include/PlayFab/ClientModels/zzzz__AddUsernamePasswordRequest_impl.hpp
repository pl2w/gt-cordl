#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddUsernamePasswordRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddUsernamePasswordRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddUsernamePasswordRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddUsernamePasswordRequest::*)()>(&::PlayFab::ClientModels::AddUsernamePasswordRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddUsernamePasswordRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::StringW& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Password = value;
}
constexpr ::StringW& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::ClientModels::AddUsernamePasswordRequest::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
inline void PlayFab::ClientModels::AddUsernamePasswordRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddUsernamePasswordRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddUsernamePasswordRequest* PlayFab::ClientModels::AddUsernamePasswordRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddUsernamePasswordRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddUsernamePasswordRequest::AddUsernamePasswordRequest()   {
}
