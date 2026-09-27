#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListQosServersResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListQosServersResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__QosServer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListQosServersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListQosServersResponse::*)()>(&::PlayFab::MultiplayerModels::ListQosServersResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListQosServersResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_QosServers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QosServers;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>* const& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_QosServers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QosServers;
}
constexpr void PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_set_QosServers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QosServers = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListQosServersResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListQosServersResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListQosServersResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListQosServersResponse* PlayFab::MultiplayerModels::ListQosServersResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListQosServersResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListQosServersResponse::ListQosServersResponse()   {
}
