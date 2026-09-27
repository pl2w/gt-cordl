#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateBlocks_InflateBlockMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InflateBlocks_InflateBlockMode)
// Forward declare root types
namespace GlobalNamespace {
struct InflateBlocks_InflateBlockMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InflateBlocks_InflateBlockMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InflateBlocks_InflateBlockMode, "Pathfinding.Ionic.Zlib", "InflateBlocks/InflateBlockMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode
struct CORDL_TYPE InflateBlocks_InflateBlockMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InflateBlocks_InflateBlockMode_Unwrapped
enum struct __InflateBlocks_InflateBlockMode_Unwrapped : int32_t {
__E_TYPE = static_cast<int32_t>(0x0),
__E_LENS = static_cast<int32_t>(0x1),
__E_STORED = static_cast<int32_t>(0x2),
__E_TABLE = static_cast<int32_t>(0x3),
__E_BTREE = static_cast<int32_t>(0x4),
__E_DTREE = static_cast<int32_t>(0x5),
__E_CODES = static_cast<int32_t>(0x6),
__E_DRY = static_cast<int32_t>(0x7),
__E_DONE = static_cast<int32_t>(0x8),
__E_BAD = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InflateBlocks_InflateBlockMode_Unwrapped () const noexcept {
return static_cast<__InflateBlocks_InflateBlockMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InflateBlocks_InflateBlockMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InflateBlocks_InflateBlockMode(int32_t  value__) noexcept;

/// @brief Field BAD value: I32(9)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const BAD;

/// @brief Field BTREE value: I32(4)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const BTREE;

/// @brief Field CODES value: I32(6)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const CODES;

/// @brief Field DONE value: I32(8)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const DONE;

/// @brief Field DRY value: I32(7)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const DRY;

/// @brief Field DTREE value: I32(5)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const DTREE;

/// @brief Field LENS value: I32(1)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const LENS;

/// @brief Field STORED value: I32(2)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const STORED;

/// @brief Field TABLE value: I32(3)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const TABLE;

/// @brief Field TYPE value: I32(0)
static ::GlobalNamespace::InflateBlocks_InflateBlockMode const TYPE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InflateBlocks_InflateBlockMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InflateBlocks_InflateBlockMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
