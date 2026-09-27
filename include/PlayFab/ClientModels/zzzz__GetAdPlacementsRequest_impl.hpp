#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAdPlacementsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetAdPlacementsRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__NameIdentifier_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetAdPlacementsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetAdPlacementsRequest::*)()>(&::PlayFab::ClientModels::GetAdPlacementsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAdPlacementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_get_AppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_get_AppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppId;
}
constexpr void PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_set_AppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppId = value;
}
constexpr ::PlayFab::ClientModels::NameIdentifier*& PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_get_Identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Identifier;
}
constexpr ::PlayFab::ClientModels::NameIdentifier* const& PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_get_Identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Identifier;
}
constexpr void PlayFab::ClientModels::GetAdPlacementsRequest::__cordl_internal_set_Identifier(::PlayFab::ClientModels::NameIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Identifier = value;
}
inline void PlayFab::ClientModels::GetAdPlacementsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAdPlacementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetAdPlacementsRequest* PlayFab::ClientModels::GetAdPlacementsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetAdPlacementsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetAdPlacementsRequest::GetAdPlacementsRequest()   {
}
