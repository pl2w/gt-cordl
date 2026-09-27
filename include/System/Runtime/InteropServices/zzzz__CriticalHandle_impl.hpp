#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/CriticalHandle.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__CriticalHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)(::System::IntPtr)>(&::System::Runtime::InteropServices::CriticalHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa1e103c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa1e1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                    {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::Cleanup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa1e1100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.FireCustomerDebugProbe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::InteropServices::CriticalHandle::FireCustomerDebugProbe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa1e11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"FireCustomerDebugProbe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.SetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)(::System::IntPtr)>(&::System::Runtime::InteropServices::CriticalHandle::SetHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1e11e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"SetHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.get_IsClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::get_IsClosed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1e11f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"get_IsClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                    {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1e11f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::CriticalHandle::*)(bool)>(&::System::Runtime::InteropServices::CriticalHandle::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa1e1208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                    {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::CriticalHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::InteropServices::CriticalHandle::*)()>(&::System::Runtime::InteropServices::CriticalHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                    {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Runtime::InteropServices::CriticalHandle::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::System::IntPtr const& System::Runtime::InteropServices::CriticalHandle::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void System::Runtime::InteropServices::CriticalHandle::__cordl_internal_set_handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr bool& System::Runtime::InteropServices::CriticalHandle::__cordl_internal_get__isClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr bool const& System::Runtime::InteropServices::CriticalHandle::__cordl_internal_get__isClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClosed;
}
constexpr void System::Runtime::InteropServices::CriticalHandle::__cordl_internal_set__isClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isClosed = value;
}
inline void System::Runtime::InteropServices::CriticalHandle::_ctor(::System::IntPtr  invalidHandleValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invalidHandleValue);
}
inline void System::Runtime::InteropServices::CriticalHandle::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::InteropServices::CriticalHandle::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::InteropServices::CriticalHandle::FireCustomerDebugProbe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"FireCustomerDebugProbe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Runtime::InteropServices::CriticalHandle::SetHandle(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"SetHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool System::Runtime::InteropServices::CriticalHandle::get_IsClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"get_IsClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::InteropServices::CriticalHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::InteropServices::CriticalHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::InteropServices::CriticalHandle::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Runtime::InteropServices::CriticalHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::InteropServices::CriticalHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
inline ::System::Runtime::InteropServices::CriticalHandle* System::Runtime::InteropServices::CriticalHandle::New_ctor(::System::IntPtr  invalidHandleValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::CriticalHandle*>(invalidHandleValue));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Runtime::InteropServices::CriticalHandle::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Runtime::InteropServices::CriticalHandle::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::CriticalHandle::CriticalHandle()   {
}
