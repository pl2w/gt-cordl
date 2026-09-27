#pragma once
// IWYU pragma private; include "System/Net/Security/SafeCredentialReference.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__CriticalHandleMinusOneIsInvalid_impl.hpp"
#include "System/Net/Security/zzzz__SafeCredentialReference_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SafeCredentialReference.CreateReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SafeCredentialReference* (*)(::System::Net::Security::SafeFreeCredentials*)>(&::System::Net::Security::SafeCredentialReference::CreateReference)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xacf452c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(),
                        {"CreateReference", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeCredentialReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeCredentialReference::*)(::System::Net::Security::SafeFreeCredentials*)>(&::System::Net::Security::SafeCredentialReference::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xacf49b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeCredentialReference.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeCredentialReference::*)()>(&::System::Net::Security::SafeCredentialReference::ReleaseHandle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xacf4a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(),
                    {::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SafeFreeCredentials*& System::Net::Security::SafeCredentialReference::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::System::Net::Security::SafeFreeCredentials* const& System::Net::Security::SafeCredentialReference::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void System::Net::Security::SafeCredentialReference::__cordl_internal_set_Target(::System::Net::Security::SafeFreeCredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
inline ::System::Net::Security::SafeCredentialReference* System::Net::Security::SafeCredentialReference::CreateReference(::System::Net::Security::SafeFreeCredentials*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(),
                        {"CreateReference", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SafeCredentialReference*>(nullptr, ___internal_method, target);
}
inline void System::Net::Security::SafeCredentialReference::_ctor(::System::Net::Security::SafeFreeCredentials*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool System::Net::Security::SafeCredentialReference::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeCredentialReference*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Security::SafeCredentialReference* System::Net::Security::SafeCredentialReference::New_ctor(::System::Net::Security::SafeFreeCredentials*  target)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SafeCredentialReference*>(target));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SafeCredentialReference::SafeCredentialReference()   {
}
