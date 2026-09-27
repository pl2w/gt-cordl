#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AttributeInstallRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AttributeInstallRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AttributeInstallRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AttributeInstallRequest::*)()>(&::PlayFab::ClientModels::AttributeInstallRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8432ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AttributeInstallRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_get_Adid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Adid;
}
constexpr ::StringW const& PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_get_Adid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Adid;
}
constexpr void PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_set_Adid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Adid = value;
}
constexpr ::StringW& PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_get_Idfa()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idfa;
}
constexpr ::StringW const& PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_get_Idfa() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idfa;
}
constexpr void PlayFab::ClientModels::AttributeInstallRequest::__cordl_internal_set_Idfa(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Idfa = value;
}
inline void PlayFab::ClientModels::AttributeInstallRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AttributeInstallRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AttributeInstallRequest* PlayFab::ClientModels::AttributeInstallRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AttributeInstallRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AttributeInstallRequest::AttributeInstallRequest()   {
}
