#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabLoginResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__EntityTokenResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoResultPayload_def.hpp"
#include "PlayFab/ClientModels/zzzz__TreatmentAssignment_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserSettings_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginResult::*)()>(&::PlayFab::ClientModels::LoginResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::EntityTokenResponse*& PlayFab::ClientModels::LoginResult::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::PlayFab::ClientModels::EntityTokenResponse* const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_EntityToken(::PlayFab::ClientModels::EntityTokenResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*& PlayFab::ClientModels::LoginResult::__cordl_internal_get_InfoResultPayload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoResultPayload;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_InfoResultPayload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoResultPayload;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_InfoResultPayload(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoResultPayload = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::LoginResult::__cordl_internal_get_LastLoginTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLoginTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_LastLoginTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLoginTime;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_LastLoginTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastLoginTime = value;
}
constexpr bool& PlayFab::ClientModels::LoginResult::__cordl_internal_get_NewlyCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewlyCreated;
}
constexpr bool const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_NewlyCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewlyCreated;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_NewlyCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewlyCreated = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginResult::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginResult::__cordl_internal_get_SessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_SessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionTicket;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_SessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionTicket = value;
}
constexpr ::PlayFab::ClientModels::UserSettings*& PlayFab::ClientModels::LoginResult::__cordl_internal_get_SettingsForUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsForUser;
}
constexpr ::PlayFab::ClientModels::UserSettings* const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_SettingsForUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SettingsForUser;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_SettingsForUser(::PlayFab::ClientModels::UserSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SettingsForUser = value;
}
constexpr ::PlayFab::ClientModels::TreatmentAssignment*& PlayFab::ClientModels::LoginResult::__cordl_internal_get_TreatmentAssignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreatmentAssignment;
}
constexpr ::PlayFab::ClientModels::TreatmentAssignment* const& PlayFab::ClientModels::LoginResult::__cordl_internal_get_TreatmentAssignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreatmentAssignment;
}
constexpr void PlayFab::ClientModels::LoginResult::__cordl_internal_set_TreatmentAssignment(::PlayFab::ClientModels::TreatmentAssignment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TreatmentAssignment = value;
}
inline void PlayFab::ClientModels::LoginResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginResult* PlayFab::ClientModels::LoginResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginResult::LoginResult()   {
}
