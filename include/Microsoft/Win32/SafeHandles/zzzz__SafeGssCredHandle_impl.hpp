#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeGssCredHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeGssCredHandle_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssCredHandle.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssCredHandle* (*)(::StringW, ::StringW, bool)>(&::Microsoft::Win32::SafeHandles::SafeGssCredHandle::Create)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xacfdee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssCredHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeGssCredHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssCredHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacfe140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssCredHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeGssCredHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssCredHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xacfe150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeGssCredHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeGssCredHandle::*)()>(&::Microsoft::Win32::SafeHandles::SafeGssCredHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfe160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* Microsoft::Win32::SafeHandles::SafeGssCredHandle::Create(::StringW  username, ::StringW  password, bool  isNtlmOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(nullptr, ___internal_method, username, password, isNtlmOnly);
}
inline void Microsoft::Win32::SafeHandles::SafeGssCredHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeGssCredHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::SafeGssCredHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* Microsoft::Win32::SafeHandles::SafeGssCredHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::SafeGssCredHandle*>());
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeGssCredHandle::SafeGssCredHandle()   {
}
