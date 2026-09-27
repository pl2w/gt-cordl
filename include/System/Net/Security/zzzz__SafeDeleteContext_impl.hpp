#pragma once
// IWYU pragma private; include "System/Net/Security/SafeDeleteContext.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/Net/Security/zzzz__SafeDeleteContext_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SafeDeleteContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeDeleteContext::*)(::System::Net::Security::SafeFreeCredentials*)>(&::System::Net::Security::SafeDeleteContext::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xacf4870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteContext.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeDeleteContext::*)()>(&::System::Net::Security::SafeDeleteContext::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacf48cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(),
                    {::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteContext.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeDeleteContext::*)()>(&::System::Net::Security::SafeDeleteContext::ReleaseHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(),
                    {::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SafeFreeCredentials*& System::Net::Security::SafeDeleteContext::__cordl_internal_get__credential()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credential;
}
constexpr ::System::Net::Security::SafeFreeCredentials* const& System::Net::Security::SafeDeleteContext::__cordl_internal_get__credential() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credential;
}
constexpr void System::Net::Security::SafeDeleteContext::__cordl_internal_set__credential(::System::Net::Security::SafeFreeCredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credential = value;
}
inline void System::Net::Security::SafeDeleteContext::_ctor(::System::Net::Security::SafeFreeCredentials*  credential)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeCredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credential);
}
inline bool System::Net::Security::SafeDeleteContext::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Security::SafeDeleteContext::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeDeleteContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Security::SafeDeleteContext* System::Net::Security::SafeDeleteContext::New_ctor(::System::Net::Security::SafeFreeCredentials*  credential)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SafeDeleteContext*>(credential));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SafeDeleteContext::SafeDeleteContext()   {
}
