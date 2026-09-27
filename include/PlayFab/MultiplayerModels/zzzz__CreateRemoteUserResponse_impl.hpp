#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateRemoteUserResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateRemoteUserResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateRemoteUserResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateRemoteUserResponse::*)()>(&::PlayFab::MultiplayerModels::CreateRemoteUserResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateRemoteUserResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_ExpirationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_ExpirationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr void PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpirationTime = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Password = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::MultiplayerModels::CreateRemoteUserResponse::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
inline void PlayFab::MultiplayerModels::CreateRemoteUserResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateRemoteUserResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateRemoteUserResponse* PlayFab::MultiplayerModels::CreateRemoteUserResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateRemoteUserResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateRemoteUserResponse::CreateRemoteUserResponse()   {
}
