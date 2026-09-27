#pragma once
// IWYU pragma private; include "System/Security/Permissions/CodeAccessSecurityAttribute.hpp"
#include "System/Security/Permissions/zzzz__SecurityAttribute_impl.hpp"
#include "System/Security/Permissions/zzzz__CodeAccessSecurityAttribute_def.hpp"
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
//  Writing Method size for method: ::System::Security::Permissions::CodeAccessSecurityAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Permissions::CodeAccessSecurityAttribute::*)(::System::Security::Permissions::SecurityAction)>(&::System::Security::Permissions::CodeAccessSecurityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa15acd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::CodeAccessSecurityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Permissions::CodeAccessSecurityAttribute::_ctor(::System::Security::Permissions::SecurityAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::CodeAccessSecurityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Security::Permissions::CodeAccessSecurityAttribute* System::Security::Permissions::CodeAccessSecurityAttribute::New_ctor(::System::Security::Permissions::SecurityAction  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Permissions::CodeAccessSecurityAttribute*>(action));
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::CodeAccessSecurityAttribute::CodeAccessSecurityAttribute()   {
}
