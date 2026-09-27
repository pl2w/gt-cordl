#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tile_ColliderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tile_ColliderType)
// Forward declare root types
namespace GlobalNamespace {
struct Tile_ColliderType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tile_ColliderType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tile_ColliderType, "UnityEngine.Tilemaps", "Tile/ColliderType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tile/ColliderType
struct CORDL_TYPE Tile_ColliderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Tile_ColliderType_Unwrapped
enum struct __Tile_ColliderType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Sprite = static_cast<int32_t>(0x1),
__E_Grid = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tile_ColliderType_Unwrapped () const noexcept {
return static_cast<__Tile_ColliderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Tile_ColliderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Tile_ColliderType(int32_t  value__) noexcept;

/// @brief Field Grid value: I32(2)
static ::GlobalNamespace::Tile_ColliderType const Grid;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Tile_ColliderType const None;

/// @brief Field Sprite value: I32(1)
static ::GlobalNamespace::Tile_ColliderType const Sprite;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tile_ColliderType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tile_ColliderType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
