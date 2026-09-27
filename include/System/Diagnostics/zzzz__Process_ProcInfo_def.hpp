#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_ProcInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Process_ProcInfo)
// Forward declare root types
namespace GlobalNamespace {
struct Process_ProcInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Process_ProcInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Process_ProcInfo, "System.Diagnostics", "Process/ProcInfo");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Diagnostics.Process/ProcInfo
struct CORDL_TYPE Process_ProcInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Process_ProcInfo() ;

// Ctor Parameters [CppParam { name: "process_handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "envVariables", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Password", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Process_ProcInfo(::System::IntPtr  process_handle, int32_t  pid, ::ArrayW<::StringW>  envVariables, ::StringW  UserName, ::StringW  Domain, ::System::IntPtr  Password, bool  LoadUserProfile) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field process_handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  process_handle;

/// @brief Field pid, offset: 0x8, size: 0x4, def value: None
 int32_t  pid;

/// @brief Field envVariables, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  envVariables;

/// @brief Field UserName, offset: 0x18, size: 0x8, def value: None
 ::StringW  UserName;

/// @brief Field Domain, offset: 0x20, size: 0x8, def value: None
 ::StringW  Domain;

/// @brief Field Password, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  Password;

/// @brief Field LoadUserProfile, offset: 0x30, size: 0x1, def value: None
 bool  LoadUserProfile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, process_handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, pid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, envVariables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, UserName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, Domain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, Password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Process_ProcInfo, LoadUserProfile) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Process_ProcInfo) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
