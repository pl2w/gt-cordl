#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MultiplayerServerSummary.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MultiplayerServerSummary_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ConnectedPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MultiplayerServerSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MultiplayerServerSummary::*)()>(&::PlayFab::MultiplayerModels::MultiplayerServerSummary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_ConnectedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>* const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_ConnectedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectedPlayers;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_ConnectedPlayers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectedPlayers = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_LastStateTransitionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastStateTransitionTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_LastStateTransitionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastStateTransitionTime;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_LastStateTransitionTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastStateTransitionTime = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_ServerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_ServerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerId;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_ServerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_State(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_VmId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_get_VmId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr void PlayFab::MultiplayerModels::MultiplayerServerSummary::__cordl_internal_set_VmId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmId = value;
}
inline void PlayFab::MultiplayerModels::MultiplayerServerSummary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MultiplayerServerSummary* PlayFab::MultiplayerModels::MultiplayerServerSummary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MultiplayerServerSummary::MultiplayerServerSummary()   {
}
