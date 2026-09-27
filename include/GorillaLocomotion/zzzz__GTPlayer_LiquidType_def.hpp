#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_LiquidType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayer_LiquidType)
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_LiquidType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_LiquidType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_LiquidType, "GorillaLocomotion", "GTPlayer/LiquidType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/LiquidType
struct CORDL_TYPE GTPlayer_LiquidType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTPlayer_LiquidType_Unwrapped
enum struct __GTPlayer_LiquidType_Unwrapped : int32_t {
__E_Water = static_cast<int32_t>(0x0),
__E_Lava = static_cast<int32_t>(0x1),
__E_SwimInAir = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTPlayer_LiquidType_Unwrapped () const noexcept {
return static_cast<__GTPlayer_LiquidType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_LiquidType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_LiquidType(int32_t  value__) noexcept;

/// @brief Field Lava value: I32(1)
static ::GlobalNamespace::GTPlayer_LiquidType const Lava;

/// @brief Field SwimInAir value: I32(2)
static ::GlobalNamespace::GTPlayer_LiquidType const SwimInAir;

/// @brief Field Water value: I32(0)
static ::GlobalNamespace::GTPlayer_LiquidType const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_LiquidType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_LiquidType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
