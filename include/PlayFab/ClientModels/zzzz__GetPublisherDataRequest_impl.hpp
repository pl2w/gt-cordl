#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPublisherDataRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPublisherDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPublisherDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPublisherDataRequest::*)()>(&::PlayFab::ClientModels::GetPublisherDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPublisherDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPublisherDataRequest::__cordl_internal_get_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPublisherDataRequest::__cordl_internal_get_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr void PlayFab::ClientModels::GetPublisherDataRequest::__cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Keys = value;
}
inline void PlayFab::ClientModels::GetPublisherDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPublisherDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPublisherDataRequest* PlayFab::ClientModels::GetPublisherDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPublisherDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPublisherDataRequest::GetPublisherDataRequest()   {
}
