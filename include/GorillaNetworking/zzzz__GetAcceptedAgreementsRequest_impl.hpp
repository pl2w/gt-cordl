#pragma once
// IWYU pragma private; include "GorillaNetworking/GetAcceptedAgreementsRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__GetAcceptedAgreementsRequest_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GetAcceptedAgreementsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GetAcceptedAgreementsRequest::*)()>(&::GorillaNetworking::GetAcceptedAgreementsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GetAcceptedAgreementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GorillaNetworking::GetAcceptedAgreementsRequest::__cordl_internal_get_AgreementKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgreementKeys;
}
constexpr ::ArrayW<::StringW> const& GorillaNetworking::GetAcceptedAgreementsRequest::__cordl_internal_get_AgreementKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AgreementKeys;
}
constexpr void GorillaNetworking::GetAcceptedAgreementsRequest::__cordl_internal_set_AgreementKeys(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AgreementKeys = value;
}
inline void GorillaNetworking::GetAcceptedAgreementsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GetAcceptedAgreementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GetAcceptedAgreementsRequest* GorillaNetworking::GetAcceptedAgreementsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GetAcceptedAgreementsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GetAcceptedAgreementsRequest::GetAcceptedAgreementsRequest()   {
}
