#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddOrUpdateContactEmailRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddOrUpdateContactEmailRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddOrUpdateContactEmailRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddOrUpdateContactEmailRequest::*)()>(&::PlayFab::ClientModels::AddOrUpdateContactEmailRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddOrUpdateContactEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AddOrUpdateContactEmailRequest::__cordl_internal_get_EmailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr ::StringW const& PlayFab::ClientModels::AddOrUpdateContactEmailRequest::__cordl_internal_get_EmailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr void PlayFab::ClientModels::AddOrUpdateContactEmailRequest::__cordl_internal_set_EmailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmailAddress = value;
}
inline void PlayFab::ClientModels::AddOrUpdateContactEmailRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddOrUpdateContactEmailRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddOrUpdateContactEmailRequest* PlayFab::ClientModels::AddOrUpdateContactEmailRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddOrUpdateContactEmailRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest()   {
}
