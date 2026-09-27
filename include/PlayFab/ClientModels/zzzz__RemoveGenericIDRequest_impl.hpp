#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveGenericIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveGenericIDRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GenericServiceId_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveGenericIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveGenericIDRequest::*)()>(&::PlayFab::ClientModels::RemoveGenericIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveGenericIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GenericServiceId*& PlayFab::ClientModels::RemoveGenericIDRequest::__cordl_internal_get_GenericId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericId;
}
constexpr ::PlayFab::ClientModels::GenericServiceId* const& PlayFab::ClientModels::RemoveGenericIDRequest::__cordl_internal_get_GenericId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericId;
}
constexpr void PlayFab::ClientModels::RemoveGenericIDRequest::__cordl_internal_set_GenericId(::PlayFab::ClientModels::GenericServiceId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenericId = value;
}
inline void PlayFab::ClientModels::RemoveGenericIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveGenericIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveGenericIDRequest* PlayFab::ClientModels::RemoveGenericIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveGenericIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveGenericIDRequest::RemoveGenericIDRequest()   {
}
