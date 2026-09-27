#pragma once
// IWYU pragma private; include "GorillaNetworking/SubmitAcceptedAgreementsRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__SubmitAcceptedAgreementsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::SubmitAcceptedAgreementsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::SubmitAcceptedAgreementsRequest::*)()>(&::GorillaNetworking::SubmitAcceptedAgreementsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubmitAcceptedAgreementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaNetworking::SubmitAcceptedAgreementsRequest::__cordl_internal_get_Agreements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Agreements;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaNetworking::SubmitAcceptedAgreementsRequest::__cordl_internal_get_Agreements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Agreements;
}
constexpr void GorillaNetworking::SubmitAcceptedAgreementsRequest::__cordl_internal_set_Agreements(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Agreements = value;
}
inline void GorillaNetworking::SubmitAcceptedAgreementsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::SubmitAcceptedAgreementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::SubmitAcceptedAgreementsRequest* GorillaNetworking::SubmitAcceptedAgreementsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::SubmitAcceptedAgreementsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::SubmitAcceptedAgreementsRequest::SubmitAcceptedAgreementsRequest()   {
}
