#pragma once
// IWYU pragma private; include "System/Net/Security/SafeDeleteNegoContext.hpp"
#include "System/Net/Security/zzzz__SafeDeleteContext_impl.hpp"
#include "System/Net/Security/zzzz__SafeDeleteNegoContext_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssContextHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssNameHandle_def.hpp"
#include "System/Net/Security/zzzz__SafeFreeNegoCredentials_def.hpp"
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.get_TargetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssNameHandle* (::System::Net::Security::SafeDeleteNegoContext::*)()>(&::System::Net::Security::SafeDeleteNegoContext::get_TargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_TargetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.get_IsNtlmUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::SafeDeleteNegoContext::*)()>(&::System::Net::Security::SafeDeleteNegoContext::get_IsNtlmUsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf491c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_IsNtlmUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.get_GssContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssContextHandle* (::System::Net::Security::SafeDeleteNegoContext::*)()>(&::System::Net::Security::SafeDeleteNegoContext::get_GssContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_GssContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeDeleteNegoContext::*)(::System::Net::Security::SafeFreeNegoCredentials*, ::StringW)>(&::System::Net::Security::SafeDeleteNegoContext::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xacf37d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeNegoCredentials*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.SetGssContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeDeleteNegoContext::*)(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*)>(&::System::Net::Security::SafeDeleteNegoContext::SetGssContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf492c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"SetGssContext", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.SetAuthenticationPackage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeDeleteNegoContext::*)(bool)>(&::System::Net::Security::SafeDeleteNegoContext::SetAuthenticationPackage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf4934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"SetAuthenticationPackage", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::SafeDeleteNegoContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::SafeDeleteNegoContext::*)(bool)>(&::System::Net::Security::SafeDeleteNegoContext::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xacf493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                    {::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__targetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetName;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* const& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__targetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetName;
}
constexpr void System::Net::Security::SafeDeleteNegoContext::__cordl_internal_set__targetName(::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetName = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeGssContextHandle*& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* const& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void System::Net::Security::SafeDeleteNegoContext::__cordl_internal_set__context(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr bool& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__isNtlmUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNtlmUsed;
}
constexpr bool const& System::Net::Security::SafeDeleteNegoContext::__cordl_internal_get__isNtlmUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNtlmUsed;
}
constexpr void System::Net::Security::SafeDeleteNegoContext::__cordl_internal_set__isNtlmUsed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNtlmUsed = value;
}
inline ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* System::Net::Security::SafeDeleteNegoContext::get_TargetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_TargetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeGssNameHandle*>(this, ___internal_method);
}
inline bool System::Net::Security::SafeDeleteNegoContext::get_IsNtlmUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_IsNtlmUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* System::Net::Security::SafeDeleteNegoContext::get_GssContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"get_GssContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(this, ___internal_method);
}
inline void System::Net::Security::SafeDeleteNegoContext::_ctor(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::StringW  targetName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Security::SafeFreeNegoCredentials*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credential, targetName);
}
inline void System::Net::Security::SafeDeleteNegoContext::SetGssContext(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"SetGssContext", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Net::Security::SafeDeleteNegoContext::SetAuthenticationPackage(bool  isNtlmUsed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(),
                        {"SetAuthenticationPackage", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNtlmUsed);
}
inline void System::Net::Security::SafeDeleteNegoContext::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Security::SafeDeleteNegoContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Net::Security::SafeDeleteNegoContext* System::Net::Security::SafeDeleteNegoContext::New_ctor(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::StringW  targetName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::SafeDeleteNegoContext*>(credential, targetName));
}
// Ctor Parameters []
constexpr ::System::Net::Security::SafeDeleteNegoContext::SafeDeleteNegoContext()   {
}
