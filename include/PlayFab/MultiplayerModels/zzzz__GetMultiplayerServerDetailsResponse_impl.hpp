#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerServerDetailsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMultiplayerServerDetailsResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ConnectedPlayer_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::*)()>(&::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_ConnectedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>* const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_ConnectedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedPlayers;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_ConnectedPlayers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectedPlayers = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_FQDN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FQDN;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_FQDN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FQDN;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_FQDN(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FQDN = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_IPV4Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_IPV4Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPV4Address;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_IPV4Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPV4Address = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_LastStateTransitionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastStateTransitionTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_LastStateTransitionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastStateTransitionTime;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_LastStateTransitionTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastStateTransitionTime = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_Ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_Ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ports;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ports = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_ServerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_ServerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_ServerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_State(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_VmId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_get_VmId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::__cordl_internal_set_VmId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmId = value;
}
inline void PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse* PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse()   {
}
