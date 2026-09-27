#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromKongregateIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromKongregateIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::__cordl_internal_get_KongregateIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::__cordl_internal_get_KongregateIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KongregateIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::__cordl_internal_set_KongregateIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KongregateIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest()   {
}
