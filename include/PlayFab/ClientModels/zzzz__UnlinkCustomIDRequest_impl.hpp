#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkCustomIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkCustomIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkCustomIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkCustomIDRequest::*)()>(&::PlayFab::ClientModels::UnlinkCustomIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkCustomIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkCustomIDRequest::__cordl_internal_get_CustomId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkCustomIDRequest::__cordl_internal_get_CustomId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr void PlayFab::ClientModels::UnlinkCustomIDRequest::__cordl_internal_set_CustomId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomId = value;
}
inline void PlayFab::ClientModels::UnlinkCustomIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkCustomIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkCustomIDRequest* PlayFab::ClientModels::UnlinkCustomIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkCustomIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkCustomIDRequest::UnlinkCustomIDRequest()   {
}
