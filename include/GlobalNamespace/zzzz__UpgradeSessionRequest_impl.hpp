#pragma once
// IWYU pragma private; include "GlobalNamespace/UpgradeSessionRequest.hpp"
#include "GlobalNamespace/zzzz__KIDRequestData_impl.hpp"
#include "GlobalNamespace/zzzz__UpgradeSessionRequest_def.hpp"
#include "KID/Model/zzzz__RequestedPermission_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UpgradeSessionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UpgradeSessionRequest::*)()>(&::GlobalNamespace::UpgradeSessionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a262dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*& GlobalNamespace::UpgradeSessionRequest::__cordl_internal_get_Permissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>* const& GlobalNamespace::UpgradeSessionRequest::__cordl_internal_get_Permissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permissions;
}
constexpr void GlobalNamespace::UpgradeSessionRequest::__cordl_internal_set_Permissions(::System::Collections::Generic::List_1<::KID::Model::RequestedPermission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permissions = value;
}
inline void GlobalNamespace::UpgradeSessionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UpgradeSessionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UpgradeSessionRequest* GlobalNamespace::UpgradeSessionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UpgradeSessionRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpgradeSessionRequest::UpgradeSessionRequest()   {
}
