#pragma once
// IWYU pragma private; include "System/Security/Permissions/SecurityAttribute.hpp"
#include "System/Security/Permissions/zzzz__SecurityAction_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Security/Permissions/zzzz__SecurityAttribute_def.hpp"
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
//  Writing Method size for method: ::System::Security::Permissions::SecurityAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Permissions::SecurityAttribute::*)(::System::Security::Permissions::SecurityAction)>(&::System::Security::Permissions::SecurityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa15acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityAttribute.CreatePermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Security::Permissions::SecurityAttribute::*)()>(&::System::Security::Permissions::SecurityAttribute::CreatePermission)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                    {::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityAttribute.get_Unrestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Permissions::SecurityAttribute::*)()>(&::System::Security::Permissions::SecurityAttribute::get_Unrestricted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15ad24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {"get_Unrestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityAttribute.set_Action
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Permissions::SecurityAttribute::*)(::System::Security::Permissions::SecurityAction)>(&::System::Security::Permissions::SecurityAttribute::set_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa15ad2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {"set_Action", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Permissions::SecurityAction& System::Security::Permissions::SecurityAttribute::__cordl_internal_get_m_Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Action;
}
constexpr ::System::Security::Permissions::SecurityAction const& System::Security::Permissions::SecurityAttribute::__cordl_internal_get_m_Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Action;
}
constexpr void System::Security::Permissions::SecurityAttribute::__cordl_internal_set_m_Action(::System::Security::Permissions::SecurityAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Action = value;
}
constexpr bool& System::Security::Permissions::SecurityAttribute::__cordl_internal_get_m_Unrestricted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Unrestricted;
}
constexpr bool const& System::Security::Permissions::SecurityAttribute::__cordl_internal_get_m_Unrestricted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Unrestricted;
}
constexpr void System::Security::Permissions::SecurityAttribute::__cordl_internal_set_m_Unrestricted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Unrestricted = value;
}
inline void System::Security::Permissions::SecurityAttribute::_ctor(::System::Security::Permissions::SecurityAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline ::System::Security::IPermission* System::Security::Permissions::SecurityAttribute::CreatePermission()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method);
}
inline bool System::Security::Permissions::SecurityAttribute::get_Unrestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {"get_Unrestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Permissions::SecurityAttribute::set_Action(::System::Security::Permissions::SecurityAction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Permissions::SecurityAttribute*>(),
                        {"set_Action", {}, {::i2c::type_of<::System::Security::Permissions::SecurityAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Permissions::SecurityAttribute* System::Security::Permissions::SecurityAttribute::New_ctor(::System::Security::Permissions::SecurityAction  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Permissions::SecurityAttribute*>(action));
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::SecurityAttribute::SecurityAttribute()   {
}
