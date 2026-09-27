#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler_CutMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TileHandler_CutMode)
// Forward declare root types
namespace GlobalNamespace {
struct TileHandler_CutMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TileHandler_CutMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TileHandler_CutMode, "Pathfinding.Util", "TileHandler/CutMode");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Util.TileHandler/CutMode
struct CORDL_TYPE TileHandler_CutMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TileHandler_CutMode_Unwrapped
enum struct __TileHandler_CutMode_Unwrapped : int32_t {
__E_CutAll = static_cast<int32_t>(0x1),
__E_CutDual = static_cast<int32_t>(0x2),
__E_CutExtra = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TileHandler_CutMode_Unwrapped () const noexcept {
return static_cast<__TileHandler_CutMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TileHandler_CutMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TileHandler_CutMode(int32_t  value__) noexcept;

/// @brief Field CutAll value: I32(1)
static ::GlobalNamespace::TileHandler_CutMode const CutAll;

/// @brief Field CutDual value: I32(2)
static ::GlobalNamespace::TileHandler_CutMode const CutDual;

/// @brief Field CutExtra value: I32(4)
static ::GlobalNamespace::TileHandler_CutMode const CutExtra;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TileHandler_CutMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TileHandler_CutMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
