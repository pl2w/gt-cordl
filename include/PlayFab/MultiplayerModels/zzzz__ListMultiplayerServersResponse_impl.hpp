#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListMultiplayerServersResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListMultiplayerServersResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MultiplayerServerSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListMultiplayerServersResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListMultiplayerServersResponse::*)()>(&::PlayFab::MultiplayerModels::ListMultiplayerServersResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>*& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_MultiplayerServerSummaries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerSummaries;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>* const& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_MultiplayerServerSummaries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MultiplayerServerSummaries;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_set_MultiplayerServerSummaries(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MultiplayerServerSummary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MultiplayerServerSummaries = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListMultiplayerServersResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListMultiplayerServersResponse* PlayFab::MultiplayerModels::ListMultiplayerServersResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListMultiplayerServersResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListMultiplayerServersResponse::ListMultiplayerServersResponse()   {
}
