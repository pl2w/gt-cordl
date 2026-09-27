#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddGenericIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddGenericIDRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GenericServiceId_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddGenericIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddGenericIDRequest::*)()>(&::PlayFab::ClientModels::AddGenericIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddGenericIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GenericServiceId*& PlayFab::ClientModels::AddGenericIDRequest::__cordl_internal_get_GenericId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericId;
}
constexpr ::PlayFab::ClientModels::GenericServiceId* const& PlayFab::ClientModels::AddGenericIDRequest::__cordl_internal_get_GenericId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericId;
}
constexpr void PlayFab::ClientModels::AddGenericIDRequest::__cordl_internal_set_GenericId(::PlayFab::ClientModels::GenericServiceId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenericId = value;
}
inline void PlayFab::ClientModels::AddGenericIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddGenericIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddGenericIDRequest* PlayFab::ClientModels::AddGenericIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddGenericIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddGenericIDRequest::AddGenericIDRequest()   {
}
