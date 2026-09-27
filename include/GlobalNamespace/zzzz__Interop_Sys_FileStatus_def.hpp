#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_FileStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatusFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_FileStatus)
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_FileStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_FileStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_FileStatus, "", "Interop/Sys/FileStatus");
// Dependencies Interop::Sys::FileStatusFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/FileStatus
struct CORDL_TYPE Sys_Interop_FileStatus {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_FileStatus() ;

// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::Sys_Interop_FileStatusFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_FileStatus(::GlobalNamespace::Sys_Interop_FileStatusFlags  Flags, int32_t  Mode, uint32_t  Uid, uint32_t  Gid, int64_t  Size, int64_t  ATime, int64_t  ATimeNsec, int64_t  MTime, int64_t  MTimeNsec, int64_t  CTime, int64_t  CTimeNsec, int64_t  BirthTime, int64_t  BirthTimeNsec, int64_t  Dev, int64_t  Ino, uint32_t  UserFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Sys_Interop_FileStatusFlags  Flags;

/// @brief Field Mode, offset: 0x4, size: 0x4, def value: None
 int32_t  Mode;

/// @brief Field Uid, offset: 0x8, size: 0x4, def value: None
 uint32_t  Uid;

/// @brief Field Gid, offset: 0xc, size: 0x4, def value: None
 uint32_t  Gid;

/// @brief Field Size, offset: 0x10, size: 0x8, def value: None
 int64_t  Size;

/// @brief Field ATime, offset: 0x18, size: 0x8, def value: None
 int64_t  ATime;

/// @brief Field ATimeNsec, offset: 0x20, size: 0x8, def value: None
 int64_t  ATimeNsec;

/// @brief Field MTime, offset: 0x28, size: 0x8, def value: None
 int64_t  MTime;

/// @brief Field MTimeNsec, offset: 0x30, size: 0x8, def value: None
 int64_t  MTimeNsec;

/// @brief Field CTime, offset: 0x38, size: 0x8, def value: None
 int64_t  CTime;

/// @brief Field CTimeNsec, offset: 0x40, size: 0x8, def value: None
 int64_t  CTimeNsec;

/// @brief Field BirthTime, offset: 0x48, size: 0x8, def value: None
 int64_t  BirthTime;

/// @brief Field BirthTimeNsec, offset: 0x50, size: 0x8, def value: None
 int64_t  BirthTimeNsec;

/// @brief Field Dev, offset: 0x58, size: 0x8, def value: None
 int64_t  Dev;

/// @brief Field Ino, offset: 0x60, size: 0x8, def value: None
 int64_t  Ino;

/// @brief Field UserFlags, offset: 0x68, size: 0x4, def value: None
 uint32_t  UserFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Mode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Uid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Gid) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, ATime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, ATimeNsec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, MTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, MTimeNsec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, CTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, CTimeNsec) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, BirthTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, BirthTimeNsec) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Dev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, Ino) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Sys_Interop_FileStatus, UserFlags) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_FileStatus) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
