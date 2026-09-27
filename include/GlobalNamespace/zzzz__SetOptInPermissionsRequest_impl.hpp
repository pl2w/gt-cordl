#pragma once
// IWYU pragma private; include "GlobalNamespace/SetOptInPermissionsRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__SetOptInPermissionsRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetOptInPermissionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetOptInPermissionsRequest::*)()>(&::GlobalNamespace::SetOptInPermissionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetOptInPermissionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::SetOptInPermissionsRequest::__cordl_internal_get_OptInPermissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptInPermissions;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::SetOptInPermissionsRequest::__cordl_internal_get_OptInPermissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OptInPermissions;
}
constexpr void GlobalNamespace::SetOptInPermissionsRequest::__cordl_internal_set_OptInPermissions(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OptInPermissions = value;
}
inline void GlobalNamespace::SetOptInPermissionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SetOptInPermissionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetOptInPermissionsRequest* GlobalNamespace::SetOptInPermissionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetOptInPermissionsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetOptInPermissionsRequest::SetOptInPermissionsRequest()   {
}
