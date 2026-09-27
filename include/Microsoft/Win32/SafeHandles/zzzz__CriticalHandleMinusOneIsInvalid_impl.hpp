#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/CriticalHandleMinusOneIsInvalid.hpp"
#include "System/Runtime/InteropServices/zzzz__CriticalHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__CriticalHandleMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::*)()>(&::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa12bee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::*)()>(&::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa12bf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>(),
                    {::i2c::class_of<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
inline ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid* Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid*>());
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::CriticalHandleMinusOneIsInvalid::CriticalHandleMinusOneIsInvalid()   {
}
