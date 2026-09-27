#pragma once
// IWYU pragma private; include "Pathfinding/BlockManager_BlockMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockManager_BlockMode)
// Forward declare root types
namespace GlobalNamespace {
struct BlockManager_BlockMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BlockManager_BlockMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlockManager_BlockMode, "Pathfinding", "BlockManager/BlockMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.BlockManager/BlockMode
struct CORDL_TYPE BlockManager_BlockMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BlockManager_BlockMode_Unwrapped
enum struct __BlockManager_BlockMode_Unwrapped : int32_t {
__E_AllExceptSelector = static_cast<int32_t>(0x0),
__E_OnlySelector = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BlockManager_BlockMode_Unwrapped () const noexcept {
return static_cast<__BlockManager_BlockMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BlockManager_BlockMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BlockManager_BlockMode(int32_t  value__) noexcept;

/// @brief Field AllExceptSelector value: I32(0)
static ::GlobalNamespace::BlockManager_BlockMode const AllExceptSelector;

/// @brief Field OnlySelector value: I32(1)
static ::GlobalNamespace::BlockManager_BlockMode const OnlySelector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlockManager_BlockMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlockManager_BlockMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
