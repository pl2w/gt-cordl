#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RequestMultiplayerServerRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__RequestMultiplayerServerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildAliasParams_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::*)()>(&::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::BuildAliasParams*& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_BuildAliasParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildAliasParams;
}
constexpr ::PlayFab::MultiplayerModels::BuildAliasParams* const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_BuildAliasParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildAliasParams;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_BuildAliasParams(::PlayFab::MultiplayerModels::BuildAliasParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildAliasParams = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_InitialPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialPlayers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_InitialPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialPlayers;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_InitialPlayers(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_PreferredRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRegions;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_PreferredRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRegions;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_PreferredRegions(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreferredRegions = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_SessionCookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionCookie;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_SessionCookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionCookie;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_SessionCookie(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionCookie = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::__cordl_internal_set_SessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
inline void PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest* PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest::RequestMultiplayerServerRequest()   {
}
