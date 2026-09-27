#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterPlayFabUserResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabLoginResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RegisterPlayFabUserResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__EntityTokenResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserSettings_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RegisterPlayFabUserResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RegisterPlayFabUserResult::*)()>(&::PlayFab::ClientModels::RegisterPlayFabUserResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterPlayFabUserResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::EntityTokenResponse*& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::PlayFab::ClientModels::EntityTokenResponse* const& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_set_EntityToken(::PlayFab::ClientModels::EntityTokenResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_SessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_SessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr void PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_set_SessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionTicket = value;
}
constexpr ::PlayFab::ClientModels::UserSettings*& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_SettingsForUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsForUser;
}
constexpr ::PlayFab::ClientModels::UserSettings* const& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_SettingsForUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsForUser;
}
constexpr void PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_set_SettingsForUser(::PlayFab::ClientModels::UserSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SettingsForUser = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::ClientModels::RegisterPlayFabUserResult::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
inline void PlayFab::ClientModels::RegisterPlayFabUserResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterPlayFabUserResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RegisterPlayFabUserResult* PlayFab::ClientModels::RegisterPlayFabUserResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RegisterPlayFabUserResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RegisterPlayFabUserResult::RegisterPlayFabUserResult()   {
}
