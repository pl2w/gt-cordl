#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop)
namespace GlobalNamespace {
struct Interop_ErrorInfo;
}
namespace GlobalNamespace {
struct Interop_Error;
}
namespace GlobalNamespace {
class Interop_Sys;
}
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatusFlags;
}
namespace GlobalNamespace {
struct Sys_Interop_FileStatus;
}
namespace GlobalNamespace {
struct Sys_Interop_NodeType;
}
namespace GlobalNamespace {
struct Sys_Interop_Permissions;
}
namespace GlobalNamespace {
struct Sys_Interop_TimeValPair;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
class Interop;
}
namespace GlobalNamespace {
class Interop_Sys;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Interop*);
MARK_REF_T(::GlobalNamespace::Interop_Sys*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop*, "", "Interop");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Interop_Sys*, "", "Interop/Sys");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop
class CORDL_TYPE Interop : public ::System::Object {
public:
// Declarations
using Error = ::GlobalNamespace::Interop_Error;

using ErrorInfo = ::GlobalNamespace::Interop_ErrorInfo;

using Sys = ::GlobalNamespace::Interop_Sys;

/// @brief Method CheckIo, addr 0xa10c9bc, size 0x1c, virtual false, abstract: false, final false
static inline int32_t CheckIo(int32_t  result, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter) ;

/// @brief Method CheckIo, addr 0xa10c8d4, size 0x80, virtual false, abstract: false, final false
static inline int64_t CheckIo(int64_t  result, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter) ;

/// @brief Method GetExceptionForIoErrno, addr 0xa10c3e8, size 0x4ec, virtual false, abstract: false, final false
static inline ::System::Exception* GetExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo  errorInfo, ::StringW  path, bool  isDirectory) ;

/// @brief Method GetIOException, addr 0xa10ca48, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* GetIOException(::GlobalNamespace::Interop_ErrorInfo  errorInfo) ;

/// @brief Method GetRandomBytes, addr 0xa10cb9c, size 0x64, virtual false, abstract: false, final false
static inline void GetRandomBytes(uint8_t*  buffer, int32_t  length) ;

