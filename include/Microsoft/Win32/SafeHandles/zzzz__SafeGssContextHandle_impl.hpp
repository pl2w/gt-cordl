#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeGssContextHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssContextHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssContextHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeGssContextHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssContextHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacfe198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssContextHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeGssContextHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssContextHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacfe1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssContextHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeGssContextHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssContextHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfe1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeGssContextHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeGssContextHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeGssContextHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* Microsoft::Win32::SafeHandles::SafeGssContextHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeGssContextHandle*>());
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeGssContextHandle::SafeGssContextHandle()   {
}
