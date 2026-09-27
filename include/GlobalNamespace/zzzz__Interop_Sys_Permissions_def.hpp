#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_Permissions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_Permissions)
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_Permissions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_Permissions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_Permissions, "", "Interop/Sys/Permissions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/Permissions
struct CORDL_TYPE Sys_Interop_Permissions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sys_Interop_Permissions_Unwrapped
enum struct __Sys_Interop_Permissions_Unwrapped : int32_t {
__E_Mask = static_cast<int32_t>(0x1ff),
__E_S_IRWXU = static_cast<int32_t>(0x1c0),
__E_S_IRUSR = static_cast<int32_t>(0x100),
__E_S_IWUSR = static_cast<int32_t>(0x80),
__E_S_IXUSR = static_cast<int32_t>(0x40),
__E_S_IRWXG = static_cast<int32_t>(0x38),
__E_S_IRGRP = static_cast<int32_t>(0x20),
__E_S_IWGRP = static_cast<int32_t>(0x10),
__E_S_IXGRP = static_cast<int32_t>(0x8),
__E_S_IRWXO = static_cast<int32_t>(0x7),
__E_S_IROTH = static_cast<int32_t>(0x4),
__E_S_IWOTH = static_cast<int32_t>(0x2),
__E_S_IXOTH = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sys_Interop_Permissions_Unwrapped () const noexcept {
return static_cast<__Sys_Interop_Permissions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_Permissions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_Permissions(int32_t  value__) noexcept;

/// @brief Field Mask value: I32(511)
static ::GlobalNamespace::Sys_Interop_Permissions const Mask;

/// @brief Field S_IRGRP value: I32(32)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IRGRP;

/// @brief Field S_IROTH value: I32(4)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IROTH;

/// @brief Field S_IRUSR value: I32(256)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IRUSR;

/// @brief Field S_IRWXG value: I32(56)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXG;

/// @brief Field S_IRWXO value: I32(7)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXO;

/// @brief Field S_IRWXU value: I32(448)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IRWXU;

/// @brief Field S_IWGRP value: I32(16)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IWGRP;

/// @brief Field S_IWOTH value: I32(2)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IWOTH;

/// @brief Field S_IWUSR value: I32(128)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IWUSR;

/// @brief Field S_IXGRP value: I32(8)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IXGRP;

/// @brief Field S_IXOTH value: I32(1)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IXOTH;

/// @brief Field S_IXUSR value: I32(64)
static ::GlobalNamespace::Sys_Interop_Permissions const S_IXUSR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_Permissions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_Permissions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
