#pragma once
// IWYU pragma private; include "Steamworks/InteropHelp.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__InteropHelp_def.hpp"
#include "Steamworks/zzzz__InteropHelp_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::InteropHelp.TestIfPlatformSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::InteropHelp::TestIfPlatformSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f32148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfPlatformSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.TestIfAvailableClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::InteropHelp::TestIfAvailableClient)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f2c04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.PtrToStringUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::Steamworks::InteropHelp::PtrToStringUTF8)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f329b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"PtrToStringUTF8", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::InteropHelp::TestIfPlatformSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfPlatformSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::InteropHelp::TestIfAvailableClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::InteropHelp::PtrToStringUTF8(::System::IntPtr  nativeUtf8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"PtrToStringUTF8", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, nativeUtf8);
}
// Ctor Parameters []
constexpr ::Steamworks::InteropHelp::InteropHelp()   {
}
//  Writing Method size for method: ::Steamworks::InteropHelp_UTF8StringHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::InteropHelp_UTF8StringHandle::*)(::StringW)>(&::Steamworks::InteropHelp_UTF8StringHandle::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f2c0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp_UTF8StringHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::InteropHelp_UTF8StringHandle::*)()>(&::Steamworks::InteropHelp_UTF8StringHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f32ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                    {::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::InteropHelp_UTF8StringHandle::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline bool Steamworks::InteropHelp_UTF8StringHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Steamworks::InteropHelp_UTF8StringHandle* Steamworks::InteropHelp_UTF8StringHandle::New_ctor(::StringW  str)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::InteropHelp_UTF8StringHandle*>(str));
}
// Ctor Parameters []
constexpr ::Steamworks::InteropHelp_UTF8StringHandle::InteropHelp_UTF8StringHandle()   {
}
