#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromPSNAccountIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromPSNAccountIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_get_IssuerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IssuerId;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_get_IssuerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IssuerId;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_set_IssuerId(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IssuerId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_get_PSNAccountIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNAccountIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_get_PSNAccountIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PSNAccountIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::__cordl_internal_set_PSNAccountIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PSNAccountIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest()   {
}
