#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListMultiplayerServersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListMultiplayerServersRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListMultiplayerServersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListMultiplayerServersRequest::*)()>(&::PlayFab::MultiplayerModels::ListMultiplayerServersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_set_PageSize(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListMultiplayerServersRequest::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListMultiplayerServersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListMultiplayerServersRequest* PlayFab::MultiplayerModels::ListMultiplayerServersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListMultiplayerServersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListMultiplayerServersRequest::ListMultiplayerServersRequest()   {
}
