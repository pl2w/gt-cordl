#pragma once
// IWYU pragma private; include "System/Net/DnsPermissionAttribute.hpp"
#include "System/Security/Permissions/zzzz__CodeAccessSecurityAttribute_impl.hpp"
#include "System/Net/zzzz__DnsPermissionAttribute_def.hpp"
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
//  Writing Method size for method: ::System::Net::DnsPermissionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DnsPermissionAttribute::*)(::System::Security::Permissions::SecurityAction)>(&::System::Net::DnsPermissionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacf78dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermissionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermissionAttribute.CreatePermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::DnsPermissionAttribute::*)()>(&::System::Net::DnsPermissionAttribute::CreatePermission)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf78e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermissionAttribute*>(),
                    {::i2c::class_of<::System::Net::DnsPermissionAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::Net::DnsPermissionAttribute::_ctor(::System::Security::Permissions::SecurityAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermissionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Security::IPermission* System::Net::DnsPermissionAttribute::CreatePermission()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermissionAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method);
}
inline ::System::Net::DnsPermissionAttribute* System::Net::DnsPermissionAttribute::New_ctor(::System::Security::Permissions::SecurityAction  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DnsPermissionAttribute*>(action));
}
// Ctor Parameters []
constexpr ::System::Net::DnsPermissionAttribute::DnsPermissionAttribute()   {
}