/// @brief Method ThrowExceptionForIoErrno, addr 0xa10c390, size 0x58, virtual false, abstract: false, final false
static inline void ThrowExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo  errorInfo, ::StringW  path, bool  isDirectory, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo,::GlobalNamespace::Interop_ErrorInfo>*  errorRewriter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop(Interop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop(Interop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Interop/Sys
class CORDL_TYPE Interop_Sys : public ::System::Object {
public:
// Declarations
using DirectoryEntry = ::GlobalNamespace::Sys_Interop_DirectoryEntry;

using FileStatus = ::GlobalNamespace::Sys_Interop_FileStatus;

using FileStatusFlags = ::GlobalNamespace::Sys_Interop_FileStatusFlags;

using NodeType = ::GlobalNamespace::Sys_Interop_NodeType;

using Permissions = ::GlobalNamespace::Sys_Interop_Permissions;

using TimeValPair = ::GlobalNamespace::Sys_Interop_TimeValPair;

/// @brief Field CanSetHiddenFlag, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_CanSetHiddenFlag, put=setStaticF_CanSetHiddenFlag)) bool  CanSetHiddenFlag;

/// @brief Method ChMod, addr 0xa10d1e0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ChMod(::StringW  path, int32_t  mode) ;

/// @brief Method CloseDir, addr 0xa10ce84, size 0x1c, virtual false, abstract: false, final false
static inline int32_t CloseDir(::System::IntPtr  dir) ;

/// @brief Method ConvertErrorPalToPlatform, addr 0xa10cc84, size 0x4, virtual false, abstract: false, final false
static inline int32_t ConvertErrorPalToPlatform(::GlobalNamespace::Interop_Error  error) ;

/// @brief Method ConvertErrorPlatformToPal, addr 0xa10cc6c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Interop_Error ConvertErrorPlatformToPal(int32_t  platformErrno) ;

/// @brief Method CopyFile, addr 0xa10d21c, size 0xb4, virtual false, abstract: false, final false
static inline int32_t CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle*  source, ::Microsoft::Win32::SafeHandles::SafeFileHandle*  destination) ;

/// @brief Method DoubleToString, addr 0xa10d748, size 0x4, virtual false, abstract: false, final false
static inline int32_t DoubleToString(double_t  value, uint8_t*  format, uint8_t*  buffer, int32_t  bufferLength) ;

/// @brief Method GetEGid, addr 0xa10d2d0, size 0x4, virtual false, abstract: false, final false
static inline uint32_t GetEGid() ;

/// @brief Method GetEUid, addr 0xa10d2d4, size 0x4, virtual false, abstract: false, final false
static inline uint32_t GetEUid() ;

/// @brief Method GetLastErrorInfo, addr 0xa10c954, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Interop_ErrorInfo GetLastErrorInfo() ;

/// @brief Method GetNonCryptographicallySecureRandomBytes, addr 0xa10cc00, size 0x4, virtual false, abstract: false, final false
static inline void GetNonCryptographicallySecureRandomBytes(uint8_t*  buffer, int32_t  length) ;

/// @brief Method GetReadDirRBufferSize, addr 0xa10ce7c, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetReadDirRBufferSize() ;

/// @brief Method LChflags, addr 0xa10d2d8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t LChflags(::StringW  path, uint32_t  flags) ;

/// @brief Method LChflagsCanSetHiddenFlag, addr 0xa10d314, size 0x4, virtual false, abstract: false, final false
static inline int32_t LChflagsCanSetHiddenFlag() ;

/// @brief Method LStat, addr 0xa10d150, size 0x3c, virtual false, abstract: false, final false
static inline int32_t LStat(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method LStat, addr 0xa10d5a0, size 0x138, virtual false, abstract: false, final false
static inline int32_t LStat(::System::ReadOnlySpan_1<char16_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method LStat, addr 0xa10d584, size 0x1c, virtual false, abstract: false, final false
static inline int32_t LStat(::by_ref<uint8_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method Link, addr 0xa10d318, size 0x54, virtual false, abstract: false, final false
static inline int32_t Link(::StringW  source, ::StringW  link) ;

/// @brief Method MkDir, addr 0xa10d36c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t MkDir(::StringW  path, int32_t  mode) ;

/// @brief Method OpenDir, addr 0xa10ce48, size 0x34, virtual false, abstract: false, final false
static inline ::System::IntPtr OpenDir(::StringW  path) ;

/// @brief Method ReadDirR, addr 0xa10ce80, size 0x4, virtual false, abstract: false, final false
static inline int32_t ReadDirR(::System::IntPtr  dir, uint8_t*  buffer, int32_t  bufferSize, ::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>  outputEntry) ;

/// @brief Method ReadLink, addr 0xa10ceec, size 0x228, virtual false, abstract: false, final false
static inline ::StringW ReadLink(::StringW  path) ;

/// @brief Method ReadLink, addr 0xa10cea0, size 0x4c, virtual false, abstract: false, final false
static inline int32_t ReadLink(::StringW  path, ::ArrayW<uint8_t>  buffer, int32_t  bufferSize) ;

/// @brief Method Rename, addr 0xa10d3a8, size 0x54, virtual false, abstract: false, final false
static inline int32_t Rename(::StringW  oldPath, ::StringW  newPath) ;

/// @brief Method RmDir, addr 0xa10d3fc, size 0x34, virtual false, abstract: false, final false
static inline int32_t RmDir(::StringW  path) ;

/// @brief Method Stat, addr 0xa10d114, size 0x3c, virtual false, abstract: false, final false
static inline int32_t Stat(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method Stat, addr 0xa10d44c, size 0x138, virtual false, abstract: false, final false
static inline int32_t Stat(::System::ReadOnlySpan_1<char16_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method Stat, addr 0xa10d430, size 0x1c, virtual false, abstract: false, final false
static inline int32_t Stat(::by_ref<uint8_t>  path, ::by_ref<::GlobalNamespace::Sys_Interop_FileStatus>  output) ;

/// @brief Method StrError, addr 0xa10cc88, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW StrError(int32_t  platformErrno) ;

/// @brief Method StrErrorR, addr 0xa10ce44, size 0x4, virtual false, abstract: false, final false
static inline uint8_t* StrErrorR(int32_t  platformErrno, uint8_t*  buffer, int32_t  bufferSize) ;

/// @brief Method Symlink, addr 0xa10d18c, size 0x54, virtual false, abstract: false, final false
static inline int32_t Symlink(::StringW  target, ::StringW  linkPath) ;

/// @brief Method UTimes, addr 0xa10d6d8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t UTimes(::StringW  path, ::by_ref<::GlobalNamespace::Sys_Interop_TimeValPair>  times) ;

/// @brief Method Unlink, addr 0xa10d714, size 0x34, virtual false, abstract: false, final false
static inline int32_t Unlink(::StringW  pathname) ;

static inline bool getStaticF_CanSetHiddenFlag() ;

static inline void setStaticF_CanSetHiddenFlag(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interop_Sys() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interop_Sys", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interop_Sys(Interop_Sys && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interop_Sys", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interop_Sys(Interop_Sys const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Interop_Sys) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
