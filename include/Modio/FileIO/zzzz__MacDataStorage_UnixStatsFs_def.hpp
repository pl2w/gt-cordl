#pragma once
// IWYU pragma private; include "Modio/FileIO/MacDataStorage_UnixStatsFs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MacDataStorage_UnixStatsFs)
// Forward declare root types
namespace GlobalNamespace {
struct MacDataStorage_UnixStatsFs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MacDataStorage_UnixStatsFs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MacDataStorage_UnixStatsFs, "Modio.FileIO", "MacDataStorage/UnixStatsFs");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.MacDataStorage/UnixStatsFs
struct CORDL_TYPE MacDataStorage_UnixStatsFs {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MacDataStorage_UnixStatsFs() ;

// Ctor Parameters [CppParam { name: "f_bsize", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_frsize", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_blocks", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_bfree", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_bavail", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_files", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_ffre", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_favail", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_fsid", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_flag", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "f_namemax", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr MacDataStorage_UnixStatsFs(uint64_t  f_bsize, uint64_t  f_frsize, uint64_t  f_blocks, uint64_t  f_bfree, uint64_t  f_bavail, uint64_t  f_files, uint64_t  f_ffre, uint64_t  f_favail, uint64_t  f_fsid, uint64_t  f_flag, uint64_t  f_namemax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field f_bsize, offset: 0x0, size: 0x8, def value: None
 uint64_t  f_bsize;

/// @brief Field f_frsize, offset: 0x8, size: 0x8, def value: None
 uint64_t  f_frsize;

/// @brief Field f_blocks, offset: 0x10, size: 0x8, def value: None
 uint64_t  f_blocks;

/// @brief Field f_bfree, offset: 0x18, size: 0x8, def value: None
 uint64_t  f_bfree;

/// @brief Field f_bavail, offset: 0x20, size: 0x8, def value: None
 uint64_t  f_bavail;

/// @brief Field f_files, offset: 0x28, size: 0x8, def value: None
 uint64_t  f_files;

/// @brief Field f_ffre, offset: 0x30, size: 0x8, def value: None
 uint64_t  f_ffre;

/// @brief Field f_favail, offset: 0x38, size: 0x8, def value: None
 uint64_t  f_favail;

/// @brief Field f_fsid, offset: 0x40, size: 0x8, def value: None
 uint64_t  f_fsid;

/// @brief Field f_flag, offset: 0x48, size: 0x8, def value: None
 uint64_t  f_flag;

/// @brief Field f_namemax, offset: 0x50, size: 0x8, def value: None
 uint64_t  f_namemax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_bsize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_frsize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_blocks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_bfree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_bavail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_files) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_ffre) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_favail) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_fsid) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_flag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MacDataStorage_UnixStatsFs, f_namemax) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MacDataStorage_UnixStatsFs) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
