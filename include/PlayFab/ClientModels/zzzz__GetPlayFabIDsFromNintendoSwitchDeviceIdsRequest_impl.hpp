#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::__cordl_internal_get_NintendoSwitchDeviceIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::__cordl_internal_get_NintendoSwitchDeviceIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NintendoSwitchDeviceIds;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::__cordl_internal_set_NintendoSwitchDeviceIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NintendoSwitchDeviceIds = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest()   {
}
