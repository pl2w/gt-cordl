#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromSteamIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromSteamIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::__cordl_internal_get_SteamStringIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamStringIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::__cordl_internal_get_SteamStringIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamStringIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::__cordl_internal_set_SteamStringIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamStringIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest()   {
}
