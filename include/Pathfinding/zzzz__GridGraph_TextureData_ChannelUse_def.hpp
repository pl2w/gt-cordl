#pragma once
// IWYU pragma private; include "Pathfinding/GridGraph_TextureData_ChannelUse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridGraph_TextureData_ChannelUse)
// Forward declare root types
namespace GlobalNamespace {
struct TextureData_GridGraph_ChannelUse;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextureData_GridGraph_ChannelUse);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureData_GridGraph_ChannelUse, "Pathfinding", "GridGraph/TextureData/ChannelUse");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.GridGraph/TextureData/ChannelUse
struct CORDL_TYPE TextureData_GridGraph_ChannelUse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureData_GridGraph_ChannelUse_Unwrapped
enum struct __TextureData_GridGraph_ChannelUse_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Penalty = static_cast<int32_t>(0x1),
__E_Position = static_cast<int32_t>(0x2),
__E_WalkablePenalty = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureData_GridGraph_ChannelUse_Unwrapped () const noexcept {
return static_cast<__TextureData_GridGraph_ChannelUse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureData_GridGraph_ChannelUse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TextureData_GridGraph_ChannelUse(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TextureData_GridGraph_ChannelUse const None;

/// @brief Field Penalty value: I32(1)
static ::GlobalNamespace::TextureData_GridGraph_ChannelUse const Penalty;

/// @brief Field Position value: I32(2)
static ::GlobalNamespace::TextureData_GridGraph_ChannelUse const Position;

/// @brief Field WalkablePenalty value: I32(3)
static ::GlobalNamespace::TextureData_GridGraph_ChannelUse const WalkablePenalty;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureData_GridGraph_ChannelUse, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureData_GridGraph_ChannelUse) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
