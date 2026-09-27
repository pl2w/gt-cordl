#pragma once
// IWYU pragma private; include "System/Net/DnsPermission.hpp"
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Net/zzzz__DnsPermission_def.hpp"
#include "System/Security/Permissions/zzzz__IUnrestrictedPermission_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Net::DnsPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DnsPermission::*)(::System::Security::Permissions::PermissionState)>(&::System::Net::DnsPermission::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::DnsPermission::*)()>(&::System::Net::DnsPermission::Copy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf778c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermission*>(),
                    {::i2c::class_of<::System::Net::DnsPermission*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DnsPermission::*)(::System::Security::SecurityElement*)>(&::System::Net::DnsPermission::FromXml)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf77c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermission*>(),
                    {::i2c::class_of<::System::Net::DnsPermission*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::DnsPermission::*)(::System::Security::IPermission*)>(&::System::Net::DnsPermission::Intersect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf77fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermission*>(),
                    {::i2c::class_of<::System::Net::DnsPermission*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DnsPermission::*)(::System::Security::IPermission*)>(&::System::Net::DnsPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermission*>(),
                    {::i2c::class_of<::System::Net::DnsPermission*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.IsUnrestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::DnsPermission::*)()>(&::System::Net::DnsPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DnsPermission.ToXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Net::DnsPermission::*)()>(&::System::Net::DnsPermission::ToXml)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf78a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::DnsPermission*>(),
                    {::i2c::class_of<::System::Net::DnsPermission*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void System::Net::DnsPermission::_ctor(::System::Security::Permissions::PermissionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Security::IPermission* System::Net::DnsPermission::Copy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermission*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method);
}
inline void System::Net::DnsPermission::FromXml(::System::Security::SecurityElement*  securityElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermission*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, securityElement);
}
inline ::System::Security::IPermission* System::Net::DnsPermission::Intersect(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermission*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method, target);
}
inline bool System::Net::DnsPermission::IsSubsetOf(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermission*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline bool System::Net::DnsPermission::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DnsPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Net::DnsPermission::ToXml()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::DnsPermission*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline ::System::Net::DnsPermission* System::Net::DnsPermission::New_ctor(::System::Security::Permissions::PermissionState  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DnsPermission*>(state));
}
/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr  System::Net::DnsPermission::operator ::System::Security::Permissions::IUnrestrictedPermission*() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* System::Net::DnsPermission::i___System__Security__Permissions__IUnrestrictedPermission() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::DnsPermission::DnsPermission()   {
}
