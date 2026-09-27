#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromGoogleIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromGoogleIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::__cordl_internal_get_GoogleIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::__cordl_internal_get_GoogleIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::__cordl_internal_set_GoogleIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest()   {
}
