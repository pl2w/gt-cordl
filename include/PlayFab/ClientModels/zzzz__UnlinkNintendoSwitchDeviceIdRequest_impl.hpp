#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkNintendoSwitchDeviceIdRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkNintendoSwitchDeviceIdRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::*)()>(&::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::__cordl_internal_get_NintendoSwitchDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::__cordl_internal_get_NintendoSwitchDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceId;
}
constexpr void PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::__cordl_internal_set_NintendoSwitchDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NintendoSwitchDeviceId = value;
}
inline void PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest* PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest()   {
}
