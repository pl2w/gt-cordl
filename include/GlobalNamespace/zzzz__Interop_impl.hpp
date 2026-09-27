#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "GlobalNamespace/zzzz__Interop_ErrorInfo_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Error_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_DirectoryEntry_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatusFlags_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatus_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_NodeType_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_Permissions_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_TimeValPair_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Interop.ThrowExceptionForIoErrno
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Interop_ErrorInfo, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*)>(&::GlobalNamespace::Interop::ThrowExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa10c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"ThrowExceptionForIoErrno", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa10c8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"CheckIo", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa10c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"CheckIo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetExceptionForIoErrno
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::GlobalNamespace::Interop_ErrorInfo, ::StringW, bool)>(&::GlobalNamespace::Interop::GetExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0xa10c3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetExceptionForIoErrno", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetIOException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::GlobalNamespace::Interop_ErrorInfo)>(&::GlobalNamespace::Interop::GetIOException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa10ca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetIOException", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetRandomBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::GlobalNamespace::Interop::GetRandomBytes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa10cb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop::ThrowExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo  errorInfo, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"ThrowExceptionForIoErrno", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorInfo, path, isDirectory, errorRewriter);
}
inline int64_t GlobalNamespace::Interop::CheckIo(int64_t  result, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"CheckIo", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
inline int32_t GlobalNamespace::Interop::CheckIo(int32_t  result, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"CheckIo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
inline ::System::Exception* GlobalNamespace::Interop::GetExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo  errorInfo, ::StringW  path, bool  isDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetExceptionForIoErrno", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, errorInfo, path, isDirectory);
}
inline ::System::Exception* GlobalNamespace::Interop::GetIOException(::GlobalNamespace::Interop_ErrorInfo  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetIOException", {}, {::i2c::type_of<::GlobalNamespace::Interop_ErrorInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, errorInfo);
}
inline void GlobalNamespace::Interop::GetRandomBytes(uint8_t*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop::Interop()   {
}
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetLastErrorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Interop_ErrorInfo (*)()>(&::GlobalNamespace::Interop_Sys::GetLastErrorInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa10c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetLastErrorInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.StrError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::Interop_Sys::StrError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa10cc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"StrError", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ConvertErrorPlatformToPal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Interop_Error (*)(int32_t)>(&::GlobalNamespace::Interop_Sys::ConvertErrorPlatformToPal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ConvertErrorPlatformToPal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ConvertErrorPalToPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::Interop_Error)>(&::GlobalNamespace::Interop_Sys::ConvertErrorPalToPlatform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10cc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ConvertErrorPalToPlatform", {}, {::i2c::type_of<::GlobalNamespace::Interop_Error>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.StrErrorR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(int32_t, uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::StrErrorR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10ce44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"StrErrorR", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetNonCryptographicallySecureRandomBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::GetNonCryptographicallySecureRandomBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetNonCryptographicallySecureRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.OpenDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::OpenDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa10ce48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"OpenDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetReadDirRBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetReadDirRBufferSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10ce7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetReadDirRBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadDirR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>)>(&::GlobalNamespace::Interop_Sys::ReadDirR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadDirR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.CloseDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Interop_Sys::CloseDir)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa10ce84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"CloseDir", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::Interop_Sys::ReadLink)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa10cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadLink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::ReadLink)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa10ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadLink", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Symlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Symlink)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa10d18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Symlink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ChMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::GlobalNamespace::Interop_Sys::ChMod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ChMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.CopyFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::Microsoft::Win32::SafeHandles::SafeFileHandle*)>(&::GlobalNamespace::Interop_Sys::CopyFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa10d21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"CopyFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetEGid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetEGid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetEGid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetEUid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetEUid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10d2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetEUid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LChflags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, uint32_t)>(&::GlobalNamespace::Interop_Sys::LChflags)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LChflags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LChflagsCanSetHiddenFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::Interop_Sys::LChflagsCanSetHiddenFlag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10d314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LChflagsCanSetHiddenFlag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Link
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Link)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa10d318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Link", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.MkDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::GlobalNamespace::Interop_Sys::MkDir)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"MkDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Rename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Rename)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa10d3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Rename", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.RmDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::RmDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa10d3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"RmDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa10d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa10d44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa10d584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa10d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.UTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::by_ref<::GlobalNamespace::Sys_Interop_TimeValPair>)>(&::GlobalNamespace::Interop_Sys::UTimes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa10d6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"UTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_TimeValPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Unlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::Unlink)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa10d714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Unlink", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.DoubleToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t, uint8_t*, uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::DoubleToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa10d748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"DoubleToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop_Sys::setStaticF_CanSetHiddenFlag(bool  value)  {
::cordl_internals::setStaticField<bool, "CanSetHiddenFlag", ::GlobalNamespace::Interop_Sys*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::Interop_Sys::getStaticF_CanSetHiddenFlag()  {
return ::cordl_internals::getStaticField<bool, "CanSetHiddenFlag", ::GlobalNamespace::Interop_Sys*>();
}
inline ::GlobalNamespace::Interop_ErrorInfo GlobalNamespace::Interop_Sys::GetLastErrorInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetLastErrorInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_ErrorInfo>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_Sys::StrError(int32_t  platformErrno)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"StrError", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, platformErrno);
}
inline ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Sys::ConvertErrorPlatformToPal(int32_t  platformErrno)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ConvertErrorPlatformToPal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_Error>(nullptr, ___internal_method, platformErrno);
}
inline int32_t GlobalNamespace::Interop_Sys::ConvertErrorPalToPlatform(::GlobalNamespace::Interop_Error  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ConvertErrorPalToPlatform", {}, {::i2c::type_of<::GlobalNamespace::Interop_Error>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, error);
}
inline uint8_t* GlobalNamespace::Interop_Sys::StrErrorR(int32_t  platformErrno, uint8_t*  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"StrErrorR", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, platformErrno, buffer, bufferSize);
}
inline void GlobalNamespace::Interop_Sys::GetNonCryptographicallySecureRandomBytes(uint8_t*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetNonCryptographicallySecureRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
inline ::System::IntPtr GlobalNamespace::Interop_Sys::OpenDir(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"OpenDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::GetReadDirRBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetReadDirRBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::ReadDirR(::System::IntPtr  dir, uint8_t*  buffer, int32_t  bufferSize, ::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>  outputEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadDirR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dir, buffer, bufferSize, outputEntry);
}
inline int32_t GlobalNamespace::Interop_Sys::CloseDir(::System::IntPtr  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"CloseDir", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dir);
}
inline int32_t GlobalNamespace::Interop_Sys::ReadLink(::StringW  path, ::ArrayW<uint8_t>  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadLink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, buffer, bufferSize);
}
inline ::StringW GlobalNamespace::Interop_Sys::ReadLink(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ReadLink", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::Symlink(::StringW  target, ::StringW  linkPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Symlink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target, linkPath);
}
inline int32_t GlobalNamespace::Interop_Sys::ChMod(::StringW  path, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"ChMod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, mode);
}
inline int32_t GlobalNamespace::Interop_Sys::CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle*  source, ::Microsoft::Win32::SafeHandles::SafeFileHandle*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"CopyFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFileHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, destination);
}
inline uint32_t GlobalNamespace::Interop_Sys::GetEGid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetEGid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t GlobalNamespace::Interop_Sys::GetEUid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"GetEUid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::LChflags(::StringW  path, uint32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LChflags", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, flags);
}
inline int32_t GlobalNamespace::Interop_Sys::LChflagsCanSetHiddenFlag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LChflagsCanSetHiddenFlag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::Link(::StringW  source, ::StringW  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Link", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, link);
}
inline int32_t GlobalNamespace::Interop_Sys::MkDir(::StringW  path, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"MkDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, mode);
}
inline int32_t GlobalNamespace::Interop_Sys::Rename(::StringW  oldPath, ::StringW  newPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Rename", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, oldPath, newPath);
}
inline int32_t GlobalNamespace::Interop_Sys::RmDir(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"RmDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::by_ref<uint8_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::System::ReadOnlySpan_1<char16_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Stat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::by_ref<uint8_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::System::ReadOnlySpan_1<char16_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"LStat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::UTimes(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_TimeValPair>  times)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"UTimes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_TimeValPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, times);
}
inline int32_t GlobalNamespace::Interop_Sys::Unlink(::StringW  pathname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"Unlink", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pathname);
}
inline int32_t GlobalNamespace::Interop_Sys::DoubleToString(double_t  value, uint8_t*  format, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Sys*>(),
                        {"DoubleToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, format, buffer, bufferLength);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_Sys::Interop_Sys()   {
}
