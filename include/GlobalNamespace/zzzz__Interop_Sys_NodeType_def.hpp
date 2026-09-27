#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_NodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Interop_Sys_NodeType)
// Forward declare root types
namespace GlobalNamespace {
struct Sys_Interop_NodeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Sys_Interop_NodeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Sys_Interop_NodeType, "", "Interop/Sys/NodeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Interop/Sys/NodeType
struct CORDL_TYPE Sys_Interop_NodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Sys_Interop_NodeType_Unwrapped
enum struct __Sys_Interop_NodeType_Unwrapped : int32_t {
__E_DT_UNKNOWN = static_cast<int32_t>(0x0),
__E_DT_FIFO = static_cast<int32_t>(0x1),
__E_DT_CHR = static_cast<int32_t>(0x2),
__E_DT_DIR = static_cast<int32_t>(0x4),
__E_DT_BLK = static_cast<int32_t>(0x6),
__E_DT_REG = static_cast<int32_t>(0x8),
__E_DT_LNK = static_cast<int32_t>(0xa),
__E_DT_SOCK = static_cast<int32_t>(0xc),
__E_DT_WHT = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Sys_Interop_NodeType_Unwrapped () const noexcept {
return static_cast<__Sys_Interop_NodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Sys_Interop_NodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Sys_Interop_NodeType(int32_t  value__) noexcept;

/// @brief Field DT_BLK value: I32(6)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_BLK;

/// @brief Field DT_CHR value: I32(2)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_CHR;

/// @brief Field DT_DIR value: I32(4)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_DIR;

/// @brief Field DT_FIFO value: I32(1)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_FIFO;

/// @brief Field DT_LNK value: I32(10)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_LNK;

/// @brief Field DT_REG value: I32(8)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_REG;

/// @brief Field DT_SOCK value: I32(12)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_SOCK;

/// @brief Field DT_UNKNOWN value: I32(0)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_UNKNOWN;

/// @brief Field DT_WHT value: I32(14)
static ::GlobalNamespace::Sys_Interop_NodeType const DT_WHT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Sys_Interop_NodeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Sys_Interop_NodeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
