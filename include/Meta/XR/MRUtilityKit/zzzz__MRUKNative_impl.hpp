#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNative.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNative_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.dlopen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, int32_t)>(&::Meta::XR::MRUtilityKit::MRUKNative::dlopen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f32bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlopen", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.dlsym
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::Meta::XR::MRUtilityKit::MRUKNative::dlsym)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f32c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlsym", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.dlclose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNative::dlclose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9f32d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlclose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.GetDllHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Meta::XR::MRUtilityKit::MRUKNative::GetDllHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f32d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"GetDllHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.GetDllExport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::Meta::XR::MRUtilityKit::MRUKNative::GetDllExport)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f32d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"GetDllExport", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.FreeDllHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Meta::XR::MRUtilityKit::MRUKNative::FreeDllHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9f32d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"FreeDllHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.LoadMRUKSharedLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::MRUtilityKit::MRUKNative::LoadMRUKSharedLibrary)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f32de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"LoadMRUKSharedLibrary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKNative.FreeMRUKSharedLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::MRUtilityKit::MRUKNative::FreeMRUKSharedLibrary)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f32ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"FreeMRUKSharedLibrary", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::MRUKNative::setStaticF__nativeLibraryPtr(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "_nativeLibraryPtr", ::Meta::XR::MRUtilityKit::MRUKNative*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Meta::XR::MRUtilityKit::MRUKNative::getStaticF__nativeLibraryPtr()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "_nativeLibraryPtr", ::Meta::XR::MRUtilityKit::MRUKNative*>();
}
inline ::System::IntPtr Meta::XR::MRUtilityKit::MRUKNative::dlopen(::StringW  filename, int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlopen", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, filename, flags);
}
inline ::System::IntPtr Meta::XR::MRUtilityKit::MRUKNative::dlsym(::System::IntPtr  handle, ::StringW  symbol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlsym", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle, symbol);
}
inline int32_t Meta::XR::MRUtilityKit::MRUKNative::dlclose(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"dlclose", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Meta::XR::MRUtilityKit::MRUKNative::GetDllHandle(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"GetDllHandle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, path);
}
inline ::System::IntPtr Meta::XR::MRUtilityKit::MRUKNative::GetDllExport(::System::IntPtr  dllHandle, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"GetDllExport", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, dllHandle, name);
}
inline bool Meta::XR::MRUtilityKit::MRUKNative::FreeDllHandle(::System::IntPtr  dllHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"FreeDllHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dllHandle);
}
inline void Meta::XR::MRUtilityKit::MRUKNative::LoadMRUKSharedLibrary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"LoadMRUKSharedLibrary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKNative::FreeMRUKSharedLibrary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                        {"FreeMRUKSharedLibrary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline T Meta::XR::MRUtilityKit::MRUKNative::LoadFunction(::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKNative*>(),
                    {"LoadFunction", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKNative::MRUKNative()   {
}
