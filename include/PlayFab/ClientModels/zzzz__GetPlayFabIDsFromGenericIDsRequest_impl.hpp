#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromGenericIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromGenericIDsRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GenericServiceId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*& PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::__cordl_internal_get_GenericIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericIDs;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>* const& PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::__cordl_internal_get_GenericIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::__cordl_internal_set_GenericIDs(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenericIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest()   {
}
