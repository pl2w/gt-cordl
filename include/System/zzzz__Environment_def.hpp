#pragma once
// IWYU pragma private; include "System/Environment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Environment)
namespace GlobalNamespace {
struct Environment_SpecialFolderOption;
}
namespace GlobalNamespace {
struct Environment_SpecialFolder;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class OperatingSystem;
}
namespace System {
struct PlatformID;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System {
class Environment;
}
// Write type traits
MARK_REF_T(::System::Environment*);
DEFINE_IL2CPP_CLASS(::System::Environment*, "System", "Environment");
// [ComVisible(true)]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Environment
class CORDL_TYPE Environment : public ::System::Object {
public:
// Declarations
using SpecialFolder = ::GlobalNamespace::Environment_SpecialFolder;

using SpecialFolderOption = ::GlobalNamespace::Environment_SpecialFolderOption;

/// @brief Field nl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nl, put=setStaticF_nl)) ::StringW  nl;

/// @brief Field os, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_os, put=setStaticF_os)) ::System::OperatingSystem*  os;

/// @brief Method CreateVersionFromString, addr 0xa3269dc, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::Version* CreateVersionFromString(::StringW  info) ;

/// @brief Method Exit, addr 0xa326c50, size 0x4, virtual false, abstract: false, final false
static inline void Exit(int32_t  exitCode) ;

/// @brief Method FailFast, addr 0xa327770, size 0xc, virtual false, abstract: false, final false
static inline void FailFast(::StringW  message) ;

/// @brief Method FailFast, addr 0xa327780, size 0x8, virtual false, abstract: false, final false
static inline void FailFast(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method FailFast, addr 0xa32777c, size 0x4, virtual false, abstract: false, final false
static inline void FailFast(::StringW  message, ::System::Exception*  exception, ::StringW  errorSource) ;

/// @brief Method GetCommandLineArgs, addr 0xa326c54, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetCommandLineArgs() ;

/// @brief Method GetEnvironmentVariable, addr 0xa326d18, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetEnvironmentVariable(::StringW  variable) ;

/// @brief Method GetEnvironmentVariableNames, addr 0xa326de8, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetEnvironmentVariableNames() ;

/// @brief Method GetEnvironmentVariables, addr 0xa326d1c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Collections::IDictionary* GetEnvironmentVariables() ;

/// @brief Method GetFolderPath, addr 0xa326dec, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder) ;

/// @brief Method GetFolderPath, addr 0xa326df4, size 0x34, virtual false, abstract: false, final false
static inline ::StringW GetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder, ::GlobalNamespace::Environment_SpecialFolderOption  option) ;

/// @brief Method GetIs64BitOperatingSystem, addr 0xa327788, size 0x4, virtual false, abstract: false, final false
static inline bool GetIs64BitOperatingSystem() ;

/// @brief Method GetLogicalDrives, addr 0xa327768, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetLogicalDrives() ;

/// @brief Method GetLogicalDrivesInternal, addr 0xa32776c, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetLogicalDrivesInternal() ;

/// @brief Method GetMachineConfigPath, addr 0xa3277a4, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMachineConfigPath() ;

/// @brief Method GetNewLine, addr 0xa326894, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetNewLine() ;

/// @brief Method GetOSVersionString, addr 0xa326914, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetOSVersionString() ;

/// @brief Method GetPageSize, addr 0xa3277a8, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetPageSize() ;

/// @brief Method GetResourceString, addr 0xa322ce8, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetResourceString(::StringW  key) ;

/// @brief Method GetResourceString, addr 0xa324ad0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetResourceString(::StringW  key, /* [ParamArray] */ ::ArrayW<::System::Object*>  values) ;

/// @brief Method GetResourceStringEncodingName, addr 0xa3266ec, size 0x178, virtual false, abstract: false, final false
static inline ::StringW GetResourceStringEncodingName(int32_t  codePage) ;

/// @brief Method GetStackTrace, addr 0xa3277d4, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetStackTrace(::System::Exception*  e, bool  needFileInfo) ;

/// @brief Method GetWindowsFolderPath, addr 0xa326e28, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetWindowsFolderPath(int32_t  folder) ;

/// @brief Method ReadXdgUserDir, addr 0xa3272fc, size 0x468, virtual false, abstract: false, final false
static inline ::StringW ReadXdgUserDir(::StringW  config_dir, ::StringW  home_dir, ::StringW  key, ::StringW  fallback) ;

/// @brief Method UnixGetFolderPath, addr 0xa326e44, size 0x4b8, virtual false, abstract: false, final false
static inline ::StringW UnixGetFolderPath(::GlobalNamespace::Environment_SpecialFolder  folder, ::GlobalNamespace::Environment_SpecialFolderOption  option) ;

static inline ::StringW getStaticF_nl() ;

static inline ::System::OperatingSystem* getStaticF_os() ;

/// @brief Method get_CurrentDirectory, addr 0xa326864, size 0x8, virtual false, abstract: false, final false
static inline ::StringW get_CurrentDirectory() ;

/// @brief Method get_CurrentManagedThreadId, addr 0xa32686c, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_CurrentManagedThreadId() ;

/// @brief Method get_HasShutdownStarted, addr 0xa32688c, size 0x4, virtual false, abstract: false, final false
static inline bool get_HasShutdownStarted() ;

/// @brief Method get_Is64BitOperatingSystem, addr 0xa32778c, size 0x4, virtual false, abstract: false, final false
static inline bool get_Is64BitOperatingSystem() ;

/// @brief Method get_Is64BitProcess, addr 0xa327790, size 0x8, virtual false, abstract: false, final false
static inline bool get_Is64BitProcess() ;

/// @brief Method get_IsRunningOnWindows, addr 0xa326e2c, size 0x18, virtual false, abstract: false, final false
static inline bool get_IsRunningOnWindows() ;

/// @brief Method get_IsUnix, addr 0xa3277ac, size 0x28, virtual false, abstract: false, final false
static inline bool get_IsUnix() ;

/// @brief Method get_MachineName, addr 0xa326890, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_MachineName() ;

/// @brief Method get_NewLine, addr 0xa326898, size 0x78, virtual false, abstract: false, final false
static inline ::StringW get_NewLine() ;

/// @brief Method get_OSVersion, addr 0xa326918, size 0xc4, virtual false, abstract: false, final false
static inline ::System::OperatingSystem* get_OSVersion() ;

/// [CompilerGenerated]
/// @brief Method get_Platform, addr 0xa326910, size 0x4, virtual false, abstract: false, final false
static inline ::System::PlatformID get_Platform() ;

/// @brief Method get_ProcessorCount, addr 0xa3277a0, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_ProcessorCount() ;

/// @brief Method get_StackTrace, addr 0xa326bd8, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW get_StackTrace() ;

/// @brief Method get_TickCount, addr 0xa326c44, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_TickCount() ;

/// @brief Method get_UserDomainName, addr 0xa326c48, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_UserDomainName() ;

/// @brief Method get_UserName, addr 0xa326c4c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_UserName() ;

/// @brief Method internalGetEnvironmentVariable, addr 0xa326c5c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW internalGetEnvironmentVariable(::StringW  variable) ;

/// @brief Method internalGetEnvironmentVariable_native, addr 0xa326c58, size 0x4, virtual false, abstract: false, final false
static inline ::StringW internalGetEnvironmentVariable_native(::System::IntPtr  variable) ;

/// @brief Method internalGetHome, addr 0xa327764, size 0x4, virtual false, abstract: false, final false
static inline ::StringW internalGetHome() ;

static inline void setStaticF_nl(::StringW  value) ;

static inline void setStaticF_os(::System::OperatingSystem*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Environment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Environment(Environment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Environment(Environment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5704};

/// @brief Field mono_corlib_version offset 0xffffffff size 0x8
static constexpr ::ConstString  mono_corlib_version{u"1A5E0066-58DC-428A-B21C-0AD6CDAE2789"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Environment) == 0x10, "Size mismatch!");

} // namespace end def System
